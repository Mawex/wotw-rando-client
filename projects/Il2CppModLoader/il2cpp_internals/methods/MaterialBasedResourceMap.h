#include <interception_macros.h>

namespace app::methods::MaterialBasedResourceMap {
IL2CPP_REGISTER_METHOD(0x01380A60, MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache *, get_RuntimeCache, (MaterialBasedResourceMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, ClearCache, (MaterialBasedResourceMap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PopulateRuntimeCache, (MaterialBasedResourceMap * __this, MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache * cache));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (MaterialBasedResourceMap * __this));
IL2CPP_REGISTER_METHOD(0x01580170, Object *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHOD(0x01580170, HornBugSlamEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0474C790, MaterialBasedResourceMap_Get_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, LizardMovementEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0471EB58, MaterialBasedResourceMap_Get_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, SeinWeaponsEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0470CBC8, MaterialBasedResourceMap_Get_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, LizardAttackEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0477D958, MaterialBasedResourceMap_Get_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, PhysicsEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04787208, MaterialBasedResourceMap_Get_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, SeinPlatformingEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04715628, MaterialBasedResourceMap_Get_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01580170, SeinPoleEffects *, Get, (MaterialBasedResourceMap * __this, SurfaceMaterialType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0477DD50, MaterialBasedResourceMap_Get_7__MethodInfo);
}
