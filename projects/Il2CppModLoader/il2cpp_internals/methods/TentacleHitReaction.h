#include <interception_macros.h>

namespace app::methods::TentacleHitReaction {
IL2CPP_REGISTER_METHOD(0x002FBC20, EntityDamageEvent *, get_DamageEvent, (TentacleHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DamageEvent, (TentacleHitReaction * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x00D008A0, void, OnEnterTask, (TentacleHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D009C0, void, OnHit, (TentacleHitReaction * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x00D014B0, BehaviourStatus__Enum, OnExecuteTask, (TentacleHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D01540, void, OnExitTask, (TentacleHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D01550, Vector3, ProcessKickback, (TentacleHitReaction * __this, Damage * damage, float multiplier, float knockupMultiplier));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RunInParallel, (TentacleHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (TentacleHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x00D01AF0, void, __ctor, (TentacleHitReaction * __this));
}
