#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include <enums/game_event.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <uber_states/uber_state_helper.h>
#include <utils/operations.h>

using namespace modloader;
using modloader::console::console_flush;
using modloader::console::console_send;

namespace {
    // Skip fade to black when opening menus
    bool skip_fade_to_black = false;

    IL2CPP_INTERCEPT(, FaderB, void, Fade, (app::FaderB * this_ptr, float fadeInDuration, float fadeStayDuration, float fadeOutDuration, app::Action* fadeInComplete, app::Action* fadeOutComplete, bool skipCameraMoveToTarget)) {
        if (!skip_fade_to_black)
            FaderB::Fade(this_ptr, fadeInDuration, fadeStayDuration, fadeOutDuration, fadeInComplete, fadeOutComplete, skipCameraMoveToTarget);
    }

    /**
     * In vanilla, there's a 100ms WaitForSeconds coroutine running before opening the menu.
     * We skip that by advancing the coroutine enumerator twice.
     */
    INTERNAL_INTERCEPT(0x9E65B0, bool, MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr)) {
        ScopedSetter setter(skip_fade_to_black, true);
        MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext(this_ptr);
        return MenuScreenManager_PostFadeMenuOpen_d_100_MoveNext(this_ptr);
    }

    /*
    IL2CPP_INTERCEPT(Moon.Timeline, KeepSceneLoadedEntity, void, OnStartPlayback, (app::KeepSceneLoadedEntity* this_ptr, app::IContext* context)) {
        auto scene_guid = this_ptr->fields.SceneMetaData->fields.SceneMoonGuid;

        if (*scene_guid != *scenes::get_scene_metadata("kuFlyAway")->fields.SceneMoonGuid) {
            KeepSceneLoadedEntity::OnStartPlayback(this_ptr, context);
        }

        console_send(il2cpp::convert_csstring(scene_guid->fields.m_guidString));
        console_flush();
    }

    IL2CPP_BINDING(, CleverMenuItemSelectionManager, void, set_IsActive, (app::CleverMenuItemSelectionManager* this_ptr, bool active))
    IL2CPP_INTERCEPT(, TitleScreenManager, void, Start, (app::TitleScreenManager* this_ptr)) {
        TitleScreenManager::Start(this_ptr);
        CleverMenuItemSelectionManager::set_IsActive(this_ptr->fields.MainMenuScreen, true);
        console_send("-- hohoho");
    }
    */
} // namespace