#pragma once
#include <interception_macros.h>

namespace app::methods::UberSwarmPOIManager {
    IL2CPP_REGISTER_METHOD(0x0128D520, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0128D620, void, Register, (app::UberSwarmPOI * poi))
    IL2CPP_REGISTER_METHOD(0x0128D6F0, void, Unregister, (app::UberSwarmPOI * poi))
    IL2CPP_REGISTER_METHOD(0x0128D7B0, app::Vector2, CalculateVelocity, (app::ISwarmer * swarmer))
    IL2CPP_REGISTER_METHOD(0x0128DA60, void, cctor, ())
}
