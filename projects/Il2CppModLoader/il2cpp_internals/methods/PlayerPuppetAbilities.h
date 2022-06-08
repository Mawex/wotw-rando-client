#include <interception_macros.h>

namespace app::methods::PlayerPuppetAbilities {
IL2CPP_REGISTER_METHOD(0x01427E20, bool, HasAbility, (PlayerPuppetAbilities * __this, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x01427EC0, void, SetAbility, (PlayerPuppetAbilities * __this, AbilityType__Enum abilityType, bool value));
IL2CPP_REGISTER_METHOD(0x01427FC0, void, RemoveAllAbilities, (PlayerPuppetAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01428090, void, __ctor, (PlayerPuppetAbilities * __this));
}
