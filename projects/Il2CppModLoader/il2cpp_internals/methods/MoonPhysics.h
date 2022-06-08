using namespace app;

namespace app::methods::MoonPhysics {
IL2CPP_REGISTER_METHOD(0x0145C220, void, IgnoreLayerCollision, (int32_t layer1, int32_t layer2, bool ignore));
IL2CPP_REGISTER_METHOD(0x0145C320, void, IgnoreCollision, (Collider * collider1, Collider * collider2, bool ignore));
IL2CPP_REGISTER_METHOD(0x0145C3F0, bool, FastSphereCast, (Ray ray, float radius, RaycastHit * hitInfo, float distance, LayerMask layerMask));
IL2CPP_REGISTER_METHOD(0x0145C9A0, bool, BoxCast, (BoxCollider * box, Vector3 direction, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145CB70, bool, BoxCast, (BoxCollider * box, Vector3 direction, RaycastHit * hitInfo, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145CD30, RaycastHit__Array *, BoxCastAll, (BoxCollider * box, Vector3 direction, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145CFB0, int32_t, BoxCastNonAlloc, (BoxCollider * box, Vector3 direction, RaycastHit__Array * results, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145D190, bool, CheckBox, (BoxCollider * box, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145D350, Collider__Array *, OverlapBox, (BoxCollider * box, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145D510, int32_t, OverlapBoxNonAlloc, (BoxCollider * box, Collider__Array * results, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145D6E0, void, ToWorldSpaceBox, (BoxCollider * box, Vector3 * center, Vector3 * halfExtents, Quaternion * orientation));
IL2CPP_REGISTER_METHOD(0x0145DB50, bool, SphereCast, (SphereCollider * sphere, Vector3 direction, RaycastHit * hitInfo, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145DD00, RaycastHit__Array *, SphereCastAll, (SphereCollider * sphere, Vector3 direction, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145DE50, int32_t, SphereCastNonAlloc, (SphereCollider * sphere, Vector3 direction, RaycastHit__Array * results, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145E000, bool, CheckSphere, (SphereCollider * sphere, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145E110, Collider__Array *, OverlapSphere, (SphereCollider * sphere, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145E220, int32_t, OverlapSphereNonAlloc, (SphereCollider * sphere, Collider__Array * results, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145E340, void, ToWorldSpaceSphere, (SphereCollider * sphere, Vector3 * center, float * radius));
IL2CPP_REGISTER_METHOD(0x0145E710, bool, CapsuleCast, (CapsuleCollider * capsule, Vector3 direction, RaycastHit * hitInfo, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145E870, RaycastHit__Array *, CapsuleCastAll, (CapsuleCollider * capsule, Vector3 direction, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145EAE0, int32_t, CapsuleCastNonAlloc, (CapsuleCollider * capsule, Vector3 direction, RaycastHit__Array * results, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145ECB0, bool, CheckCapsule, (CapsuleCollider * capsule, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145EE50, Collider__Array *, OverlapCapsule, (CapsuleCollider * capsule, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145EFF0, int32_t, OverlapCapsuleNonAlloc, (CapsuleCollider * capsule, Collider__Array * results, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x0145F140, void, ToWorldSpaceCapsule, (CapsuleCollider * capsule, Vector3 * point0, Vector3 * point1, float * radius));
IL2CPP_REGISTER_METHOD(0x0145FA50, void, SortClosestToFurthest, (RaycastHit__Array * hits, int32_t hitCount));
IL2CPP_REGISTER_METHOD(0x0145FC70, Vector3, AbsVec3, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x0145FD70, float, MaxVec3, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x0145FE30, void, __cctor, (MethodInfo * method));
}
