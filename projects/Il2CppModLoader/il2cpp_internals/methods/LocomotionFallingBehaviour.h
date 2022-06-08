using namespace app;

namespace app::methods::LocomotionFallingBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC50C0, void, OnInitialize, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5160, void, OnExecute, (LocomotionFallingBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x00FC5360, void, OnUpdateBehaviour, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (LocomotionFallingBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00989BF0, BehaviourStatus__Enum, get_Status, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009C9740, void, set_Status, (LocomotionFallingBehaviour * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00FC5390, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnStatus, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC53A0, void, set_ForceReturnStatus, (LocomotionFallingBehaviour * __this, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value));
IL2CPP_REGISTER_METHOD(0x00FC53B0, BehaviourStatus__Enum, OnExecute, (LocomotionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474CB08, LocomotionFallingBehaviour_OnExecute_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC5400, void, OnInitialise, (LocomotionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04714788, LocomotionFallingBehaviour_OnInitialise__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC5450, void, OnEnter, (LocomotionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04764728, LocomotionFallingBehaviour_OnEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC54A0, void, OnExit, (LocomotionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x047324A0, LocomotionFallingBehaviour_OnExit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FC54F0, void, OnReset, (LocomotionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04791FF0, LocomotionFallingBehaviour_OnReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5540, bool, _OnExecute_b__5_0, (LocomotionFallingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04735CE0, LocomotionFallingBehaviour__OnExecute_b__5_0__MethodInfo);
}
