#include <filesystem>
#include <fstream>
#include <iostream>

#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/json_serializers.h>
#include <nlohmann/json.hpp>

#include <Modloader/app/methods/UnityEngine/CapsuleCollider.h>
#include <Modloader/app/methods/UnityEngine/Mesh.h>
#include <Modloader/app/methods/UnityEngine/MeshCollider.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/CapsuleCollider.h>
#include <Modloader/app/types/DamageDealer.h>
#include <Modloader/app/types/Mesh.h>
#include <Modloader/app/types/MeshCollider.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/clipboard.h>
#include <Modloader/windows_api/console.h>

// TODO:
// logs in water wrong direction
// post processing to combine scenes
// fix issue in shriek room
// check if damageDealer values can be extracted, current values confusing (magic_enum)
// check if damageable hitboxes (walls) can be detected
// check if enemies/npcs can be flaged as such
// fix sand meshColliders (fu moon/unity)
// find way to extract colliders depending on states (different position/enabled)

using namespace app::classes;
using namespace modloader::win;
using json = nlohmann::json;

namespace {

    class line {
    public:
        std::vector<std::pair<float, float>> vertecies;
        line(std::pair<float, float> vertexA, std::pair<float, float> vertexB) { vertecies = {vertexA, vertexB}; }
        line(std::vector<app::Vector3> vectors) {
            for (const auto& vector: vectors) {
                std ::pair<float, float> vertex = {vector.x, vector.y};
                vertecies.emplace_back(vertex);
            }
        }
        int indexOf(std::pair<float, float> vertex) {
            if (vertecies[0].first == vertex.first && vertecies[0].second == vertex.second) {
                return 0;
            } else if (vertecies[1].first == vertex.first && vertecies[1].second == vertex.second) {
                return 1;
            } else {
                return -1;
            }
        }
        bool contains(std::pair<float, float> vertex) { return indexOf(vertex) >= 0; }
    };

    class contour {
    public:
        std::vector<line> lines;
        void addLine(const std::pair<float, float> vertexA, const std::pair<float, float> vertexB) { lines.emplace_back(vertexA, vertexB); }
        void addLine(const line line) { lines.emplace_back(line); }
        bool containsVertex(const std::pair<float, float> vertex) {
            for (int x = 0; x < lines.size(); x++) {
                if (lines[x].contains(vertex)) {
                    return true;
                }
            }
            return false;
        }
        bool containsLineVertex(line line) { return containsVertex(line.vertecies[0]) || containsVertex(line.vertecies[1]); }
        bool containsLine(const std::pair<float, float> vertexA, const std::pair<float, float> vertexB) {
            for (auto line: lines) {
                if (line.contains(vertexA) && line.contains(vertexB)) {
                    return true;
                }
            }
            return false;
        }
    };

    int indexOfContourWithVertex(const std::vector<contour> contours, const std::pair<float, float>& vertex) {
        for (int i = 0; i < contours.size(); ++i) {
            contour _contour = contours[i];
            if (_contour.containsVertex(vertex)) {
                return i;
            }
        }
        return -1; // Element not found
    }

    int indexOfContourWithLineVertex(const std::vector<contour> contours, const line line) {
        for (int i = 0; i < contours.size(); ++i) {
            contour _contour = contours[i];
            if (_contour.containsLineVertex(line)) {
                return i;
            }
        }
        return -1; // Element not found
    }

    void export_json(json j, std::string filepath) {
        std::ofstream outputFile(filepath);
        if (outputFile.is_open()) {
            outputFile << j.dump(2);

            outputFile.close();

            std::cout << "JSON data successfully written to " << filepath << std::endl;
        } else {
            std::cerr << "Error opening the file: " << filepath << std::endl;
        }
    }

    int getIndexInParent(app::GameObject* go) {
        auto parent_go = il2cpp::unity::get_parent(go);
        auto children = il2cpp::unity::get_children(parent_go);
        for (int i = 0; i < children.size(); i++) {
            auto child = children[i];
            if (il2cpp::unity::equals(child, go)) {
                return i;
            }
        }
    }

    std::string getfilename(app::GameObject* go) {

        std::string filename = il2cpp::unity::get_path(go);
        std::replace(filename.begin(), filename.end(), '/', '_');

        auto go_name = il2cpp::unity::get_object_name(go);
        auto parent_go = il2cpp::unity::get_parent(go);

        auto children = il2cpp::unity::find_children(parent_go, std::vector<std::string>{go_name});
        if (children.size() == 1) {
            return filename;
        }

        children = il2cpp::unity::get_children(parent_go);

        //auto go_ID = UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(go));
            //auto child_ID = UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(child));
        for (int i = 0; i < children.size(); i++) {
            auto child = children[i];
            if (il2cpp::unity::equals(child, go)) {
                return std::format("{}_{}", filename, i);
            }
        }

        return std::format("{}_{}", filename, "ERROR");
    }

