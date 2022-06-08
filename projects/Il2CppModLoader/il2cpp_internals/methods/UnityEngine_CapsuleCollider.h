using namespace app;

namespace app::methods::UnityEngine::CapsuleCollider {
IL2CPP_REGISTER_METHOD(0x0309DFC0, Vector3, get_center, (CapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309E040, void, set_center, (CapsuleCollider * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309E0A0, float, get_radius, (CapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309E0F0, void, set_radius, (CapsuleCollider * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309E150, float, get_height, (CapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309E1A0, void, set_height, (CapsuleCollider * __this, float value));
IL2CPP_REGISTER_METHOD(0x0309E200, int32_t, get_direction, (CapsuleCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309E250, void, set_direction, (CapsuleCollider * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0309E2B0, void, set_moonFastResize, (CapsuleCollider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309E310, void, SetRadiusAndHeight, (CapsuleCollider * __this, float radius, float height));
IL2CPP_REGISTER_METHOD(0x0309E380, void, BatchedSetRadiusAndHeight, (CapsuleCollider__Array * capsules, int32_t count, Single__Array * radius, Single__Array * height));
IL2CPP_REGISTER_METHOD(0x0309E380, void, Internal_BatchedSetRadiusAndHeight, (CapsuleCollider__Array * capsules, int32_t count, Single__Array * radius, Single__Array * height));
IL2CPP_REGISTER_METHOD(0x0309E400, void, get_center_Injected, (CapsuleCollider * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309E460, void, set_center_Injected, (CapsuleCollider * __this, Vector3 * value));
}
