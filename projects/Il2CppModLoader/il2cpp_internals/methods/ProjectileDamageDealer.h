#include <interception_macros.h>

namespace app::methods::ProjectileDamageDealer {
IL2CPP_REGISTER_METHOD(0x00C7B450, void, Awake, (ProjectileDamageDealer * __this));
IL2CPP_REGISTER_METHOD(0x00C7B510, void, DealDamage, (ProjectileDamageDealer * __this, GameObject * target, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x00C7B600, float, AmountOfDamage, (ProjectileDamageDealer * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00C7B6F0, void, __ctor, (ProjectileDamageDealer * __this));
}
