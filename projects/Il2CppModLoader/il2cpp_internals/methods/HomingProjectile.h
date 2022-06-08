#include <interception_macros.h>

namespace app::methods::HomingProjectile {
IL2CPP_REGISTER_METHOD(0x00B5D330, void, FixedUpdate, (HomingProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00B5D660, void, SetProjectileParameters, (HomingProjectile * __this, Transform * target, float turningSpeed, float damage, DamageWeight__Enum damageWeight, DamageLayerMask__Enum damageLayerMask, DamageOwner * damageOwner, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x00B5D6B0, void, __ctor, (HomingProjectile * __this));
}
