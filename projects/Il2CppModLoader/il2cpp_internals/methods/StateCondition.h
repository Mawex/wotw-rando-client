using namespace app;

namespace app::methods::StateCondition {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x009B4650, IUberState__Array *, get_AffectingUberStates, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_AllTargets, (StateCondition * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x009B48C0, void, OnEnable, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x009B4960, void, OnDisable, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x009B4A00, void, Awake, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x009B4BA0, void, OnDestroy, (StateCondition * __this));
IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnRestoreCheckpoint, (StateCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x04743620, StateCondition_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B4D40, bool, Validate, (StateCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B4E10, void, Apply, (StateCondition * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x009B5000, void, __ctor, (StateCondition * __this));
}
