using namespace app;

namespace app::methods::Moon::LizardJumpOverBehaviour {
IL2CPP_REGISTER_METHOD(0x01105C70, void, Awake, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01105CA0, void, CacheSerializedComponents, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01105CD0, bool, IsBlockingInterruption, (LizardJumpOverBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x01105D00, void, OnEntityInitialized, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01105DB0, void, OnEnter, (LizardJumpOverBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011061C0, BehaviourStatus__Enum, OnExecute, (LizardJumpOverBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01106480, void, OnExit, (LizardJumpOverBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01106670, bool, WillJumpBeValid, (LizardJumpOverBehaviour * __this, Vector3 * landingPoint));
IL2CPP_REGISTER_METHOD(0x01106AF0, void, StartTimeline, (LizardJumpOverBehaviour * __this, MoonTimeline * timeline, Action * onEnd));
IL2CPP_REGISTER_METHOD(0x01106C30, void, DisableDamageDealers, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047908E8, LizardJumpOverBehaviour_DisableDamageDealers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01106C70, void, ActivateDamageDealers, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0088C860, Vector2, GetVector2, (LizardJumpOverBehaviour * __this, Vector3 vector));
IL2CPP_REGISTER_METHOD(0x01106CC0, void, __ctor, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnExecute_b__22_0, (LizardJumpOverBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04768D50, LizardJumpOverBehaviour__OnExecute_b__22_0__MethodInfo);
}
