#include <interception_macros.h>

namespace app::methods::LocomotionAirMoveBehaviour {
IL2CPP_REGISTER_METHOD(0x009EB5F0, Vector3, get_TargetPosition, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EB610, void, set_TargetPosition, (LocomotionAirMoveBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00FC3850, float, get_TraversalSpeed, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC3870, void, set_TraversalSpeed, (LocomotionAirMoveBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FC3890, bool, get_HasArrivedAtTarget, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC38C0, float, get_EffectiveMinSpeed, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC38E0, float, get_EffectiveMaxSpeed, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC3900, bool, IsAtPoint, (LocomotionAirMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00FC3B20, void, OnInitializeTask, (LocomotionAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC3C90, void, SetTempArrivalDistance, (LocomotionAirMoveBehaviour * __this, float arrivalDistance, float slowDownDistance));
IL2CPP_REGISTER_METHOD(0x00FC3CB0, void, ResetArrivalDistance, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC3CD0, void, OnEnterTask, (LocomotionAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC3E00, void, OnExitTask, (LocomotionAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC3E30, BehaviourStatus__Enum, OnExecuteTask, (LocomotionAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC4640, void, SetAnimationSpeed, (LocomotionAirMoveBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00FC4660, void, PlayAnimation, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC110, bool, ContinuePlayingMovementAnim, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FDB8, LocomotionAirMoveBehaviour_ContinuePlayingMovementAnim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC4A60, void, OnMovementStoppedPlaying, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC4AA0, void, OnTraversalSpeedChange, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionAirMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionAirMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC4B30, void, __ctor, (LocomotionAirMoveBehaviour * __this));
}
