#include <interception_macros.h>

namespace app::methods::KillVolumeChaseController {
IL2CPP_REGISTER_METHOD(0x00E749A0, Vector3, get_SeinPos, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x00E74A90, Vector3, get_AvalanchePos, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x00E74BF0, void, OnEnable, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x00E74CD0, void, OnDisable, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x00E74D90, void, SetSpeedToAnimations, (KillVolumeChaseController * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00E74EF0, void, OnFixedUpdate, (KillVolumeChaseController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x002FD490, SuspendableMask__Enum, get_Mask, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_Mask, (KillVolumeChaseController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsSuspended, (KillVolumeChaseController * __this));
IL2CPP_REGISTER_METHOD(0x006142E0, void, set_IsSuspended, (KillVolumeChaseController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (KillVolumeChaseController * __this));
}
