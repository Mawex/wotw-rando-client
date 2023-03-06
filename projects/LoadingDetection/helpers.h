#pragma once

#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManager.h>
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/FaderB.h>

/**
 * Some helper functions since we can't use Core here
 */
namespace loading_detection::helpers {
    app::ScenesManager* get_scenes_manager();
    app::GameController* get_game_controller();
    app::SeinCharacter* get_sein_character();
    app::FaderB* get_faderb();
    app::Vector3 get_player_position();
}