    void export_MeshCollider(app::MeshCollider* mesh_collider, std::string scene_name, std::string export_directory) {

        auto comp_go = il2cpp::unity::get_game_object(mesh_collider);
        auto comp_name = il2cpp::unity::get_object_name(comp_go);
        auto comp_path = il2cpp::unity::get_path(comp_go);
        auto comp_transform = il2cpp::unity::get_transform(comp_go);

        auto comp_position = il2cpp::unity::get_position(comp_go);

        std::string filepath = std::format("{}/{}.json", export_directory, getfilename(comp_go));
        if (std::filesystem::exists(filepath)) {
            return;
        }

        auto mesh = UnityEngine::MeshCollider::get_sharedMesh(mesh_collider);
        auto mesh_triangles = UnityEngine::Mesh::get_triangles(mesh);
        auto mesh_vertices = UnityEngine::Mesh::get_vertices(mesh);

        json j;
        j["scene_name"] = scene_name;
        j["type"] = "meshCollider";
        j["name"] = comp_name;
        j["worldPosition"] = comp_position;
        j["hierarchy_path"] = comp_path;

        for (auto& vector: il2cpp::ArrayIterator(mesh_vertices)) {
            vector = UnityEngine::Transform::TransformPoint_1(comp_transform, vector);
        }
        std::vector<std::pair<float, float>> unique_vertecies;
        for (int i = 0; i < mesh_vertices->max_length; i++) {
            std::pair<float, float> vertex = {mesh_vertices->vector[i].x, mesh_vertices->vector[i].y};
            if (std::find(unique_vertecies.begin(), unique_vertecies.end(), vertex) == unique_vertecies.end()) {
                unique_vertecies.emplace_back(vertex.first, vertex.second);
            }
        }

        std::vector<contour> contours;

        for (int i = 0; i < mesh_triangles->max_length; i += 3) {
            // get vertices of triangle
            app::Vector3 triangle_vertices[] = {
                mesh_vertices->vector[mesh_triangles->vector[i]],
                mesh_vertices->vector[mesh_triangles->vector[i + 1]],
                mesh_vertices->vector[mesh_triangles->vector[i + 2]]};

            // ignore triangles with two vectors with negative z coordinates
            int positive_coords_count = 0;
            for (int n = 0; n < 3; n++) {
                if (triangle_vertices[n].z > 0) {
                    positive_coords_count++;
                }
            }
            if (positive_coords_count != 2) {
                continue;
            }

            // get the line of the triangle
            std::vector<app::Vector3> triangle_line_verticies;
            std::copy_if(
                std::begin(triangle_vertices),
                std::end(triangle_vertices),
                std::back_inserter(triangle_line_verticies),
                [](const app::Vector3& vertex) { return vertex.z > 0; }
            );

            line triangle_line(triangle_line_verticies);
            int indexOfContour = indexOfContourWithLineVertex(contours, triangle_line);

            if (indexOfContour >= 0) {
                contours[indexOfContour].addLine(triangle_line);
            } else {
                contour newContour;
                newContour.addLine(triangle_line);
                contours.push_back(newContour);
            }
        }

        if (contours.size() == 0) {
            return;
        }

        float min_value_X = std::numeric_limits<float>::max();
        float min_value_Y = std::numeric_limits<float>::max();
        float max_value_X = std::numeric_limits<float>::lowest();
        float max_value_Y = std::numeric_limits<float>::lowest();

        std::vector<std::vector<std::pair<float, float>>> vector_groups;
        vector_groups.resize(contours.size());

        // get bounding box
        for (auto vertex: unique_vertecies) {
            if (vertex.first < min_value_X) {
                min_value_X = vertex.first;
            }
            if (vertex.first > max_value_X) {
                max_value_X = vertex.first;
            }
            if (vertex.second < min_value_Y) {
                min_value_Y = vertex.second;
            }
            if (vertex.second > max_value_Y) {
                max_value_Y = vertex.second;
            }

            auto index = indexOfContourWithVertex(contours, vertex);

            if (index < 0) {
                continue;
            }
            vector_groups[index].emplace_back(vertex);
        }

        for (int n = 0; n < vector_groups.size(); n++) {
            if (vector_groups[n].size() == 0) {
                continue;
            }
            if (contours[n].containsLine(vector_groups[n][0], vector_groups[n][vector_groups[n].size() - 1])) {
                vector_groups[n].emplace_back(vector_groups[n][0]);
            }
        }

        auto damageDealer = il2cpp::unity::get_component<app::DamageDealer>(comp_go, types::DamageDealer::get_class());

        // export as json
        j["data"]["vectors"] = vector_groups;
        j["data"]["boundingbox"] = {
            {"x",      min_value_X                        },
            {"y",      min_value_Y                        },
            {"width",  std::abs(max_value_X - min_value_X)},
            {"height", std::abs(max_value_Y - min_value_Y)}
        };
        if (damageDealer != nullptr) {
            j["data"]["damageDealer"] = {
                {"damageAmount",  damageDealer->fields.m_damageAmount },
                {"KickbackForce", damageDealer->fields.KickbackForce  },
                {"isKillSurface", damageDealer->fields.m_isKillSurface},
                {"damageWeight",  damageDealer->fields.DamageWeight   },
            };
        }

        export_json(j, filepath);
    }

