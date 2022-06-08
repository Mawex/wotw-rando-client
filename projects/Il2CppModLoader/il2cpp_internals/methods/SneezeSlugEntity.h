#include <interception_macros.h>

namespace app::methods::SneezeSlugEntity {
IL2CPP_REGISTER_METHOD(0x00E59A60, bool, get_IsFacingTarget, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDAFE0, bool, get_IsEntityOnScreen, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDAFF0, bool, get_IsBurrowed, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB000, bool, get_IsTargetOnTheRight, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB030, bool, get_FacingTarget, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB050, bool, get_IsTargetOnTheLeft, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB080, bool, get_CanReachUnburrowPoint, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00805D00, bool, get_ForceBurrow, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB090, void, set_ForceBurrow, (SneezeSlugEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EDB0B0, bool, get_CanBurrow, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB360, void, AddUnburrowPoints, (SneezeSlugEntity * __this, List_1_UnityEngine_Vector3_ * points));
IL2CPP_REGISTER_METHOD(0x00A84680, List_1_UnityEngine_Vector3_ *, GetUnburrowPoints, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB420, bool, CanReachAnyUnburrowPoint, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDAFF0, bool, get_Burrowed, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDB9F0, void, set_Burrowed, (SneezeSlugEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EDBA00, void, OnAwake, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDBD80, void, ResetEntity, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDBDD0, void, OnFixedUpdate, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC0C0, PlatformMovement *, GetPlatformMovement, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC0D0, bool, get_IgnoreGoThroughs, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC1F0, void, set_IgnoreGoThroughs, (SneezeSlugEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EDC340, void, SetVulnerability, (SneezeSlugEntity * __this, float time));
IL2CPP_REGISTER_METHOD(0x00EDC370, void, Start, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC470, void, OnDamageReceived, (SneezeSlugEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00EDC580, void, SetTouchDamageWeight, (SneezeSlugEntity * __this, DamageWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x00EDC5A0, void, ResetTouchDamageWeight, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC5D0, void, SetProtectionState, (SneezeSlugEntity * __this, Object * setter, SneezeSlugEntity_HitProtectionState__Enum value));
IL2CPP_REGISTER_METHOD(0x00EDC890, SneezeSlugEntity_HitProtectionState__Enum, get_ProtectionState, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC8B0, bool, IsVulnerable, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC8D0, bool, IsInvulnerable, (SneezeSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00EDC8F0, void, PreventVulnerability, (SneezeSlugEntity * __this, float invulnerabilityTime));
IL2CPP_REGISTER_METHOD(0x00B575A0, bool, IsProtectedFrom, (SneezeSlugEntity * __this, SneezeSlugEntity_HitProtectionState__Enum state, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHOD(0x00EDC910, bool, IsProtectedFrom, (SneezeSlugEntity * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00EDC9B0, void, __ctor, (SneezeSlugEntity * __this));
}
