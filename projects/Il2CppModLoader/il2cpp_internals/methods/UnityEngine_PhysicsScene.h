#include <interception_macros.h>

namespace app::methods::UnityEngine::PhysicsScene {
IL2CPP_REGISTER_METHOD(0x002442E0, String *, ToString, (PhysicsScene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (PhysicsScene__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002443F0, bool, Equals, (PhysicsScene__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals, (PhysicsScene__Boxed * __this, PhysicsScene other));
IL2CPP_REGISTER_METHOD(0x002444C0, bool, Raycast, (PhysicsScene__Boxed * __this, Vector3 origin, Vector3 direction, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AA670, bool, Internal_RaycastTest, (PhysicsScene physicsScene, Ray ray, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x00244520, bool, Raycast, (PhysicsScene__Boxed * __this, Vector3 origin, Vector3 direction, RaycastHit * hitInfo, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AA970, bool, Internal_Raycast, (PhysicsScene physicsScene, Ray ray, float maxDistance, RaycastHit * hit, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x00244590, int32_t, Raycast, (PhysicsScene__Boxed * __this, Vector3 origin, Vector3 direction, RaycastHit__Array * raycastHits, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AABE0, int32_t, Internal_RaycastNonAlloc, (PhysicsScene physicsScene, Ray ray, RaycastHit__Array * raycastHits, float maxDistance, int32_t mask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AAC70, bool, Internal_RaycastTest_Injected, (PhysicsScene * physicsScene, Ray * ray, float maxDistance, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AAD00, bool, Internal_Raycast_Injected, (PhysicsScene * physicsScene, Ray * ray, float maxDistance, RaycastHit * hit, int32_t layerMask, QueryTriggerInteraction__Enum queryTriggerInteraction));
IL2CPP_REGISTER_METHOD(0x030AAD90, int32_t, Internal_RaycastNonAlloc_Injected, (PhysicsScene * physicsScene, Ray * ray, RaycastHit__Array * raycastHits, float maxDistance, int32_t mask, QueryTriggerInteraction__Enum queryTriggerInteraction));
}
