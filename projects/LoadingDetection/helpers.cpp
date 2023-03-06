#include <LoadingDetection/helpers.h>

#include <Modloader/app/types/Scenes.h>
#include <Modloader/app/types/FaderB.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/app/types/Characters.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/methods/SeinCharacter.h>

using namespace app::classes;

namespace loading_detection::helpers {
    app::ScenesManager* get_scenes_manager() {
        return types::Scenes::get_class()->static_fields->Manager;
    }

    app::GameController* get_game_controller() {
        return types::GameController::get_class()->static_fields->Instance;
    }

    app::SeinCharacter* get_sein_character() {
        return types::Characters::get_class()->static_fields->m_sein;
    }

    app::FaderB* get_faderb() {
        return types::UI::get_class()->static_fields->Fader;
    }

    app::Vector3 get_player_position() {
        auto sein = get_sein_character();
        return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{ 0, 0, 0 };
    }
}