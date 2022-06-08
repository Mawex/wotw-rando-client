using namespace app;

namespace app::methods::SpiderBossAttackBite {
IL2CPP_REGISTER_METHOD(0x009652C0, void, OnEnter, (SpiderBossAttackBite * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009655D0, BehaviourStatus__Enum, OnExecute, (SpiderBossAttackBite * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00965630, void, OnExit, (SpiderBossAttackBite * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00965930, void, InitializeCancellableController, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHOD(0x009659D0, void, ChangeState, (SpiderBossAttackBite * __this, SpiderBossAttackBite_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHOD(0x00965A10, void, OnEnterTransition, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterShootAndEnd, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHOD(0x00965A40, void, OnTimelineEnded, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHODINFO(0x047560E0, SpiderBossAttackBite_OnTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00965A60, void, Bite, (SpiderBossAttackBite * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D458, SpiderBossAttackBite_Bite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00966080, void, SpawnProjectile, (SpiderBossAttackBite * __this, Vector2 shootPoint, Vector3 shootVelocity));
IL2CPP_REGISTER_METHOD(0x009664A0, void, OnProjectileCollision, (SpiderBossAttackBite * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04795F90, SpiderBossAttackBite_OnProjectileCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009666A0, void, SpawnAcid, (SpiderBossAttackBite * __this, GameObject * prefab, Vector3 position, Vector3 up, Transform * parent));
IL2CPP_REGISTER_METHOD(0x009668D0, void, __ctor, (SpiderBossAttackBite * __this));
}
