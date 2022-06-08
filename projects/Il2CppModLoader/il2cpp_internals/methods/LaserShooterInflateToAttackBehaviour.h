using namespace app;

namespace app::methods::LaserShooterInflateToAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x00F155B0, bool, get_WasHitDuringAttack, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F155C0, void, set_WasHitDuringAttack, (LaserShooterInflateToAttackBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F155D0, void, OnEntityInitialized, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F15670, void, OnEnter, (LaserShooterInflateToAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F15790, void, OnExit, (LaserShooterInflateToAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F157A0, BehaviourStatus__Enum, OnExecute, (LaserShooterInflateToAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F15860, void, ChangeState, (LaserShooterInflateToAttackBehaviour * __this, LaserShooterInflateToAttackBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnAnticUpdate, (LaserShooterInflateToAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F15B30, BehaviourStatus__Enum, OnShootingUpdate, (LaserShooterInflateToAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F161C0, BehaviourStatus__Enum, OnResolveUpdate, (LaserShooterInflateToAttackBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00F163E0, void, OnAnticEnter, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F16590, void, OnShootingEnter, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F16880, void, OnResolveEnter, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F16A30, void, StartLoopingShootTimeline, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04700C30, LaserShooterInflateToAttackBehaviour_StartLoopingShootTimeline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F16BE0, void, StartTimeline, (LaserShooterInflateToAttackBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F16C50, void, StopCurrentTimeline, (LaserShooterInflateToAttackBehaviour * __this, bool callOnStopAction));
IL2CPP_REGISTER_METHOD(0x00F16D80, float, GetT, (LaserShooterInflateToAttackBehaviour * __this, float time, float duration, AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x00F16DF0, void, OnDamageResultReceived, (LaserShooterInflateToAttackBehaviour * __this, DamageResult obj));
IL2CPP_REGISTER_METHODINFO(0x0474DC68, LaserShooterInflateToAttackBehaviour_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnShoot, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackInflateEnter, (LaserShooterInflateToAttackBehaviour * __this, int32_t iteration));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackInflate, (LaserShooterInflateToAttackBehaviour * __this, float dTime, float normalizedPhaseTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackDeflateEnter, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackDeflate, (LaserShooterInflateToAttackBehaviour * __this, float dTime, float normalizedPhaseTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackResolveEnter, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackResolve, (LaserShooterInflateToAttackBehaviour * __this, float dTime, float normalizedPhaseTime));
IL2CPP_REGISTER_METHOD(0x00F16E00, void, __ctor, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F16F70, void, _OnAnticEnter_b__27_0, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047690B0, LaserShooterInflateToAttackBehaviour__OnAnticEnter_b__27_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnResolveEnter_b__29_0, (LaserShooterInflateToAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04744278, LaserShooterInflateToAttackBehaviour__OnResolveEnter_b__29_0__MethodInfo);
}
