#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaxHealthHalfContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385FF0, app::GameObject *, get_EffectiveCollectedEffect, (app::MaxHealthHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013860E0, void, OnCollectorCandidateTouch, (app::MaxHealthHalfContainerPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x013861F0, void, PickupStateChanged, (app::MaxHealthHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MaxHealthHalfContainerPickup * this_ptr))
}
