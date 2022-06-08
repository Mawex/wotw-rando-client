using namespace app;

namespace app::methods::FollowerCapsuleCollider_Batcher {
IL2CPP_REGISTER_METHOD(0x001257B0, void, RefreshCapacity, (FollowerCapsuleCollider_Batcher__Boxed * __this, int32_t instanceCount));
IL2CPP_REGISTER_METHOD(0x001257C0, bool, RequestCapsule, (FollowerCapsuleCollider_Batcher__Boxed * __this, CapsuleCollider * capsule, Transform * transform, Vector3 pos, Quaternion rot, float height));
IL2CPP_REGISTER_METHOD(0x00125820, void, RemovePendingRequest, (FollowerCapsuleCollider_Batcher__Boxed * __this, CapsuleCollider * capsule));
IL2CPP_REGISTER_METHOD(0x00125830, void, Update, (FollowerCapsuleCollider_Batcher__Boxed * __this));
}
