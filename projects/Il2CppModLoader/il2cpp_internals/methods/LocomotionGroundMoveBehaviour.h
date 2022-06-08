using namespace app;

namespace app::methods::LocomotionGroundMoveBehaviour {
IL2CPP_REGISTER_METHOD(0x00A1FBC0, Vector3, get_TargetPosition, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_TargetPosition, (LocomotionGroundMoveBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_TraversalSpeed, (LocomotionGroundMoveBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FC5580, float, get_EffectiveMinSpeed, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC55A0, float, get_EffectiveMaxSpeed, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5620, bool, get_IsAnimationPlaying, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5640, bool, get_HasArrivedAtTarget, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC56A0, bool, get_CanReachTarget, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5760, bool, get_IsFacing, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5930, bool, IsAtPoint, (LocomotionGroundMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00FC5A70, Vector2, DeltaToPoint, (LocomotionGroundMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00FC5BB0, void, OnInitializeTask, (LocomotionGroundMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC5D00, void, SetTempArrivalDistance, (LocomotionGroundMoveBehaviour * __this, float arrivalDistance, float slowDownDistance));
IL2CPP_REGISTER_METHOD(0x00FC5D20, void, ResetArrivalDistance, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5D40, void, OnEnterTask, (LocomotionGroundMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC5E80, void, OnExitTask, (LocomotionGroundMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC5F80, void, PlayAnimationIfNotPlaying, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6000, BehaviourStatus__Enum, OnExecuteTask, (LocomotionGroundMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC6440, void, SetAnimationSpeed, (LocomotionGroundMoveBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00FC6460, void, PlayAnimation, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6830, bool, ContinuePlayingMovementAnim, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04717400, LocomotionGroundMoveBehaviour_ContinuePlayingMovementAnim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC6860, void, OnMovementStoppedPlaying, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC68A0, void, OnTraversalSpeedChange, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6940, void, OnIsMovingBackwardsChanged, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionGroundMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionGroundMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00842340, void, __ctor, (LocomotionGroundMoveBehaviour * __this));
}
