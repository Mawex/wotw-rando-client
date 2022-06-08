using namespace app;

namespace app::methods::UberStateBoolCondition {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (UberStateBoolCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B020, IUberState__Array *, get_AffectingUberStates, (UberStateBoolCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (UberStateBoolCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_AllTargets, (UberStateBoolCondition * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x0128B120, void, OnEnable, (UberStateBoolCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B1C0, void, OnDisable, (UberStateBoolCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B260, bool, Validate, (UberStateBoolCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0128B340, void, Apply, (UberStateBoolCondition * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0128B370, void, __ctor, (UberStateBoolCondition * __this));
}
