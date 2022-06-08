using namespace app;

namespace app::methods::Moon::Wwise::UberStateWwiseStateManager {
IL2CPP_REGISTER_METHOD(0x0270DF40, void, Awake, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x0270E000, void, OnDestroy, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x0270E0A0, void, Start, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x0270E3E0, void, Apply, (UberStateWwiseStateManager * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IUberState__Array *, get_AffectingUberStates, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_AffectingUberStates, (UberStateWwiseStateManager * __this, IUberState__Array * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (UberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x0270E410, void, __ctor, (UberStateWwiseStateManager * __this));
}
