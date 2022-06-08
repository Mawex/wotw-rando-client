#include <interception_macros.h>

namespace app::methods::PiranhaLocomotionSwimmingBehaviour {
IL2CPP_REGISTER_METHOD(0x01160790, Vector3, get_TargetPosition, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011607B0, void, set_TargetPosition, (PiranhaLocomotionSwimmingBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011607D0, void, set_TraversalSpeed, (PiranhaLocomotionSwimmingBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x011608C0, bool, get_HasArrivedAtTarget, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01160A20, bool, IsAtPoint, (PiranhaLocomotionSwimmingBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x01160B80, PiranhaLocomotionSwimmingBehaviour_SpeedSetting *, GetSpeedSettingForTier, (PiranhaLocomotionSwimmingBehaviour * __this, float speedTier));
IL2CPP_REGISTER_METHOD(0x01160DC0, void, OnInitializeTask, (PiranhaLocomotionSwimmingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01160EF0, void, OnResetTask, (PiranhaLocomotionSwimmingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01160F00, void, OnEnterTask, (PiranhaLocomotionSwimmingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01161160, BehaviourStatus__Enum, OnExecuteTask, (PiranhaLocomotionSwimmingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (PiranhaLocomotionSwimmingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01161D00, void, ChangeState, (PiranhaLocomotionSwimmingBehaviour * __this, PiranhaLocomotionSwimmingBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x01161D50, void, OnVerticalFlipEnter, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01161FB0, void, OnHorizontalFlipEnter, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011621D0, void, ChangeStateToSwimming, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047042F0, PiranhaLocomotionSwimmingBehaviour_ChangeStateToSwimming__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01162200, void, PlayTimeline, (PiranhaLocomotionSwimmingBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x01162340, void, ResetTimeline, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01162430, void, AccelerateTowards, (PiranhaLocomotionSwimmingBehaviour * __this, Vector2 targetVelocity, PiranhaLocomotionSwimmingBehaviour_SpeedSetting * setting));
IL2CPP_REGISTER_METHOD(0x011626A0, void, ResetCurrentDirection, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01162830, void, OnDrawGizmos, (PiranhaLocomotionSwimmingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01162F80, void, __ctor, (PiranhaLocomotionSwimmingBehaviour * __this));
}
