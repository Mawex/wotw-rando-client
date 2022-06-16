#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaxEnergyHalfContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385BC0, app::GameObject *, get_EffectiveCollectedEffect, (app::MaxEnergyHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01385CB0, void, OnCollectorCandidateTouch, (app::MaxEnergyHalfContainerPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x01385DC0, void, PickupStateChanged, (app::MaxEnergyHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MaxEnergyHalfContainerPickup * this_ptr))
}
