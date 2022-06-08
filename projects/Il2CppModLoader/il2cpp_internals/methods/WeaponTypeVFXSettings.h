#include <interception_macros.h>

namespace app::methods::WeaponTypeVFXSettings {
IL2CPP_REGISTER_METHOD(0x0056FF10, void, Initialize, (WeaponTypeVFXSettings * __this));
IL2CPP_REGISTER_METHOD(0x005701A0, void, __ctor, (WeaponTypeVFXSettings * __this));
IL2CPP_REGISTER_METHOD(0x005705F0, GameObject *, FindVFX, (WeaponTypeVFXSettings * __this, EquipmentType__Enum weaponType, MaterialTypeVFXSettings_EffectSize__Enum size));
IL2CPP_REGISTER_METHOD(0x00570710, GameObject *, FindBloodVFX, (WeaponTypeVFXSettings * __this, EquipmentType__Enum weaponType, MaterialTypeVFXSettings_EffectSize__Enum size, DamageRecieverType__Enum recieverType));
IL2CPP_REGISTER_METHOD(0x00570860, float, FindVFXOffset, (WeaponTypeVFXSettings * __this, EquipmentType__Enum weaponType));
IL2CPP_REGISTER_METHOD(0x00570970, void, __cctor, ());
}
