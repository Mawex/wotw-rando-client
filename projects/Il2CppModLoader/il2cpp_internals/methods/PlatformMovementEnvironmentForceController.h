#include <interception_macros.h>

namespace app::methods::PlatformMovementEnvironmentForceController {
IL2CPP_REGISTER_METHOD(0x0116EEF0, void, Awake, (PlatformMovementEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0116EF90, void, OnDestroy, (PlatformMovementEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0116F030, bool, ShouldApplyForces, (PlatformMovementEnvironmentForceController * __this, Rigidbody * rigidbody));
IL2CPP_REGISTER_METHOD(0x0116F0D0, void, FixedUpdate, (PlatformMovementEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, (PlatformMovementEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, (PlatformMovementEnvironmentForceController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006410F0, SuspendableMask__Enum, get_Mask, (PlatformMovementEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0116F3C0, void, set_Mask, (PlatformMovementEnvironmentForceController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0116F470, void, __ctor, (PlatformMovementEnvironmentForceController * __this));
}
