#include <interception_macros.h>

namespace app::methods::TentacleEnemy_MeleeAttackState {
IL2CPP_REGISTER_METHOD(0x00CF8280, bool, get_CanInitiateAttack, (TentacleEnemy_MeleeAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CF88D0, String *, get_Name, (TentacleEnemy_MeleeAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CF8950, void, OnBegin, (TentacleEnemy_MeleeAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CF8960, void, OnInterrupt, (TentacleEnemy_MeleeAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CF8980, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_MeleeAttackState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00CF9AE0, void, OnCollision, (TentacleEnemy_MeleeAttackState * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (TentacleEnemy_MeleeAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFA460, void, __ctor, (TentacleEnemy_MeleeAttackState * __this));
}
