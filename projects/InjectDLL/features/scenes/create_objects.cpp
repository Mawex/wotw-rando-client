#include <features/scenes/create_objects.h>

#include <constants.h>
#include <dev/object_visualizer.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <randomizer/render/shaders.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <algorithm>
#include <chrono>
#include <fstream>
#include <queue>
#include <regex>
#include <unordered_set>
#include <unordered_map>
#include <utility>

using namespace modloader;

namespace scenes
{
    namespace
    {
        STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* position));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rotation));

        using creation_callback = void(*)(int id, app::GameObject* obj, app::GameObject* scene_root);

        struct ObjectSpawn
        {
            int id;
            std::string target_name;
            std::string scene;
            std::vector<std::string> path;
            app::Vector3 position;
            std::optional<app::Vector3> rotation;
            std::optional<app::Vector3> scale;
            creation_callback callback = nullptr;

            app::GameObject* game_object = nullptr;
        };

        app::GameObject* rando_game_objects = nullptr;
        std::unordered_map<int, ObjectSpawn> objects;
        std::unordered_map<std::string, std::unordered_set<int>> spawn_queue;

        void on_load_callback(std::string_view scene_name, int id, app::GameObject* scene_root)
        {
            auto& obj = objects[id];
            auto prefab = il2cpp::unity::find_child(scene_root, obj.path);
            if (!il2cpp::unity::is_valid(prefab))
                return;

            obj.game_object = il2cpp::unity::instantiate_object(prefab);
            il2cpp::invoke(obj.game_object, "set_name", il2cpp::string_new(obj.target_name));
            game::add_to_container(game::RandoContainer::PreloadedGameObjects, obj.game_object);
            auto transform = il2cpp::unity::get_transform(obj.game_object);
            Transform::set_position(transform, &obj.position);
            if (obj.scale.has_value())
                Transform::set_localScale(transform, &obj.scale.value());

            if (obj.rotation.has_value())
            {
                auto& rot = obj.rotation.value();
                auto quat = Quaternion::Euler(rot.x, rot.y, rot.z);
                Transform::set_rotation(transform, &quat);
            }

            randomizer::shaders::duplicate_materials(obj.game_object);
            if (obj.callback != nullptr)
                obj.callback(id, obj.game_object, scene_root);
        }

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
        {
            GameController::FixedUpdate(this_ptr);
            for (auto spawn : spawn_queue)
                for (auto id : spawn.second)
                    force_load_area(spawn.first, id, &on_load_callback);

            spawn_queue.clear();
        }

        void initialize()
        {
            add_item(0, "double_jump_tree_spring", { -566.93634f, -4545.384766f, 0.f }, app::Vector3{ 0, PI, 0 }, std::optional<app::Vector3>(),
                "swampSpringIntroductionB", { "interactives", "springSunkenGlades" });

            add_item(1, "mantis", { 0.f, 0.f, 0.f }, app::Vector3{ 0, 0, 0 }, std::optional<app::Vector3>(),
                     "swampSpringIntroductionB", { "enemies", "mantisEntity(Clone)" });
            add_item(2, "mantis_placeholder", { 0.f, 0.f, 0.f }, app::Vector3{ 0, 0, 0 }, std::optional<app::Vector3>(),
                     "swampSpringIntroductionB", { "enemies", "mantisPlaceholder" });

            // add_creation_callback(2, [](int id, app::GameObject* game_object, app::GameObject* scene_root_go) {
            //     auto scene_root = il2cpp::unity::get_component<app::SceneRoot>(scene_root_go, "", "SceneRoot");
            //     auto mantis_placeholder = il2cpp::unity::get_component<app::MantisPlaceholder>(game_object, "", "MantisPlaceholder");
            //     il2cpp::invoke(mantis_placeholder, "RegisterSceneRoot", scene_root);
            //     scenes::get_root()
            // });
        }

        CALL_ON_INIT(initialize);
    }

    void remove_item(int id)
    {
        auto it = objects.find(id);
        if (it == objects.end())
            return;

        if (it->second.game_object != nullptr)
            il2cpp::unity::destroy_object(it->second.game_object);
        else
            spawn_queue[it->second.scene].erase(it->first);

        objects.erase(it);
    }

    void add_item(int id, std::string_view target_name, app::Vector3 position, std::optional<app::Vector3> rotation, std::optional<app::Vector3> scale, std::string_view scene,
                  std::vector<std::string> path) {
        remove_item(id);

        auto& obj = objects[id];
        obj.id = id;
        obj.target_name = target_name;
        obj.position = position;
        obj.rotation = rotation;
        obj.scale = scale;
        obj.scene = scene;
        obj.path = std::move(path);
        spawn_queue[obj.scene].emplace(id);
    }

    void add_creation_callback(int id, creation_callback callback) {
        auto& obj = objects[id];
        obj.callback = callback;
    }
}
