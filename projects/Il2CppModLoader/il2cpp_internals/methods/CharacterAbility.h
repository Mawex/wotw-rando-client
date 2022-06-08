#include <interception_macros.h>

namespace app::methods::CharacterAbility {
IL2CPP_REGISTER_METHOD(0x01046690, void, __ctor, (CharacterAbility * __this, PlayerAbilities * playerAbilities, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x010466A0, bool, get_HasAbility, (CharacterAbility * __this));
IL2CPP_REGISTER_METHOD(0x010466D0, void, set_HasAbility, (CharacterAbility * __this, bool value));
}
