#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/KwolokBossEscapeBehaviour.h>
#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/app/methods/Moon/ScalableAnimationPlayer.h>
#include <Il2CppModLoader/app/methods/Moon/AnimationPlayer.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <utils/misc.h>

using namespace modloader;
using namespace app::methods;
using namespace utils;

namespace {
    ObjectReference<app::ScalableAnimationPlayer> scalable_animation_player_stink_s;

    IL2CPP_INTERCEPT(KwolokBossEscapeBehaviour, void, SetSpeedToAnimations, (app::KwolokBossEscapeBehaviour * this_ptr, float speed)) {
        // modloader::win::console::console_send(format("Updated speed to %f", speed));
        // modloader::win::console::console_flush();

        next::KwolokBossEscapeBehaviour::SetSpeedToAnimations(this_ptr, speed);

        if (scalable_animation_player_stink_s.is_valid()) {
            // Moon::ScalableAnimationPlayer::SetSpeed(scalable_animation_player_stink_s.ptr, 0.f);
            Moon::AnimationPlayer::SetTimeScale(reinterpret_cast<app::AnimationPlayer*>(scalable_animation_player_stink_s.ptr), 0.1f);
        }
    }

    IL2CPP_INTERCEPT(Moon::ScalableAnimationPlayer, void, SetSpeed, (app::ScalableAnimationPlayer* this_ptr, float speed)) {
        next::Moon::ScalableAnimationPlayer::SetSpeed(this_ptr, 40.f);
    }

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "kwolokBossChaseBG") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "kwolokBossSetup",
                            "kwolok",
                            "timelines",
                            "escape",
                            "stinkSpiritScalableAnimation" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                scalable_animation_player_stink_s.set_reference(il2cpp::unity::get_component<app::ScalableAnimationPlayer>(timeline_go, "Moon", "ScalableAnimationPlayer"));
            }
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
    }

    CALL_ON_INIT(initialize);
} // namespace
