#include <interception_macros.h>

namespace app::methods::SpiderBossSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x011B7500, int32_t, get_NumShots, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B75C0, float, get_ShootSpeedMultiplier, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7680, bool, ShouldPauseLocomotion, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7690, void, CacheTarget, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B78E0, void, Shoot, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7B90, void, FixedUpdate, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B7CC0, void, ProjectileCollision, (SpiderBossSpitBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x0476D288, SpiderBossSpitBehaviour_ProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B8040, bool, CanSpawnCreep, (SpiderBossSpitBehaviour * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x011B81F0, void, SpawnCreep, (SpiderBossSpitBehaviour * __this, Vector3 position, Vector3 up, Transform * parent));
IL2CPP_REGISTER_METHOD(0x011B8530, void, SpawnProjectile, (SpiderBossSpitBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x011B8950, void, OnShootEvent, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04744930, SpiderBossSpitBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B8970, void, InitializeCancellableController, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8A00, void, InitializeHitReactionController, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8A90, void, OnCanFinishEnd, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8AA0, void, OnCanFinishStart, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8AB0, MoonTimeline *, GetTimeline, (SpiderBossSpitBehaviour * __this, MirroredTimelineSet * set));
IL2CPP_REGISTER_METHOD(0x011B8B90, void, PlayTimeline, (SpiderBossSpitBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011B8C90, void, PlayStart, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8D80, void, OnStartEnded, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04772718, SpiderBossSpitBehaviour_OnStartEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B8D90, void, PlayShoot, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B8E70, void, OnShootEnded, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CD98, SpiderBossSpitBehaviour_OnShootEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B9030, void, PlayEnd, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B9110, void, OnEndEnded, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04756318, SpiderBossSpitBehaviour_OnEndEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B9120, void, OnProcessRootMotion, (SpiderBossSpitBehaviour * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x04779928, SpiderBossSpitBehaviour_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B91F0, void, OnEnter, (SpiderBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B9D90, BehaviourStatus__Enum, OnExecute, (SpiderBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B9ED0, void, OnExit, (SpiderBossSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BA470, void, UpdateState, (SpiderBossSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BA6B0, void, __ctor, (SpiderBossSpitBehaviour * __this));
}
