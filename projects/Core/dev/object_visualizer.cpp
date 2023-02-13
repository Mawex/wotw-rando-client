#include <dev/object_visualizer.h>

#include <Common/ext.h>

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Respawner.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Single__Boxed.h>
#include <Modloader/app/structs/StateCondition.h>
#include <Modloader/app/structs/UInt32__Boxed.h>
#include <Modloader/app/structs/UberStateBoolCondition.h>
#include <Modloader/app/structs/UberStateValueCondition.h>
#include <Modloader/app/types/IUberState.h>
#include <Modloader/app/types/Object.h>
#include <Modloader/app/types/Quaternion.h>

#include <unordered_map>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;
using namespace app::classes::UnityEngine;

#define TRY(x)      \
    try {           \
        x           \
    } catch (...) { \
    }

namespace dev::visualize {
    namespace {
        using visualize_func = void (*)(Visualizer& visualizer, void* obj);

        std::string get_full_name(Il2CppClass* klass) {
            if (std::string(klass->namespaze).empty())
                return klass->name;
            else
                return fmt::format("{}.{}", klass->namespaze, klass->name);
        }

        std::string get_full_name(void* obj) {
            auto cast = reinterpret_cast<Il2CppObject*>(obj);
            if (std::string(cast->Il2CppClass.klass->namespaze).empty())
                return cast->Il2CppClass.klass->name;
            else
                return fmt::format("{}.{}", cast->Il2CppClass.klass->namespaze, cast->Il2CppClass.klass->name);
        }

        void indent(Visualizer& visualizer, int pre = 0, int post = 0) {
            visualizer.current_state.indent_level += pre;
            for (auto i = 0; i < visualizer.current_state.indent_level; ++i)
                visualizer.stream << visualizer.indent;

            visualizer.current_state.indent_level += post;
        }

        app::IUberStateGroup* get_group(app::IUberState* state) {
            return il2cpp::invoke_virtual<app::IUberStateGroup>(
                state,
                reinterpret_cast<Il2CppClass*>(types::IUberState::get_class()),
                "get_UberStateGroup"
            );
        }

        void visualize_object_internal(Visualizer& visualizer, void* obj, int id = 0) {
            Visualizer::State state{};
            state.id = id;
            state.indent_level = visualizer.current_state.indent_level;
            state.depth = visualizer.current_state.depth;
            auto it = visualizer.visualizer_queue.begin();
            auto index = visualizer.visualizer_queue.size() - visualizer.last_queue_size;
            if (index < 0)
                trace(MessageType::Debug, 1, "deb", "queue size mismatch.");

            if (index > 0)
                it += index;

            visualizer.visualizer_queue.insert(it, std::make_pair(reinterpret_cast<Il2CppObject*>(obj), state));
        }

        void visualize_unity_object(Visualizer& visualizer, void* obj) {
            auto name = il2cpp::unity::get_object_name(obj);
            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;
        }

        void visualize_game_object(Visualizer& visualizer, void* obj) {
            auto game_object = reinterpret_cast<app::GameObject*>(obj);
            switch (visualizer.current_state.id) {
                case 0: {
                    auto name = il2cpp::unity::get_object_name(game_object);
                    indent(visualizer);
                    visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;
                    auto layer = il2cpp::invoke<app::Int32__Boxed>(game_object, "get_layer")->fields;
                    indent(visualizer, 1);
                    visualizer.stream << "layer: " << layer << visualizer.new_line;
                    indent(visualizer, 0, 1);
                    auto components = il2cpp::unity::get_components(game_object);
                    visualizer.stream << "components (" << components.size() << "):" << visualizer.new_line;
                    for (auto component : components)
                        visualize_object_internal(visualizer, component);

                    visualize_object_internal(visualizer, obj, 1);
                    break;
                }
                case 1: {
                    auto children = il2cpp::unity::get_children(game_object);
                    indent(visualizer, -1, 1);
                    visualizer.stream << "children (" << children.size() << "):" << visualizer.new_line;
                    if (visualizer.level > Visualizer::InfoLevel::Low && visualizer.current_state.depth > 0) {
                        visualizer.current_state.depth -= 1;
                        for (auto child : children)
                            visualize_object_internal(visualizer, child);
                    }
                    break;
                }
                default:
                    break;
            }
        }

