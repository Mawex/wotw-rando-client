#include <interception_macros.h>

namespace app::methods::TeleportBeacon {
IL2CPP_REGISTER_METHOD(0x00CE5210, bool, get_IsLockOnTargetValid, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsSuspended, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsSuspended, (TeleportBeacon * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5330, void, set_Mask, (TeleportBeacon * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, SetLockOnTarget, (TeleportBeacon * __this, IAttackable * target));
IL2CPP_REGISTER_METHOD(0x00CE53F0, void, ChangeState, (TeleportBeacon * __this, TeleportBeacon_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00CE56D0, void, OnEnable, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5770, void, Awake, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5850, void, Start, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5860, void, OnDestroy, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5920, void, Invalidate, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE5B60, void, Explode, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE60B0, void, Explode, (TeleportBeacon * __this, ITeleportBeaconAttackable * target));
IL2CPP_REGISTER_METHOD(0x00CE63E0, void, ExplodeOnGrabableSurface, (TeleportBeacon * __this, GrabbableSurface * surface));
IL2CPP_REGISTER_METHOD(0x00CE6770, void, Teleport, (TeleportBeacon * __this, ITeleportBeaconAttackable * teleportBeaconAttackable));
IL2CPP_REGISTER_METHOD(0x00CE6950, void, SetTrajectory, (TeleportBeacon * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x00CE6A80, void, UpdateState, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7010, void, FixedUpdate, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7400, void, OnFrustumEnter, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7410, void, OnFrustumExit, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_InsideFrustum, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7420, Bounds, get_Bounds, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7660, void, OnCollisionEnter, (TeleportBeacon * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00CE7870, void, OnDrawGizmosSelected, (TeleportBeacon * __this));
IL2CPP_REGISTER_METHOD(0x00CE7920, void, __ctor, (TeleportBeacon * __this));
}
