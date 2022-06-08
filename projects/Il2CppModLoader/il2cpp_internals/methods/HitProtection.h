using namespace app;

namespace app::methods::HitProtection {
IL2CPP_REGISTER_METHOD(0x00B571B0, void, SetVulnerability, (HitProtection * __this, float time));
IL2CPP_REGISTER_METHOD(0x00B571D0, void, Update, (HitProtection * __this));
IL2CPP_REGISTER_METHOD(0x00B572A0, void, SetProtectionState, (HitProtection * __this, Object * setter, HitProtectionState__Enum value));
IL2CPP_REGISTER_METHOD(0x00B57530, HitProtectionState__Enum, get_ProtectionState, (HitProtection * __this));
IL2CPP_REGISTER_METHOD(0x00B57540, bool, IsVulnerable, (HitProtection * __this));
IL2CPP_REGISTER_METHOD(0x00B57560, bool, IsInvulnerable, (HitProtection * __this));
IL2CPP_REGISTER_METHOD(0x00B57580, void, PreventVulnerability, (HitProtection * __this, float invulnerabilityTime));
IL2CPP_REGISTER_METHOD(0x00B575A0, bool, IsProtectedFrom, (HitProtection * __this, HitProtectionState__Enum state, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHOD(0x00B575C0, bool, IsProtectedFrom, (HitProtection * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00B57650, void, __ctor, (HitProtection * __this));
}
