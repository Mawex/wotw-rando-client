using namespace app;

namespace app::methods::UnityEngine::Collider {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309F6C0, bool, get_enabled, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309F710, void, set_enabled, (Collider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309F770, Rigidbody *, get_attachedRigidbody, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309F7C0, bool, get_isTrigger, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309F810, void, set_isTrigger, (Collider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309F870, float, get_contactOffset, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309F8C0, void, set_contactOffset, (Collider * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309F920, Vector3, ClosestPoint, (Collider * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0309F9B0, Bounds, get_bounds, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309FA40, PhysicMaterial *, get_sharedMaterial, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309FA90, void, set_sharedMaterial, (Collider * __this, PhysicMaterial * value));
IL2CPP_REGISTER_METHOD(0x0309FAF0, PhysicMaterial *, get_material, (Collider * __this));
IL2CPP_REGISTER_METHOD(0x0309FB40, void, set_material, (Collider * __this, PhysicMaterial * value));
IL2CPP_REGISTER_METHOD(0x0309FBA0, RaycastHit, Raycast, (Collider * __this, Ray ray, float maxDistance, bool * hasHit));
IL2CPP_REGISTER_METHOD(0x0309FC80, bool, Raycast, (Collider * __this, Ray ray, RaycastHit * hitInfo, float maxDistance));
IL2CPP_REGISTER_METHOD(0x0309FD70, void, Internal_ClosestPointOnBounds, (Collider * __this, Vector3 point, Vector3 * outPos, float * distance));
IL2CPP_REGISTER_METHOD(0x0309FDF0, Vector3, ClosestPointOnBounds, (Collider * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0309FF40, void, ClosestPoint_Injected, (Collider * __this, Vector3 * position, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309FFB0, void, get_bounds_Injected, (Collider * __this, Bounds * ret));
IL2CPP_REGISTER_METHOD(0x030A0010, void, Raycast_Injected, (Collider * __this, Ray * ray, float maxDistance, bool * hasHit, RaycastHit * ret));
IL2CPP_REGISTER_METHOD(0x030A00A0, void, Internal_ClosestPointOnBounds_Injected, (Collider * __this, Vector3 * point, Vector3 * outPos, float * distance));
}
