using namespace app;

namespace app::methods::LaserShooterMinibossBeamAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F17150, void, OnEnter, (LaserShooterMinibossBeamAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F17280, BehaviourStatus__Enum, OnExecute, (LaserShooterMinibossBeamAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F172A0, void, OnExit, (LaserShooterMinibossBeamAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F17370, void, StartTimeline, (LaserShooterMinibossBeamAttackBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F173B0, void, StopCurrentTimeline, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F17480, void, ClearTimelineStopEvent, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F174E0, void, SetState, (LaserShooterMinibossBeamAttackBehaviour * __this, LaserShooterMinibossBeamAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F17520, void, EnterState, (LaserShooterMinibossBeamAttackBehaviour * __this, LaserShooterMinibossBeamAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F17710, void, UpdateState, (LaserShooterMinibossBeamAttackBehaviour * __this, LaserShooterMinibossBeamAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F17A50, void, ExitState, (LaserShooterMinibossBeamAttackBehaviour * __this, LaserShooterMinibossBeamAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F17C00, void, EnterBeamState, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F18020, void, UpdateBeamAttack, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F18350, void, OnBeamCycleEnd, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BBC0, LaserShooterMinibossBeamAttackBehaviour_OnBeamCycleEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F184F0, void, EnterAnticState, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F186C0, void, OnAnticTimelineEnds, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C110, LaserShooterMinibossBeamAttackBehaviour_OnAnticTimelineEnds__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F186F0, void, __ctor, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F18780, void, _EnterState_b__19_0, (LaserShooterMinibossBeamAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CB98, LaserShooterMinibossBeamAttackBehaviour__EnterState_b__19_0__MethodInfo);
}
