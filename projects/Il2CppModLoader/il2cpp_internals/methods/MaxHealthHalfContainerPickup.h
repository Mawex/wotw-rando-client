#include <interception_macros.h>

namespace app::methods::MaxHealthHalfContainerPickup {
IL2CPP_REGISTER_METHOD(0x01385FF0, GameObject *, get_EffectiveCollectedEffect, (MaxHealthHalfContainerPickup * __this));
IL2CPP_REGISTER_METHOD(0x013860E0, void, OnCollectorCandidateTouch, (MaxHealthHalfContainerPickup * __this, GameObject * collector));
IL2CPP_REGISTER_METHOD(0x013861F0, void, PickupStateChanged, (MaxHealthHalfContainerPickup * __this));
IL2CPP_REGISTER_METHOD(0x005AC260, void, __ctor, (MaxHealthHalfContainerPickup * __this));
}