    void export_capsuleCollider(app::CapsuleCollider* capsule_Collider, std::string scene_name, std::string export_directory) {

        auto comp_go = il2cpp::unity::get_game_object(capsule_Collider);
        auto comp_name = il2cpp::unity::get_object_name(comp_go);
        auto comp_path = il2cpp::unity::get_path(comp_go);
        auto comp_transform = il2cpp::unity::get_transform(comp_go);

        auto comp_position = il2cpp::unity::get_position(comp_go);

        std::string filepath = std::format("{}/{}.json", export_directory, getfilename(comp_go));
        if (std::filesystem::exists(filepath)) {
            return;
        }

        auto center = UnityEngine::CapsuleCollider::get_center(capsule_Collider);
        auto direction = UnityEngine::CapsuleCollider::get_direction(capsule_Collider);
        auto radius = UnityEngine::CapsuleCollider::get_radius(capsule_Collider);
        auto height = UnityEngine::CapsuleCollider::get_height(capsule_Collider);

        app::Vector3 direction_Vector;
        switch (direction) {
            case 0:
                direction_Vector = {1, 0, 0};
                break;
            case 1:
                direction_Vector = {0, 1, 0};
                break;
            case 2:
                direction_Vector = {0, 0, 1};
            default:
                break;
        }

        float halfWidth = radius;
        float halfHeight = height / 2;

        app::Vector3 corner_topLeft = {center.x - halfWidth, center.y - halfHeight, center.z};
        app::Vector3 corner_topRight = {center.x + halfWidth, center.y - halfHeight, center.z};
        app::Vector3 corner_bottomLeft = {center.x - halfWidth, center.y + halfHeight, center.z};
        app::Vector3 corner_bottomRight = {center.x + halfWidth, center.y + halfHeight, center.z};

        corner_topLeft = UnityEngine::Transform::TransformPoint_1(comp_transform, corner_topLeft);
        corner_topRight = UnityEngine::Transform::TransformPoint_1(comp_transform, corner_topRight);
        corner_bottomLeft = UnityEngine::Transform::TransformPoint_1(comp_transform, corner_bottomLeft);
        corner_bottomRight = UnityEngine::Transform::TransformPoint_1(comp_transform, corner_bottomRight);

        std::vector<std::pair<float, float>> outer_vectors;
        outer_vectors.emplace_back(corner_topLeft.x, corner_topLeft.y);
        outer_vectors.emplace_back(corner_topRight.x, corner_topRight.y);
        outer_vectors.emplace_back(corner_bottomRight.x, corner_bottomRight.y);
        outer_vectors.emplace_back(corner_bottomLeft.x, corner_bottomLeft.y);
        outer_vectors.emplace_back(corner_topLeft.x, corner_topLeft.y);

        json j;
        j["sceneName"] = scene_name;
        j["type"] = "capsuleCollider";
        j["name"] = comp_name;
        j["worldPosition"] = comp_position;
        j["hierarchy_path"] = comp_path;
        j["data"] = {
            {"vectorCenter", center       },
            {"direction",    direction    },
            {"radius",       radius       },
            {"heigth",       height       },
            {"outerVectors", outer_vectors}
        };

        export_json(j, filepath);
    } // namespace

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);
        if (scene_root_go == nullptr) {
            return;
        }
        std::string export_directory = "C:/moon/sceneCollisions";
        if (!std::filesystem::exists(export_directory)) {
            std::filesystem::create_directory(export_directory);
        }


        auto mesh_colliders = il2cpp::unity::get_components_in_children<app::MeshCollider>(scene_root_go, types::MeshCollider::get_class(), true);
        auto capsule_colliders = il2cpp::unity::get_components_in_children<app::CapsuleCollider>(scene_root_go, types::CapsuleCollider::get_class(), true);

        for (auto mesh_collider: mesh_colliders) {
            export_MeshCollider(mesh_collider, metadata->scene_name, export_directory);
        }

        for (auto capsule_collider: capsule_colliders) {
            export_capsuleCollider(capsule_collider, metadata->scene_name, export_directory);
        }
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
