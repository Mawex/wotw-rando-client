#include <Modloader/app/methods/BoolStateMap.h>
#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/game_event.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;

namespace {
    int open_door_in_frames = 2;
    app::Transform* left_door_transform = nullptr;
    app::Transform* right_door_transform = nullptr;
    app::GameObject* keyrings_go = nullptr;
    app::NewSetupStateController* door_controller = nullptr;

    bool open_door() {
        if (
            !core::api::scenes::scene_is_enabled("lumaPoolsC") ||
            !il2cpp::unity::is_valid(left_door_transform) ||
            !il2cpp::unity::is_valid(right_door_transform) ||
            !il2cpp::unity::is_valid(keyrings_go) ||
            !il2cpp::unity::is_valid(door_controller)
        ) {
            return false;
        }

        UnityEngine::Transform::set_position(left_door_transform, app::Vector3{ -0.9f, 8.0f, 0.0f });
        UnityEngine::Transform::set_position(right_door_transform, app::Vector3{ 0.7f, -8.0f, 0.0f });
        UnityEngine::GameObject::SetActive(keyrings_go, false);

        return true;
    }

    IL2CPP_INTERCEPT(NewSetupStateController, void, OnPostTimeSlicedEnable, (app::NewSetupStateController * this_ptr)) {
        next::NewSetupStateController::OnPostTimeSlicedEnable(this_ptr);

        if (this_ptr == door_controller) {
            open_door_in_frames = 20;
        }
    }

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Enabled) {
            return;
        }

        if (metadata->scene_name == "lumaPoolsC") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto door_container_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "arenaSetup",
                    "doors",
                    "enemyDoorVisualsLagoonLs",
                    "enemyDoorVisualsLagoonL",
                }
            );

            auto door_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "arenaSetup",
                    "doors",
                    "enemyDoorVisualsLagoonLs",
                    "enemyDoorVisualsLagoonL",
                    "doorVisualsA",
                    "sidewaysDoor",
                    "door",
                }
            );

            if (il2cpp::unity::is_valid(door_container_go) && il2cpp::unity::is_valid(door_go)) {
                door_controller = il2cpp::unity::get_component<app::NewSetupStateController>(door_container_go, types::NewSetupStateController::get_class());

                auto left_door_go = il2cpp::unity::find_child(door_go, "lagoonEnemyDoorLeft");
                auto right_door_go = il2cpp::unity::find_child(door_go, "lagoonEnemyDoorRight");
                keyrings_go = il2cpp::unity::find_child(door_go, "keyrings");
                left_door_transform = il2cpp::unity::get_transform(left_door_go);
                right_door_transform = il2cpp::unity::get_transform(right_door_go);

                open_door_in_frames = 20;
            }
        }
    }

    void on_respawn(GameEvent game_event, EventTiming timing) {
        open_door_in_frames = 20;
    }

    void on_update(GameEvent game_event, EventTiming timing) {
        if (open_door_in_frames == 0 && !open_door()) {
            open_door_in_frames = 1;
        }

        if (open_door_in_frames >= 0) {
            open_door_in_frames--;
        }
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
    auto on_respawn_handle = core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, &on_respawn);
    auto on_update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_update);
} // namespace