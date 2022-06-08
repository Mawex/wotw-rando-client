#include <interception_macros.h>

namespace app::methods::MaterialVFXManager {
IL2CPP_REGISTER_METHOD(0x01383BF0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01383C70, void, Awake, (MaterialVFXManager * __this));
IL2CPP_REGISTER_METHOD(0x01383D40, void, Instantiate, (MaterialVFXManager * __this, Collider * collider, MaterialTypeVFXSettings_EffectSize__Enum surfaceImpactSize, Vector3 position, Quaternion rotation, EquipmentType__Enum weapon, MaterialTypeVFXSettings_EffectSize__Enum weaponImpactSize));
IL2CPP_REGISTER_METHOD(0x01383EE0, void, Instantiate, (MaterialVFXManager * __this, PhysicMaterial * material, MaterialTypeVFXSettings_EffectSize__Enum surfaceImpactSize, Vector3 position, Quaternion rotation, EquipmentType__Enum weapon, MaterialTypeVFXSettings_EffectSize__Enum weaponImpactSize));
IL2CPP_REGISTER_METHOD(0x01383F70, void, Instantiate, (MaterialVFXManager * __this, SurfaceMaterialType__Enum materialType, MaterialTypeVFXSettings_EffectSize__Enum surfaceImpactSize, Vector3 position, Quaternion rotation, EquipmentType__Enum weapon, MaterialTypeVFXSettings_EffectSize__Enum weaponImpactSize));
IL2CPP_REGISTER_METHOD(0x01384100, void, InstantiateOptional, (MaterialVFXManager * __this, InstantiationRecycleHelper * surfaceFXRecycler, InstantiationRecycleHelper * weaponFxRecycler, SurfaceMaterialType__Enum materialType, MaterialTypeVFXSettings_EffectSize__Enum surfaceImpactSize, Vector3 position, Quaternion rotation, EquipmentType__Enum weapon, MaterialTypeVFXSettings_EffectSize__Enum weaponImpactSize, int32_t framesToTestAgainst, int32_t allowedInstanceCount, float distanceThreshold));
IL2CPP_REGISTER_METHOD(0x01384380, GameObject *, InstantiateSurfaceFX, (MaterialVFXManager * __this, SurfaceMaterialType__Enum materialType, MaterialTypeVFXSettings_EffectSize__Enum surfaceImpactSize, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x013844F0, GameObject *, InstantiateWeaponFX, (MaterialVFXManager * __this, EquipmentType__Enum weapon, MaterialTypeVFXSettings_EffectSize__Enum weaponImpactSize, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x01384660, SurfaceMaterialType__Enum, GetMaterialType, (MaterialVFXManager * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x01384780, SurfaceMaterialType__Enum, GetMaterialType, (MaterialVFXManager * __this, PhysicMaterial * material));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MaterialVFXManager * __this));
}
