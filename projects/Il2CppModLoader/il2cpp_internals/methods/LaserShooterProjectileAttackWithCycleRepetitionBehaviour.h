#include <interception_macros.h>

namespace app::methods::LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1E4C0, void, OnEnter, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E500, BehaviourStatus__Enum, OnExecute, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E5A0, void, OnExit, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009F7FA0, void, StartTimeline, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F1E5D0, void, StopCurrentTimeline, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1E600, void, SetState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F1E640, void, EnterState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F1E830, void, UpdateState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F1E8C0, void, ExitState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F1E960, void, EnterBeamState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1EB00, void, OnShootCycleEnd, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C6F0, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_OnShootCycleEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F1ED00, void, ShootProjectile, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1F100, void, EnterAnticState, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1F290, void, OnAnticTimelineEnds, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047567F0, LaserShooterProjectileAttackWithCycleRepetitionBehaviour_OnAnticTimelineEnds__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F1F2C0, void, UpdateRotation, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1F800, void, __ctor, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1F890, void, _EnterState_b__19_0, (LaserShooterProjectileAttackWithCycleRepetitionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04705F98, LaserShooterProjectileAttackWithCycleRepetitionBehaviour__EnterState_b__19_0__MethodInfo);
}
