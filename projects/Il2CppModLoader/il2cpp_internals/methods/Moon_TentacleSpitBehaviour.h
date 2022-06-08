#include <interception_macros.h>

namespace app::methods::Moon::TentacleSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x010B5B10, GameObject *, get_CreepPrefab, (TentacleSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B5BC0, GameObject *, get_ProjectilePrefab, (TentacleSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B5C70, int32_t, GetPrewarmAmount, (TentacleSpitBehaviour * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x010B5C80, int32_t, GetPrewarmAmountForCreep, (TentacleSpitBehaviour * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x010B5C90, void, OnEnter, (TentacleSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010B5DF0, void, PlayTimeline, (TentacleSpitBehaviour * __this, MoonTimeline * timeline, EventTriggerAnimator * spitTrigger));
IL2CPP_REGISTER_METHOD(0x010B5FA0, void, StartShooting, (TentacleSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04704D30, TentacleSpitBehaviour_StartShooting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B5FC0, BehaviourStatus__Enum, OnExecute, (TentacleSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010B6330, void, OnExit, (TentacleSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010B6400, void, Shoot, (TentacleSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B64A0, void, SpawnProjectile, (TentacleSpitBehaviour * __this, float shotAngle));
IL2CPP_REGISTER_METHOD(0x010B6DB0, void, ProjectileBash, (TentacleSpitBehaviour * __this, Projectile * projectile));
IL2CPP_REGISTER_METHODINFO(0x04737D28, TentacleSpitBehaviour_ProjectileBash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B6DB0, void, ProjectileReflect, (TentacleSpitBehaviour * __this, Projectile * projectile));
IL2CPP_REGISTER_METHODINFO(0x047728A0, TentacleSpitBehaviour_ProjectileReflect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010B6DC0, void, IgnoreProjectileCollisions, (TentacleSpitBehaviour * __this, Projectile * projectile, bool ignore));
IL2CPP_REGISTER_METHOD(0x010B6FA0, void, OnProjectileCollision, (TentacleSpitBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x0477D4C8, TentacleSpitBehaviour_OnProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TentacleSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B7680, void, __ctor, (TentacleSpitBehaviour * __this));
}
