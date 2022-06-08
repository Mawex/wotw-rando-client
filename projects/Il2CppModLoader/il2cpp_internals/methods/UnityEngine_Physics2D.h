#include <interception_macros.h>

namespace app::methods::UnityEngine::Physics2D {
IL2CPP_REGISTER_METHOD(0x0316F310, PhysicsScene2D, get_defaultPhysicsScene, ());
IL2CPP_REGISTER_METHOD(0x0316F3F0, bool, get_queriesHitTriggers, ());
IL2CPP_REGISTER_METHOD(0x0316F440, int32_t, GetLayerCollisionMask, (int32_t layer));
IL2CPP_REGISTER_METHODINFO(0x04776898, Physics2D_GetLayerCollisionMask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0316F550, int32_t, GetLayerCollisionMask_Internal, (int32_t layer));
IL2CPP_REGISTER_METHOD(0x0316F5A0, ColliderDistance2D, Distance, (Collider2D * colliderA, Collider2D * colliderB));
IL2CPP_REGISTER_METHODINFO(0x04767F60, Physics2D_Distance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0316F870, ColliderDistance2D, Distance_Internal, (Collider2D * colliderA, Collider2D * colliderB));
IL2CPP_REGISTER_METHOD(0x0316F990, RaycastHit2D, Raycast, (Vector2 origin, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x0316FAA0, RaycastHit2D, Raycast, (Vector2 origin, Vector2 direction, float distance));
IL2CPP_REGISTER_METHOD(0x0316FBC0, RaycastHit2D, Raycast, (Vector2 origin, Vector2 direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x0316FD90, RaycastHit2D, Raycast, (Vector2 origin, Vector2 direction, float distance, int32_t layerMask, float minDepth));
IL2CPP_REGISTER_METHOD(0x0316FF60, RaycastHit2D, Raycast, (Vector2 origin, Vector2 direction, float distance, int32_t layerMask, float minDepth, float maxDepth));
IL2CPP_REGISTER_METHOD(0x03170120, int32_t, Raycast, (Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03170280, int32_t, Raycast, (Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D__Array * results, float distance));
IL2CPP_REGISTER_METHOD(0x031703F0, RaycastHit2D__Array *, GetRayIntersectionAll, (Ray ray));
IL2CPP_REGISTER_METHOD(0x031704E0, RaycastHit2D__Array *, GetRayIntersectionAll, (Ray ray, float distance));
IL2CPP_REGISTER_METHOD(0x031705E0, RaycastHit2D__Array *, GetRayIntersectionAll, (Ray ray, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x031706E0, RaycastHit2D__Array *, GetRayIntersectionAll_Internal, (PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x031707F0, int32_t, GetRayIntersectionNonAlloc, (Ray ray, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03170940, int32_t, GetRayIntersectionNonAlloc, (Ray ray, RaycastHit2D__Array * results, float distance));
IL2CPP_REGISTER_METHOD(0x03170AA0, int32_t, GetRayIntersectionNonAlloc, (Ray ray, RaycastHit2D__Array * results, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x03170C00, int32_t, GetContacts, (Collider2D * collider, ContactFilter2D contactFilter, ContactPoint2D__Array * contacts));
IL2CPP_REGISTER_METHOD(0x03170D90, int32_t, GetContacts, (Collider2D * collider, ContactFilter2D contactFilter, Collider2D__Array * colliders));
IL2CPP_REGISTER_METHOD(0x03170F20, int32_t, GetContacts, (Rigidbody2D * rigidbody, ContactFilter2D contactFilter, ContactPoint2D__Array * contacts));
IL2CPP_REGISTER_METHOD(0x031710B0, int32_t, GetContacts, (Rigidbody2D * rigidbody, ContactFilter2D contactFilter, Collider2D__Array * colliders));
IL2CPP_REGISTER_METHOD(0x03171240, int32_t, GetColliderContacts, (Collider2D * collider, ContactFilter2D contactFilter, ContactPoint2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171330, int32_t, GetRigidbodyContacts, (Rigidbody2D * rigidbody, ContactFilter2D contactFilter, ContactPoint2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171420, int32_t, GetColliderContactsCollidersOnly, (Collider2D * collider, ContactFilter2D contactFilter, Collider2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171510, int32_t, GetRigidbodyContactsCollidersOnly, (Rigidbody2D * rigidbody, ContactFilter2D contactFilter, Collider2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171600, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x03171750, void, get_defaultPhysicsScene_Injected, (PhysicsScene2D * ret));
IL2CPP_REGISTER_METHOD(0x031717A0, void, Distance_Internal_Injected, (Collider2D * colliderA, Collider2D * colliderB, ColliderDistance2D * ret));
IL2CPP_REGISTER_METHOD(0x03171810, RaycastHit2D__Array *, GetRayIntersectionAll_Internal_Injected, (PhysicsScene2D * physicsScene, Vector3 * origin, Vector3 * direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x031718A0, int32_t, GetColliderContacts_Injected, (Collider2D * collider, ContactFilter2D * contactFilter, ContactPoint2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171910, int32_t, GetRigidbodyContacts_Injected, (Rigidbody2D * rigidbody, ContactFilter2D * contactFilter, ContactPoint2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171980, int32_t, GetColliderContactsCollidersOnly_Injected, (Collider2D * collider, ContactFilter2D * contactFilter, Collider2D__Array * results));
IL2CPP_REGISTER_METHOD(0x031719F0, int32_t, GetRigidbodyContactsCollidersOnly_Injected, (Rigidbody2D * rigidbody, ContactFilter2D * contactFilter, Collider2D__Array * results));
}
