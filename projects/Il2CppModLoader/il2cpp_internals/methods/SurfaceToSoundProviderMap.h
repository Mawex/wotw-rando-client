using namespace app;

namespace app::methods::SurfaceToSoundProviderMap {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006736B0, SoundDescriptor *, GetSoundForMaterial, (SurfaceToSoundProviderMap * __this, SurfaceMaterialType__Enum surfaceMaterialType, IContext * context));
IL2CPP_REGISTER_METHOD(0x006739A0, SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialType, (Collider * collider));
IL2CPP_REGISTER_METHOD(0x00673AD0, Object *, GetGenericResource, (SurfaceToSoundProviderMap * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00673AF0, int32_t, GetGenericResourceId, (SurfaceToSoundProviderMap * __this, Object * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SurfaceToSoundProviderMap * __this));
}
