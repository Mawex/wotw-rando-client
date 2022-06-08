using namespace app;

namespace app::methods::PhysicsMaterialManager {
IL2CPP_REGISTER_METHOD(0x01153E30, Switch_1 *, SurfaceMaterialTypeToSwitch, (PhysicsMaterialManager * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHOD(0x01154000, void, Awake, (PhysicsMaterialManager * __this));
IL2CPP_REGISTER_METHOD(0x011547E0, SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialType, (PhysicsMaterialManager * __this, PhysicMaterial * material));
IL2CPP_REGISTER_METHOD(0x011549C0, SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialTypeNoDefault, (PhysicsMaterialManager * __this, PhysicMaterial * material));
IL2CPP_REGISTER_METHOD(0x01154BA0, void, SetSurfaceDetailRtpcs, (PhysicsMaterialManager * __this, GameObject * soundHostGameObject));
IL2CPP_REGISTER_METHOD(0x01155200, void, __ctor, (PhysicsMaterialManager * __this));
}
