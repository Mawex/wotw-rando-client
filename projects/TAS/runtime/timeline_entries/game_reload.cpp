#include <Core/api/game/game.h>
#include <TAS/runtime/timeline_entries/game_reload.h>

namespace tas::runtime::timeline::entries {
    void GameReloadTimelineEntry::activate(TimelineState& timeline_state) {
        core::api::game::reload_everything();
    }
} // namespace tas::runtime::timeline::entries