        void visualize_vector2(Visualizer& visualizer, void* obj) {
            auto vec = reinterpret_cast<app::Vector2*>(obj);
            visualizer.stream << "{ " << vec->x << ", " << vec->y << " }" << visualizer.new_line;
        }

        void visualize_vector3(Visualizer& visualizer, void* obj) {
            auto vec = reinterpret_cast<app::Vector3*>(obj);
            visualizer.stream << "{ " << vec->x << ", " << vec->y << ", " << vec->z << " }" << visualizer.new_line;
        }

        void visualize_vector4(Visualizer& visualizer, void* obj) {
            auto vec = reinterpret_cast<app::Vector4*>(obj);
            visualizer.stream << "{ " << vec->x << ", " << vec->y << ", " << vec->z << ", " << vec->w << " }"
                              << visualizer.new_line;
        }

        void visualize_color32(Visualizer& visualizer, void* obj) {
            auto color = reinterpret_cast<app::Color32*>(obj);
            visualizer.stream << "{ " << color->r << ", " << color->g << ", " << color->b << ", " << color->a << " }"
                              << visualizer.new_line;
        }

        void visualize_int(Visualizer& visualizer, void* obj) {
            auto i = reinterpret_cast<int*>(obj);
            visualizer.stream << i << visualizer.new_line;
        }

        void visualize_array(Visualizer& visualizer, app::Array* arr, const char* name, visualize_func vis, bool is_value_type = true, bool do_element_indent = true) {
            if (!il2cpp::unity::is_valid(arr)) {
                indent(visualizer);
                visualizer.stream << name << ": nullptr" << visualizer.new_line;
                return;
            }

            indent(visualizer, 0, 1);
            visualizer.stream << name << ": {" << visualizer.new_line;
            auto element = reinterpret_cast<char*>(arr->vector);
            for (int i = 0; i < arr->max_length; ++i) {
                if (do_element_indent)
                    indent(visualizer);

                if (is_value_type)
                    vis(visualizer, reinterpret_cast<Il2CppObject*>(&element[i * arr->klass->_1.element_size]));
                else if (is_value_type)
                    vis(visualizer, reinterpret_cast<Il2CppObject*>(element[i * arr->klass->_1.element_size]));
            }

            indent(visualizer, -1);
            visualizer.stream << "}" << visualizer.new_line;
        }

        void visualize_transform(Visualizer& visualizer, void* obj) {
            auto transform = reinterpret_cast<app::Transform*>(obj);
            auto name = il2cpp::unity::get_object_name(transform);
            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;

            auto world_position = Transform::get_position(transform);
            auto position = Transform::get_localPosition(transform);
            auto scale = Transform::get_localScale(transform);
            auto rotation = Transform::get_rotation(transform);
            auto boxed_rotation = types::Quaternion::box(rotation);
            auto euler = Quaternion::get_eulerAngles(boxed_rotation);

            indent(visualizer, 1);
            visualizer.stream << "world_position: ";
            visualize_vector3(visualizer, &world_position);
            indent(visualizer);
            visualizer.stream << "position: ";
            visualize_vector3(visualizer, &position);
            indent(visualizer);
            visualizer.stream << "scale: ";
            visualize_vector3(visualizer, &scale);
            indent(visualizer);
            visualizer.stream << "rotation: ";
            visualize_vector3(visualizer, &euler);
        }

