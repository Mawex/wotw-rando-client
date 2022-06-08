#include <interception_macros.h>

namespace app::methods::SeinEnvironmentForceController {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD1280, PlatformMovementListOfColliders *, get_PlatformMovementListOfColliders, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD12B0, SeinGrabWall *, get_GrabWall, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD12F0, bool, ShouldApplyForces, (SeinEnvironmentForceController * __this, Rigidbody * rigidbody));
IL2CPP_REGISTER_METHOD(0x00AD1480, void, Start, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD1A20, void, OnDestroy, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD1FD0, bool, get_IsGrabbingWall, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD2100, void, UpdateCharacterState, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD31A0, Vector3, get_SeinSpeed, (SeinEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x00AD32B0, void, OnLandOnCeilingEvent, (SeinEnvironmentForceController * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x0474E3D0, SeinEnvironmentForceController_OnLandOnCeilingEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD3570, void, OnLandOnWallEvent, (SeinEnvironmentForceController * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x04769D48, SeinEnvironmentForceController_OnLandOnWallEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD3830, void, OnCollisionGround, (SeinEnvironmentForceController * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x047890B0, SeinEnvironmentForceController_OnCollisionGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD38C0, void, __ctor, (SeinEnvironmentForceController * __this));
}
