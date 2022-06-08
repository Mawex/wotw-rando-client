using namespace app;

namespace app::methods::WeaponVFXSet {
IL2CPP_REGISTER_METHOD(0x005709F0, void, __ctor, (WeaponVFXSet * __this, EquipmentType__Enum weapon));
IL2CPP_REGISTER_METHOD(0x00570E50, void, Initialize, (WeaponVFXSet * __this));
IL2CPP_REGISTER_METHOD(0x00570F90, GameObject *, FindPrefab, (WeaponVFXSet * __this, MaterialTypeVFXSettings_EffectSize__Enum size));
IL2CPP_REGISTER_METHOD(0x00571130, GameObject *, FindBloodPrefab, (WeaponVFXSet * __this, MaterialTypeVFXSettings_EffectSize__Enum size, DamageRecieverType__Enum type));
}
