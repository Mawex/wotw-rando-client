using namespace app;

namespace app::methods::FollowerCapsuleCollider {
IL2CPP_REGISTER_METHOD(0x0127CE30, bool, HasFromReference, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127CED0, bool, HasToReference, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127CF70, Vector3, get_CapsuleBase, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127D0F0, Vector3, get_CapsuleTop, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127D270, Vector3, GetCapsuleAxisFromDirection, (CapsuleCollider * capsule));
IL2CPP_REGISTER_METHOD(0x0127D400, void, UpdatePendingBatch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0127D4A0, void, RegisterBatchedCapsule, (CapsuleCollider * capsule));
IL2CPP_REGISTER_METHOD(0x0127D5C0, void, RegisterBatchedCapsules, (CapsuleCollider__Array * capsules));
IL2CPP_REGISTER_METHOD(0x0127D780, void, UnregisterBatchedCapsule, (CapsuleCollider * capsule));
IL2CPP_REGISTER_METHOD(0x0127D8A0, void, UnregisterBatchedCapsules, (CapsuleCollider__Array * capsules));
IL2CPP_REGISTER_METHOD(0x0127DA80, void, Awake, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127DC20, void, OnDestroy, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127DDC0, void, UpdateCapsule, (Vector3 from, Vector3 to, CapsuleCollider * capsule, FollowerCapsuleCollider_CapsulePlacementMode__Enum mode, bool batched));
IL2CPP_REGISTER_METHOD(0x0127E490, void, FixedUpdate, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127E850, float, get_ErrorDistanceToleranceEx, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127E940, Vector3, GetProjectedPointOnZ, (FollowerCapsuleCollider * __this, Vector3 pointPosition));
IL2CPP_REGISTER_METHOD(0x0127EA30, void, OnDrawGizmosSelected, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FollowerCapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0127EF90, void, __cctor, (MethodInfo * method));
}
