using namespace app;

namespace app::methods::LaserShooterBeamAttackWithCycleRepetitionBehaviour {
IL2CPP_REGISTER_METHOD(0x00F115E0, void, OnEntityInitialized, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F11620, void, OnEnter, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F116C0, BehaviourStatus__Enum, OnExecute, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F11840, void, OnExit, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F118B0, void, StartTimeline, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F118F0, void, StopCurrentTimeline, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F11920, void, SetState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F11960, void, EnterState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F11B50, void, UpdateState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F11CD0, void, ExitState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this, LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F11D70, void, EnterBeamState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F11F60, void, OnBeamCycleEnd, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04709368, LaserShooterBeamAttackWithCycleRepetitionBehaviour_OnBeamCycleEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F12150, void, EnterAnticState, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F122E0, void, OnAnticTimelineEnds, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04765440, LaserShooterBeamAttackWithCycleRepetitionBehaviour_OnAnticTimelineEnds__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F12310, void, UpdateBeamAttack, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F123F0, void, UpdateRotation, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F12970, void, __ctor, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F12AF0, void, _EnterState_b__20_0, (LaserShooterBeamAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A7C8, LaserShooterBeamAttackWithCycleRepetitionBehaviour__EnterState_b__20_0__MethodInfo);
}