        void visualize_unity_mesh(Visualizer& visualizer, void* obj) {
            if (!il2cpp::unity::is_valid(obj)) {
                indent(visualizer);
                visualizer.stream << "nullptr" << visualizer.new_line;
                return;
            }

            auto name = il2cpp::unity::get_object_name(obj);
            auto mesh = reinterpret_cast<app::Mesh*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << " - " << name << " {" << visualizer.new_line;

            if (il2cpp::invoke<app::Boolean__Boxed>(mesh, "get_canAccess")->fields) {
                auto vertices = il2cpp::invoke<app::Array>(mesh, "get_vertices");
                visualize_array(visualizer, vertices, "vertices", &visualize_vector3);
                auto normals = il2cpp::invoke<app::Array>(mesh, "get_normals");
                visualize_array(visualizer, normals, "normals", &visualize_vector3);
                auto uv = il2cpp::invoke<app::Array>(mesh, "get_uv");
                visualize_array(visualizer, uv, "uv", &visualize_vector2);
                auto uv2 = il2cpp::invoke<app::Array>(mesh, "get_uv2");
                visualize_array(visualizer, uv2, "uv2", &visualize_vector2);
                auto uv3 = il2cpp::invoke<app::Array>(mesh, "get_uv3");
                visualize_array(visualizer, uv3, "uv3", &visualize_vector2);
                auto uv4 = il2cpp::invoke<app::Array>(mesh, "get_uv4");
                visualize_array(visualizer, uv4, "uv4", &visualize_vector2);
                auto colors = il2cpp::invoke<app::Array>(mesh, "get_colors32");
                visualize_array(visualizer, colors, "colors", &visualize_color32);
                // This sometimes crashes.
                // auto triangles = il2cpp::invoke<app::Array>(mesh, "get_triangles");
                // visualize_array(visualizer, triangles, "triangles", &visualize_int);
            } else {
                indent(visualizer);
                visualizer.stream << "*NO ACCESS*" << visualizer.new_line;
            }

            indent(visualizer, -1);
            visualizer.stream << "}" << visualizer.new_line;
        }

        void visualize_unity_mesh_filter(Visualizer& visualizer, void* obj) {
            auto name = il2cpp::unity::get_object_name(obj);
            auto mesh_filter = reinterpret_cast<app::MeshFilter*>(obj);
            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;

            app::Mesh* shared_mesh = nullptr;
            TRY(shared_mesh = il2cpp::invoke<app::Mesh>(mesh_filter, "get_sharedMesh"););
            indent(visualizer, 1, 1);
            visualizer.stream << "shared_mesh:" << visualizer.new_line;
            visualize_unity_mesh(visualizer, reinterpret_cast<Il2CppObject*>(shared_mesh));
            visualizer.current_state.indent_level -= 1;
        }

        void visualize_unity_material(Visualizer& visualizer, void* obj) {
            auto name = il2cpp::unity::get_object_name(obj);
            auto renderer = reinterpret_cast<app::Material*>(obj);

            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;

            auto shader = il2cpp::invoke<app::Shader>(renderer, "get_shader");
            indent(visualizer, 1);
            visualizer.stream << "shader:" << visualizer.new_line;
            indent(visualizer, 1, -1);
            visualizer.stream << get_full_name(shader) << " - " << shader << visualizer.new_line;
            indent(visualizer, 0, -1);
            auto render_queue = il2cpp::invoke<app::Int32__Boxed>(renderer, "get_renderQueue")->fields;
            visualizer.stream << "renderQueue: " << render_queue << visualizer.new_line;
        }

        void visualize_unity_renderer(Visualizer& visualizer, void* obj) {
            auto name = il2cpp::unity::get_object_name(obj);
            auto renderer = reinterpret_cast<app::Renderer*>(obj);
            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;

            auto rendering_layer_mask = il2cpp::invoke<app::UInt32__Boxed>(renderer, "get_renderingLayerMask")->fields;
            indent(visualizer, 1);
            visualizer.stream << "rendering_layer_mask: " << rendering_layer_mask << visualizer.new_line;

            auto sorting_layer_id = il2cpp::invoke<app::Int32__Boxed>(renderer, "get_sortingLayerID")->fields;
            indent(visualizer, 0);
            visualizer.stream << "sorting_layer_id: " << sorting_layer_id << visualizer.new_line;

            auto sorting_order = il2cpp::invoke<app::Int32__Boxed>(renderer, "get_sortingOrder")->fields;
            indent(visualizer);
            visualizer.stream << "sorting_order: " << sorting_order << visualizer.new_line;

            auto moon_offset_z = il2cpp::invoke<app::Single__Boxed>(renderer, "get_moonOffsetZ")->fields;
            indent(visualizer);
            visualizer.stream << "moon_offset_z: " << moon_offset_z << visualizer.new_line;

            auto mat = UberShaderAPI::GetEditableMaterial(renderer);
            indent(visualizer, 0, 1);
            visualizer.stream << "editable_material: " << visualizer.new_line;
            visualize_unity_material(visualizer, reinterpret_cast<Il2CppObject*>(mat));

            auto shared_mat = UberShaderAPI::GetSharedMaterial(renderer);
            indent(visualizer, -1, 1);
            visualizer.stream << "shared_material: " << visualizer.new_line;
            visualize_unity_material(visualizer, reinterpret_cast<Il2CppObject*>(shared_mat));
        }

