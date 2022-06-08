#include <interception_macros.h>

namespace app::methods::LocomotionVolumeMoveTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (LocomotionVolumeMoveTimelineBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x009EB5F0, Vector3, get_TargetPosition, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EB610, void, set_TargetPosition, (LocomotionVolumeMoveTimelineBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0074C400, void, set_TraversalSpeed, (LocomotionVolumeMoveTimelineBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x009EB630, bool, get_HasArrivedAtTarget, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EB690, bool, IsAtPoint, (LocomotionVolumeMoveTimelineBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x009EB8B0, void, OnInitializeTask, (LocomotionVolumeMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009EBA00, void, SetTempArrivalDistance, (LocomotionVolumeMoveTimelineBehaviour * __this, float arrivalDistance, float slowDownDistance));
IL2CPP_REGISTER_METHOD(0x009EBA20, void, ResetArrivalDistance, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EBA40, BehaviourStatus__Enum, OnExecuteTask, (LocomotionVolumeMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009EC110, bool, ContinuePlayingMovementAnim, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionVolumeMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC140, void, PlayAnimation, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC3E0, void, OnMovementStoppedPlaying, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047074D0, LocomotionVolumeMoveTimelineBehaviour_OnMovementStoppedPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009EC410, void, OnEnterTask, (LocomotionVolumeMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009EC570, void, OnExitTask, (LocomotionVolumeMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009EC5E0, void, OnTraversalSpeedChange, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC690, float, get_EffectiveMinSpeed, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC6B0, float, get_EffectiveMaxSpeed, (LocomotionVolumeMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009EC6F0, void, __ctor, (LocomotionVolumeMoveTimelineBehaviour * __this));
}
