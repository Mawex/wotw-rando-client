#include <interception_macros.h>

namespace app::methods::LocomotionMoveBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (LocomotionMoveBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00FC7B10, float, get_TraversalSpeed, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_TraversalSpeed, (LocomotionMoveBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FC7B30, bool, get_HasArrivedAtTarget, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC7CA0, bool, IsAtPoint, (LocomotionMoveBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00FC7E30, void, OnInitialize, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC7ED0, void, OnExecute, (LocomotionMoveBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x00FC80E0, void, OnEndBehaviour, (LocomotionMoveBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00FC8290, void, OnUpdateBehaviour, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC8840, void, SetAnimationSpeed, (LocomotionMoveBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00FC8860, void, PlayAnimation, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC8C10, bool, ContinuePlayingMovementAnim, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474BE50, LocomotionMoveBehaviour_ContinuePlayingMovementAnim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8C30, void, OnMovementStoppedPlaying, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047668B8, LocomotionMoveBehaviour_OnMovementStoppedPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8E00, void, OnTraversalSpeedChange, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC8E20, void, OnProcessRootMotion, (LocomotionMoveBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0476D958, LocomotionMoveBehaviour_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00855600, BehaviourStatus__Enum, get_Status, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00A15650, void, set_Status, (LocomotionMoveBehaviour * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBD00, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnStatus, (LocomotionMoveBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_ForceReturnStatus, (LocomotionMoveBehaviour * __this, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value));
IL2CPP_REGISTER_METHOD(0x00FC8E70, BehaviourStatus__Enum, OnExecute, (LocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04725628, LocomotionMoveBehaviour_OnExecute_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8EC0, void, OnInitialise, (LocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04717050, LocomotionMoveBehaviour_OnInitialise__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8F10, void, OnEnter, (LocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x047934A0, LocomotionMoveBehaviour_OnEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8F60, void, OnExit, (LocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0476DA78, LocomotionMoveBehaviour_OnExit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC8FB0, void, OnReset, (LocomotionMoveBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0472C410, LocomotionMoveBehaviour_OnReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC9000, void, __ctor, (LocomotionMoveBehaviour * __this));
}
