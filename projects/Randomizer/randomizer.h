#pragma once

#include <Common/event_bus.h>

#include <Randomizer/online/multiplayer.h>
#include <Randomizer/online/network.h>
#include <Randomizer/seed/reach_check.h>
#include <Randomizer/seed/seed.h>

namespace randomizer {
    enum class RandomizerEvent {
        SeedLoaded,
        ReachCheck,
    };

    void reload();

    void server_connect();
    void server_disconnect();

    void queue_reach_check();

    common::TimedMultiEventBus<RandomizerEvent>& event_bus();
    location_data::LocationCollection& location_collection();
    seed::Seed& game_seed();
    seed::ReachCheckResult const& reach_check();
    online::NetworkClient& network_client();
    online::MultiplayerUniverse& multiplayer_universe();

    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor();

    void queue_input_unlocked_callback(std::function<void()> const& callback);
} // namespace randomizer
