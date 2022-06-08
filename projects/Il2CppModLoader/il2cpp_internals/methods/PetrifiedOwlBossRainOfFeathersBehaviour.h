using namespace app;

namespace app::methods::PetrifiedOwlBossRainOfFeathersBehaviour {
IL2CPP_REGISTER_METHOD(0x0177ADE0, float, get_TimeBetweenProjectiles, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A64220, StateMachine_2 *, get_StateMachine, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005FDE00, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177AE00, void, CopyData, (PetrifiedOwlBossRainOfFeathersBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177AF00, void, OnEntityInitialized, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177B350, void, OnEnter, (PetrifiedOwlBossRainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177B560, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossRainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177B730, void, OnExit, (PetrifiedOwlBossRainOfFeathersBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177B910, void, UpdateShooting, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177B9E0, Vector3, RandomOffScreenPosition, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177C080, Vector3, RandomOffsetPosition, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177C3B0, void, OnShootEvent, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CD78, PetrifiedOwlBossRainOfFeathersBehaviour_OnShootEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0177C3C0, void, Shoot, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177C660, Projectile *, SpawnProjectile, (PetrifiedOwlBossRainOfFeathersBehaviour * __this, Vector2 shootPoint, Vector3 shootVelocity, ProjectileSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShoulStopAttack, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177C9E0, void, __ctor, (PetrifiedOwlBossRainOfFeathersBehaviour * __this));
}
