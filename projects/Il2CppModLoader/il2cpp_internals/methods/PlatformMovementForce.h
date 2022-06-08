#include <interception_macros.h>

namespace app::methods::PlatformMovementForce {
IL2CPP_REGISTER_METHOD(0x0116F490, PlatformBehaviour *, get_PlatformBehaviour, (PlatformMovementForce * __this));
IL2CPP_REGISTER_METHOD(0x0116F4B0, PlatformMovementListOfColliders *, get_ListOfColliders, (PlatformMovementForce * __this));
IL2CPP_REGISTER_METHOD(0x0116F4E0, PlatformMovement *, get_PlatformMovement, (PlatformMovementForce * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (PlatformMovementForce * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x0116F510, bool, ShouldApplyForces, (PlatformMovementForce * __this, Rigidbody * rigidbody));
IL2CPP_REGISTER_METHOD(0x0116F5E0, void, ApplyGroundForce, (PlatformMovementForce * __this, Vector3 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x0116F630, void, ApplyCeilingForce, (PlatformMovementForce * __this, Vector3 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x0116F9B0, void, ApplyWallLeftForce, (PlatformMovementForce * __this, Vector3 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x0116FD30, void, ApplyWallRightForce, (PlatformMovementForce * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlatformMovementForce * __this));
}
