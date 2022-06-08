#include <interception_macros.h>

namespace app::methods::WindCollision {
IL2CPP_REGISTER_METHOD(0x00575560, void, Awake, (WindCollision * __this));
IL2CPP_REGISTER_METHOD(0x005756C0, void, OnEnable, (WindCollision * __this));
IL2CPP_REGISTER_METHOD(0x00575770, void, OnTriggerEnter, (WindCollision * __this, Collider * col));
IL2CPP_REGISTER_METHOD(0x00575CD0, void, PerformKnockback, (WindCollision * __this, GameObject * go, DamageOwner * damageOwner, AnimationCurve * distanceToKnockback));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WindCollision * __this));
}
