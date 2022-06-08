using namespace app;

namespace app::methods::PlatformMovementListOfColliders {
IL2CPP_REGISTER_METHOD(0x01170090, void, Start, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x011704E0, void, OnDestroy, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01170930, void, Serialize, (PlatformMovementListOfColliders * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01170A90, Collider *, get_GroundCollider, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01170B40, Collider *, get_CeilingCollider, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01170BF0, Collider *, get_WallLeftCollider, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01170CA0, Collider *, get_WallRightCollider, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01170D50, void, OnCollisionGroundEvent, (PlatformMovementListOfColliders * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x047095E0, PlatformMovementListOfColliders_OnCollisionGroundEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01170E10, void, OnCollisionCeilingEvent, (PlatformMovementListOfColliders * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04749A38, PlatformMovementListOfColliders_OnCollisionCeilingEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01170ED0, void, OnCollisionWallLeftEvent, (PlatformMovementListOfColliders * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x0470F088, PlatformMovementListOfColliders_OnCollisionWallLeftEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01170F90, void, OnCollisionWallRightEvent, (PlatformMovementListOfColliders * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04779E58, PlatformMovementListOfColliders_OnCollisionWallRightEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01171050, void, FixedUpdate, (PlatformMovementListOfColliders * __this));
IL2CPP_REGISTER_METHOD(0x01171190, void, __ctor, (PlatformMovementListOfColliders * __this));
}
