#include <interception_macros.h>

namespace app::methods::Moon::SeinDamageOwner {
IL2CPP_REGISTER_METHOD(0x00ECB7C0, void, HandleDamageBoostShard, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECB900, void, HandleCombatLuckShard, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECBB10, void, HandleSpiritPowerShard, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECBD10, void, HandleIceShard, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECC150, void, HandleLastResortShard, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECC420, void, HandleHardMode, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECC550, void, ProcessDamage, (SeinDamageOwner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00ECC9C0, float, GetUpgradeBonus, (SeinDamageOwner * __this, float originalBaseDamage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SeinDamageOwner * __this));
}
