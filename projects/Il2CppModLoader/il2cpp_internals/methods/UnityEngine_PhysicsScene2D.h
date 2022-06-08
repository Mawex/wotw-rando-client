using namespace app;

namespace app::methods::UnityEngine::PhysicsScene2D {
IL2CPP_REGISTER_METHOD(0x0024A820, String *, ToString, (PhysicsScene2D__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (PhysicsScene2D__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A930, bool, Equals, (PhysicsScene2D__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals, (PhysicsScene2D__Boxed * __this, PhysicsScene2D other));
IL2CPP_REGISTER_METHOD(0x0024AA00, RaycastHit2D, Raycast, (PhysicsScene2D__Boxed * __this, Vector2 origin, Vector2 direction, float distance, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x0024AA50, RaycastHit2D, Raycast, (PhysicsScene2D__Boxed * __this, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter));
IL2CPP_REGISTER_METHOD(0x03171D00, RaycastHit2D, Raycast_Internal, (PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter));
IL2CPP_REGISTER_METHOD(0x0024AB40, int32_t, Raycast, (PhysicsScene2D__Boxed * __this, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03171E90, int32_t, RaycastNonAlloc_Internal, (PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x0024AB90, int32_t, GetRayIntersection, (PhysicsScene2D__Boxed * __this, Ray ray, float distance, RaycastHit2D__Array * results, int32_t layerMask));
IL2CPP_REGISTER_METHOD(0x03171FE0, int32_t, GetRayIntersectionNonAlloc_Internal, (PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int32_t layerMask, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x0316D7B0, int32_t, OverlapCollider, (Collider2D * collider, ContactFilter2D contactFilter, Collider2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03172070, int32_t, OverlapCollider_Internal, (Collider2D * collider, ContactFilter2D contactFilter, Collider2D__Array * results));
IL2CPP_REGISTER_METHOD(0x031720E0, void, Raycast_Internal_Injected, (PhysicsScene2D * physicsScene, Vector2 * origin, Vector2 * direction, float distance, ContactFilter2D * contactFilter, RaycastHit2D * ret));
IL2CPP_REGISTER_METHOD(0x03172170, int32_t, RaycastNonAlloc_Internal_Injected, (PhysicsScene2D * physicsScene, Vector2 * origin, Vector2 * direction, float distance, ContactFilter2D * contactFilter, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03172200, int32_t, GetRayIntersectionNonAlloc_Internal_Injected, (PhysicsScene2D * physicsScene, Vector3 * origin, Vector3 * direction, float distance, int32_t layerMask, RaycastHit2D__Array * results));
IL2CPP_REGISTER_METHOD(0x03172290, int32_t, OverlapCollider_Internal_Injected, (Collider2D * collider, ContactFilter2D * contactFilter, Collider2D__Array * results));
}
