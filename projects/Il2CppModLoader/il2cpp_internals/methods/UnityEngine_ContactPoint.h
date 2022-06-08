using namespace app;

namespace app::methods::UnityEngine::ContactPoint {
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_point, (ContactPoint__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_normal, (ContactPoint__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00244220, Collider *, get_thisCollider, (ContactPoint__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00244270, Collider *, get_otherCollider, (ContactPoint__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x030A2D60, Collider *, GetColliderByInstanceID, (int32_t instanceID));
}
