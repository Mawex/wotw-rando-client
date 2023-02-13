#include <randomizer.h>

#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/game.h>

namespace {
    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::After);

        Network::Packet packet;
        packet.set_id(Network::Packet_PacketID_NotifyTeleport);
        randomizer::network_client().websocket_send(packet);

        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
