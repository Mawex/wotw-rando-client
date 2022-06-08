#include <interception_macros.h>

namespace app::methods::AbilityUpgradeSettings {
IL2CPP_REGISTER_METHOD(0x004B3B30, void, Awake, (AbilityUpgradeSettings * __this));
IL2CPP_REGISTER_METHOD(0x004B3CB0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x004B3D30, bool, HasSettingsForAbility, (AbilityUpgradeSettings * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x004B3DF0, UpgradableAbility *, GetUpgradableAbility, (AbilityUpgradeSettings * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x004B3E90, void, __ctor, (AbilityUpgradeSettings * __this));
}
