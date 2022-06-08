using namespace app;

namespace app::methods::SkeetoLocomotionIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x00758D90, bool, get_IsTurning, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00758DA0, void, OnInitializeTask, (SkeetoLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00758E80, void, OnEnterTask, (SkeetoLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00759060, BehaviourStatus__Enum, OnExecuteTask, (SkeetoLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007592D0, void, OnExitTask, (SkeetoLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (SkeetoLocomotionIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007592F0, bool, ShouldChangeDirection, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007593A0, Vector2, ProcessVelocity, (SkeetoLocomotionIdleBehaviour * __this, Vector2 currentVelocity));
IL2CPP_REGISTER_METHOD(0x007596B0, void, ChangeState, (SkeetoLocomotionIdleBehaviour * __this, SkeetoLocomotionIdleBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00759700, void, OnFlipEnter, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007599E0, void, PlayTimeline, (SkeetoLocomotionIdleBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00759B20, void, ResetTimeline, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00759C10, void, FlipTransform, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047780F8, SkeetoLocomotionIdleBehaviour_FlipTransform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00759C60, void, Unset, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00759F20, void, UpdateYDirAnimationParameter, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00759F80, void, __ctor, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00759FB0, void, _OnFlipEnter_b__26_0, (SkeetoLocomotionIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04769C38, SkeetoLocomotionIdleBehaviour__OnFlipEnter_b__26_0__MethodInfo);
}
