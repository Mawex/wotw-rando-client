#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritShardPickup {
    IL2CPP_REGISTER_METHOD(0x00D685A0, void, OnCollectorCandidateTouch, (app::SpiritShardPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::SpiritShardPickup * this_ptr))
}
