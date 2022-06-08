#include <interception_macros.h>

namespace app::methods::MaxEnergyHalfContainerPickup {
IL2CPP_REGISTER_METHOD(0x01385BC0, GameObject *, get_EffectiveCollectedEffect, (MaxEnergyHalfContainerPickup * __this));
IL2CPP_REGISTER_METHOD(0x01385CB0, void, OnCollectorCandidateTouch, (MaxEnergyHalfContainerPickup * __this, GameObject * collector));
IL2CPP_REGISTER_METHOD(0x01385DC0, void, PickupStateChanged, (MaxEnergyHalfContainerPickup * __this));
IL2CPP_REGISTER_METHOD(0x005AC260, void, __ctor, (MaxEnergyHalfContainerPickup * __this));
}
