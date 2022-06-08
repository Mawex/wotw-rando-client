using namespace app;

namespace app::methods::JumpBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (JumpBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_TraversalSpeed, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_TraversalSpeed, (JumpBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0064D980, void, OnExecute, (JumpBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x0064DE50, void, OnUpdateBehaviour, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064DEE0, void, OnTransitionInStopped, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477C4D8, JumpBehaviour_OnTransitionInStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0064E140, void, __ctor, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064E150, bool, _OnTransitionInStopped_b__21_0, (JumpBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BEB8, JumpBehaviour__OnTransitionInStopped_b__21_0__MethodInfo);
}