        void visualize_scene_root(Visualizer& visualizer, void* obj) {
            auto name = il2cpp::unity::get_object_name(obj);
            indent(visualizer);
            visualizer.stream << get_full_name(obj) << " - " << name << visualizer.new_line;
            auto scene_root = reinterpret_cast<app::SceneRoot*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << "objects (" << scene_root->fields.SceneResources->fields._size << "):"
                              << visualizer.new_line;
            for (auto i = 0; i < scene_root->fields.SceneResources->fields._size; ++i)
                visualize_object_internal(visualizer, scene_root->fields.SceneResources->fields._items->vector[i]);
        }

        void visualize_new_setup_state_controller(Visualizer& visualizer, void* obj) {
            auto controller = reinterpret_cast<app::NewSetupStateController*>(obj);
            auto guid_str = il2cpp::convert_csstring(controller->fields.m_guidStr);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << " - " << guid_str << visualizer.new_line;
            indent(visualizer);
            visualizer.stream << "active_state: " << controller->fields.m_activeStateIndex << visualizer.new_line;
            indent(visualizer, 0, 1);
            visualizer.stream << "states:" << visualizer.new_line;
            auto all_states = NewSetupStateController::GetAllStateGUIDs(controller);
            for (auto i = 0; i < all_states->max_length; ++i) {
                auto guid = all_states->vector[i];
                auto csname = NewSetupStateController::GetStateName(controller, guid);
                auto name = il2cpp::convert_csstring(csname);

                indent(visualizer);
                visualizer.stream << "-> " << guid << " : " << name.c_str() << visualizer.new_line;
            }

            if (visualizer.level > Visualizer::InfoLevel::Low && visualizer.current_state.depth > 0) {
                visualizer.current_state.depth -= 1;
                indent(visualizer, -1, 1);
                visualizer.stream << "modifiers (" << controller->fields.StateHolder->fields.Modifiers->fields._size
                                  << "):" << visualizer.new_line;

                for (auto i = 0; i < controller->fields.StateHolder->fields.Modifiers->fields._size; ++i) {
                    auto item = controller->fields.StateHolder->fields.Modifiers->fields._items->vector[i];
                    if (item != nullptr)
                        visualize_object_internal(visualizer, item);
                }
            }
        }

        void visualize_setup_state_modifier(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::SetupStateModifier*>(obj);

            switch (visualizer.current_state.id) {
                case 0: {
                    indent(visualizer, 0, 1);
                    visualizer.stream << get_full_name(obj) << " - " << std::showbase << std::hex
                                      << item->fields.ModifierGUID
                                      << std::noshowbase << std::dec << visualizer.new_line;
                    auto csname = il2cpp::invoke<app::String>(item, "get_Name");
                    auto name = il2cpp::convert_csstring(csname);

                    indent(visualizer);
                    visualizer.stream << "name: " << name << visualizer.new_line;

                    if (item->fields.Target != nullptr &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", 0)->fields) {
                        auto target = il2cpp::invoke<Il2CppObject>(item->fields.Target, "Resolve", 0);
                        visualize_object_internal(visualizer, target);
                    } else {
                        indent(visualizer);
                        visualizer.stream << "unresolvable target" << visualizer.new_line;
                    }

                    visualize_object_internal(visualizer, obj, 1);
                    break;
                }
                case 1: {
                    indent(visualizer, 0, 1);
                    visualizer.stream << "modifier_data:" << visualizer.new_line;
                    for (auto i = 0; i < item->fields.m_uberStateModifierDatas->fields._size; ++i)
                        if (item != nullptr)
                            visualize_object_internal(visualizer, item->fields.m_uberStateModifierDatas->fields._items->vector[i]);

                    break;
                }
            }
        }

        void visualize_setup_state_modifier_data(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::SetupStateModifierData*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << " - " << std::showbase << std::hex << item->fields.ModifierGUID
                              << std::noshowbase << std::dec << visualizer.new_line;

            // item->fields.m_modifierDataClassID.
        }

