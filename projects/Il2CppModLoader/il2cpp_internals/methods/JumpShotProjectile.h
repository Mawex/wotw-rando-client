#include <interception_macros.h>

namespace app::methods::JumpShotProjectile {
IL2CPP_REGISTER_METHOD(0x00E4FE70, void, Start, (JumpShotProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00E4FFE0, void, FixedUpdate, (JumpShotProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00E501B0, void, ExplodeProjectile, (JumpShotProjectile * __this));
IL2CPP_REGISTER_METHOD(0x00E503F0, void, OnCollisionEnter, (JumpShotProjectile * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00E50580, void, OnTriggerEnter, (JumpShotProjectile * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00E508B0, void, __ctor, (JumpShotProjectile * __this));
}
