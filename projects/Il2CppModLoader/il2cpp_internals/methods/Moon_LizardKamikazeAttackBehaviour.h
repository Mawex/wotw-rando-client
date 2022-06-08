using namespace app;

namespace app::methods::Moon::LizardKamikazeAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x01106E50, bool, IsBlockingInterruption, (LizardKamikazeAttackBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x01106E60, void, OnEntityInitialized, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01106FA0, void, OnEnter, (LizardKamikazeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01107290, BehaviourStatus__Enum, OnExecute, (LizardKamikazeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011073C0, void, OnExit, (LizardKamikazeAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011073D0, void, ChangeState, (LizardKamikazeAttackBehaviour * __this, LizardKamikazeAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x01107650, void, UpdateState, (LizardKamikazeAttackBehaviour * __this, LizardKamikazeAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x011078F0, void, UpdateOnGround, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01107B10, void, Jump, (LizardKamikazeAttackBehaviour * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01107C10, void, PlayTimeline, (LizardKamikazeAttackBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x01107D30, void, ResetCurrentTimeline, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01107E20, void, Explode, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01107E70, void, UpdateVelocityRTPC, (LizardKamikazeAttackBehaviour * __this, float velocity));
IL2CPP_REGISTER_METHOD(0x01107F00, void, __ctor, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01107F20, void, _ChangeState_b__23_0, (LizardKamikazeAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04757A50, LizardKamikazeAttackBehaviour__ChangeState_b__23_0__MethodInfo);
}
