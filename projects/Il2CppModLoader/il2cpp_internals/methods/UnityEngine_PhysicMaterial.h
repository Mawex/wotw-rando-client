using namespace app;

namespace app::methods::UnityEngine::PhysicMaterial {
IL2CPP_REGISTER_METHOD(0x030A3870, void, __ctor, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3960, void, Internal_CreateDynamicsMaterial, (PhysicMaterial * mat, String * name));
IL2CPP_REGISTER_METHOD(0x030A39C0, float, get_bounciness, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3A10, void, set_bounciness, (PhysicMaterial * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A3A70, float, get_dynamicFriction, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3AC0, void, set_dynamicFriction, (PhysicMaterial * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A3B20, float, get_staticFriction, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3B70, void, set_staticFriction, (PhysicMaterial * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A3BD0, PhysicMaterialCombine__Enum, get_frictionCombine, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3C20, void, set_frictionCombine, (PhysicMaterial * __this, PhysicMaterialCombine__Enum value));
IL2CPP_REGISTER_METHOD(0x030A3C80, PhysicMaterialCombine__Enum, get_bounceCombine, (PhysicMaterial * __this));
IL2CPP_REGISTER_METHOD(0x030A3CD0, void, set_bounceCombine, (PhysicMaterial * __this, PhysicMaterialCombine__Enum value));
}
