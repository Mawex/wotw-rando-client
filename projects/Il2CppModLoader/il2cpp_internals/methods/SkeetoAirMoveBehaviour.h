#include <interception_macros.h>

namespace app::methods::SkeetoAirMoveBehaviour {
IL2CPP_REGISTER_METHOD(0x0074C3A0, Vector3, get_TargetPosition, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C3C0, void, set_TargetPosition, (SkeetoAirMoveBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C400, void, set_TraversalSpeed, (SkeetoAirMoveBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0074C420, bool, get_HasArrivedAtTarget, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C450, Vector2, get_CurrentTargetDirection, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C470, void, set_CurrentTargetDirection, (SkeetoAirMoveBehaviour * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0074C4A0, bool, get_IsTurning, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C4B0, bool, IsAtPoint, (SkeetoAirMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0074C5F0, void, OnInitializeTask, (SkeetoAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074C730, void, OnEnterTask, (SkeetoAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074C940, void, OnExitTask, (SkeetoAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0074C9D0, BehaviourStatus__Enum, OnExecuteTask, (SkeetoAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (SkeetoAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074D1C0, void, PauseFlyTimeline, (SkeetoAirMoveBehaviour * __this, bool shouldPause));
IL2CPP_REGISTER_METHOD(0x0074D230, void, ChangeState, (SkeetoAirMoveBehaviour * __this, SkeetoAirMoveBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0074D270, void, OnFlipEnter, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074D550, void, PlayTimeline, (SkeetoAirMoveBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x0074D690, void, ResetTimeline, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074D780, void, FlipTransform, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B9E0, SkeetoAirMoveBehaviour_FlipTransform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0074D7D0, void, UpdateYDirAnimationParameter, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074D830, void, __ctor, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074D8C0, void, _OnFlipEnter_b__45_0, (SkeetoAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0479A170, SkeetoAirMoveBehaviour__OnFlipEnter_b__45_0__MethodInfo);
}