        void visualize_state_condition(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::StateCondition*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << visualizer.new_line;
            indent(visualizer, 0, 1);
            visualizer.stream << "desired_state:" << visualizer.new_line;
            visualize_object_internal(visualizer, item->fields.DesiredState);
        }

        void visualize_uber_state_bool_condition(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::UberStateBoolCondition*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << visualizer.new_line;
            indent(visualizer);
            visualizer.stream << "value: " << item->fields.Value << visualizer.new_line;
            visualize_object_internal(visualizer, item->fields.BooleanDescriptor);
        }

        void visualize_uber_state_value_condition(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::UberStateValueCondition*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << get_full_name(obj) << visualizer.new_line;
            indent(visualizer);
            visualizer.stream << "value: " << item->fields.Value << visualizer.new_line;
            indent(visualizer);
            visualizer.stream << "mode: " << static_cast<int>(item->fields.Compare) << visualizer.new_line;

            if (item->fields.Descriptor != nullptr &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.Descriptor, "get_HasAReference")->fields &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.Descriptor, "CanResolve", 0)->fields) {
                auto descriptor = il2cpp::invoke<Il2CppObject>(item->fields.Descriptor, "Resolve", 0);
                if (descriptor != nullptr)
                    visualize_object_internal(visualizer, descriptor);
                else {
                    indent(visualizer);
                    visualizer.stream << "descriptor: resolved but empty" << visualizer.new_line;
                }

            } else {
                indent(visualizer);
                visualizer.stream << "descriptor: unresolved" << visualizer.new_line;
            }
        }

        void visualize_desired_uber_state_composite(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::DesiredUberStateComposite*>(obj);
            switch (visualizer.current_state.id) {
                case 0:
                    indent(visualizer, 0, 1);
                    visualizer.stream << get_full_name(obj) << visualizer.new_line;
                    indent(visualizer, 0, 1);
                    visualizer.stream << "bools: {" << item->fields.BoolRequirements->fields._size << "}"
                                      << visualizer.new_line;
                    for (auto i = 0; i < item->fields.BoolRequirements->fields._size; ++i)
                        visualize_object_internal(visualizer, item->fields.BoolRequirements->fields._items->vector[i]);

                    indent(visualizer, -1, 1);
                    visualizer.stream << "bytes: {" << item->fields.ByteRequirements->fields._size << "}"
                                      << visualizer.new_line;
                    for (auto i = 0; i < item->fields.ByteRequirements->fields._size; ++i)
                        visualize_object_internal(visualizer, item->fields.ByteRequirements->fields._items->vector[i]);

                    visualize_object_internal(visualizer, obj, 1);
                    break;
                case 1:
                    indent(visualizer, -1, 1);
                    visualizer.stream << "floats: {" << item->fields.FloatRequirements->fields._size << "}"
                                      << visualizer.new_line;
                    for (auto i = 0; i < item->fields.FloatRequirements->fields._size; ++i)
                        visualize_object_internal(visualizer, item->fields.FloatRequirements->fields._items->vector[i]);

                    visualize_object_internal(visualizer, obj, 2);
                    break;
                case 2:
                    indent(visualizer, -1, 1);
                    visualizer.stream << "ints: {" << item->fields.IntRequirements->fields._size << "}"
                                      << visualizer.new_line;
                    for (auto i = 0; i < item->fields.IntRequirements->fields._size; ++i)
                        visualize_object_internal(visualizer, item->fields.IntRequirements->fields._items->vector[i]);

                    break;
            }
        }

        void visualize_desired_bool_uber_state(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::DesiredUberStateBool*>(obj);
            indent(visualizer);
            visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            visualize_object_internal(visualizer, item->fields._.Descriptor);
        }

        void visualize_desired_byte_uber_state(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::DesiredUberStateByte*>(obj);
            indent(visualizer, 0, 1);
            visualizer.stream << "byte_uberstate:" << visualizer.new_line;
            indent(visualizer);
            visualizer.stream << "desired_value: " << item->fields.DesiredStateValue << visualizer.new_line;

            if (item->fields.State != nullptr &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.State, "get_HasAReference")->fields &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.State, "CanResolve", 0)->fields) {
                auto descriptor = il2cpp::invoke<Il2CppObject>(item->fields.State, "Resolve", 0);
                visualize_object_internal(visualizer, descriptor);
            } else {
                indent(visualizer);
                visualizer.stream << "byte_uberstate: unresolvable" << visualizer.new_line;
            }
        }

        void visualize_desired_float_uber_state(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::DesiredUberStateFloat*>(obj);
            indent(visualizer);
            visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            visualize_object_internal(visualizer, item->fields.Descriptor);
        }

        void visualize_desired_int_uber_state(Visualizer& visualizer, void* obj) {
            auto item = reinterpret_cast<app::DesiredUberStateInt*>(obj);
            indent(visualizer);
            visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            visualize_object_internal(visualizer, item->fields.Descriptor);
        }

        void visualize_serialized_uber_state(Visualizer& visualizer, void* obj) {
            auto state = reinterpret_cast<app::IUberState*>(obj);
            auto csstate = il2cpp::invoke<app::String>(state, "get_Name");
            auto state_name = il2cpp::convert_csstring(csstate);
            auto group = il2cpp::invoke<app::IUberStateGroup>(state, "get_UberStateGroup");
            auto csgroup = il2cpp::invoke<app::String>(group, "get_GroupName");
            auto group_name = il2cpp::convert_csstring(csgroup);

            indent(visualizer);
            visualizer.stream << "serialized_uber_state: {" << visualizer.new_line;
            indent(visualizer, 1);
            auto state_id = il2cpp::invoke<app::UberID>(state, "get_ID");
            visualizer.stream << state_name << "(" << state_id->fields.m_id << ")" << visualizer.new_line;
            indent(visualizer);
            auto group_id = il2cpp::invoke<app::UberID>(group, "get_ID");
            visualizer.stream << group_name << "(" << group_id->fields.m_id << ")" << visualizer.new_line;
            indent(visualizer, -1);
            visualizer.stream << "}" << visualizer.new_line;
        }

        void visualize_respawner(Visualizer& visualizer, void* obj) {
            auto respawner = reinterpret_cast<app::Respawner*>(obj);

            switch (visualizer.current_state.id) {
                case 0: {
                    indent(visualizer);
                    visualizer.stream << "Respawner: {" << visualizer.new_line;
                    indent(visualizer, 1);
                    visualizer.stream << "min_distance_from_player: " << respawner->fields.MinDistanceFromPlayer
                                      << visualizer.new_line;
                    indent(visualizer);
                    visualizer.stream << "respawn_on_timeout: " << respawner->fields.RespawnOnTimeout
                                      << visualizer.new_line;
                    indent(visualizer);
                    visualizer.stream << "respawn_on_screen: " << respawner->fields.RespawnOnScreen
                                      << visualizer.new_line;
                    indent(visualizer);
                    visualizer.stream << "respawn_time: " << respawner->fields.RespawnTime << visualizer.new_line;
                    indent(visualizer);
                    visualizer.stream << "timer: " << respawner->fields.m_timer << visualizer.new_line;
                    indent(visualizer, 0, 1);
                    visualizer.stream << "timer_uberstate: {" << visualizer.new_line;
                    visualize_object_internal(visualizer, respawner->fields.TimerUberState);
                    visualize_object_internal(visualizer, obj, 1);
                    break;
                }
                case 1: {
                    indent(visualizer, -1);
                    visualizer.stream << "}" << visualizer.new_line;
                    indent(visualizer, 0, 1);
                    visualizer.stream << "respawn_target: {" << visualizer.new_line;
                    visualize_object_internal(visualizer, respawner->fields.RespawnTarget);
                    visualize_object_internal(visualizer, obj, 2);
                    break;
                }
                case 2: {
                    indent(visualizer, -1);
                    visualizer.stream << "}" << visualizer.new_line;
                    indent(visualizer, -1);
                    visualizer.stream << "}" << visualizer.new_line;
                    break;
                }
                default:
                    break;
            }
        }

        std::unordered_map<std::string, visualize_func> visualizers = {
            { "NewSetupStateController", visualize_new_setup_state_controller },
            { "SetupStateModifier", visualize_setup_state_modifier },
            { "StateCondition", visualize_state_condition },

            { "UberStateBoolCondition", visualize_uber_state_bool_condition },
            { "UberStateValueCondition", visualize_uber_state_value_condition },

            { "DesiredUberStateComposite", visualize_desired_uber_state_composite },
            { "DesiredUberStateBool", visualize_desired_bool_uber_state },
            { "DesiredUberStateFloat", visualize_desired_float_uber_state },
            { "DesiredUberStateByte", visualize_desired_byte_uber_state },
            { "DesiredUberStateInt", visualize_desired_int_uber_state },

            { "Moon.SerializedBooleanUberState", visualize_serialized_uber_state },
            { "Moon.SerializedFloatUberState", visualize_serialized_uber_state },
            { "Moon.SerializedByteUberState", visualize_serialized_uber_state },
            { "Moon.SerializedIntUberState", visualize_serialized_uber_state },

            { "SceneRoot", visualize_scene_root },
            { "UnityEngine.GameObject", visualize_game_object },
            { "UnityEngine.Transform", visualize_transform },
            { "UnityEngine.Object", visualize_unity_object },
            { "UnityEngine.Mesh", visualize_unity_mesh },
            { "UnityEngine.MeshFilter", visualize_unity_mesh_filter },
            { "UnityEngine.Renderer", visualize_unity_renderer },

            { "Respawner", visualize_respawner },
        };
    } // namespace

    void transform_hierarchy(std::string& output, app::Transform* transform) {
        output += il2cpp::unity::get_object_name(transform);
        auto parent = il2cpp::unity::get_parent(transform);
        if (parent != nullptr) {
            output += " -> ";
            transform_hierarchy(output, parent);
        }
    }

    void visualize_object(Visualizer& visualizer, void* obj, int indent_start, int depth_start) {
        if (indent_start < 0)
            indent_start = visualizer.initial_indent_level;
        if (depth_start < 0)
            depth_start = visualizer.initial_depth;

        visualizer.visualizer_queue.clear();
        visualizer.last_queue_size = 0;
        visualizer.current_state.id = 0;
        visualizer.current_state.indent_level = indent_start;
        visualizer.current_state.depth = depth_start;

        visualize_object_internal(visualizer, obj);
        while (!visualizer.visualizer_queue.empty()) {
            auto current = visualizer.visualizer_queue.front();
            visualizer.visualizer_queue.erase(visualizer.visualizer_queue.begin());
            visualizer.last_queue_size = visualizer.visualizer_queue.size();

            if (current.first == nullptr || (il2cpp::is_assignable(current.first, types::Object::get_class()) && !il2cpp::unity::is_valid(current.first))) {
                indent(visualizer);
                visualizer.stream << "nullptr" << visualizer.new_line;
                return;
            }

            auto klass = current.first->Il2CppClass.klass;
            while (klass != nullptr) {
                std::string full_name = get_full_name(klass);
                auto it = visualizers.find(full_name);
                if (it != visualizers.end()) {
                    visualizer.current_state = current.second;
                    it->second(visualizer, current.first);
                    break;
                }

                klass = klass->parent;
            }

            if (klass == nullptr) {
                indent(visualizer);
                std::string full_name = get_full_name(current.first);
                visualizer.stream << full_name << " - " << std::noshowbase << std::dec
                                  << reinterpret_cast<uint64_t>(current.first->Il2CppClass.klass)
                                  << visualizer.new_line;
            }
        }
    }

    void visualize_scene(Visualizer& visualizer, app::Scene& scene, int indent_start, int depth_start) {
        if (indent_start < 0)
            indent_start = visualizer.initial_indent_level;
        if (depth_start < 0)
            depth_start = visualizer.initial_depth;

        auto roots = il2cpp::unity::get_root_game_objects(scene);
        visualizer.current_state.indent_level = indent_start;
        visualizer.current_state.depth = depth_start;
        indent(visualizer, 0, 1);
        visualizer.stream << "scene (" << roots.size() << "):" << visualizer.new_line;
        for (auto i = 0; i < roots.size(); ++i) {
            console::console_send(fmt::format("root_object ({} / {})", i + 1, roots.size()));
            console::console_flush();

            dev::visualize::visualize_object(visualizer, roots[i], indent_start + 1, depth_start - 1);
        }
    }

    std::string get_string(Visualizer& visualizer) {
        return visualizer.stream.str();
    }
} // namespace dev::visualize
