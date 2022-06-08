using namespace app;

namespace app::methods::DialogNode {
IL2CPP_REGISTER_METHOD(0x00B900E0, IDialogActor *, get_Actor, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, MessageProvider *, get_MessageProvider, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, Action_1_IContext_ *, get_OnActivated, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_OnActivated, (DialogNode * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC60, Action_1_IContext_ *, get_OnFinished, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_OnFinished, (DialogNode * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x00B901A0, List_1_IDialogTransition_ *, get_Transitions, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B903E0, List_1_IDialogDecorator_ *, get_Decorators, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B90620, bool, get_MessageActiveAndEnable, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B90840, bool, get_HasInteractibleTransitions, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, InteractionSettings *, get_InteractionSettings, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B90840, bool, get_HideUiHidables, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B900E0, IDialogActor *, get_ResolvedActor, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B90860, void, Initialize, (DialogNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B908F0, void, OnEnter, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B911D0, void, OnExit, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, GetStateId, (DialogNode * __this));
IL2CPP_REGISTER_METHOD(0x00B91450, void, __ctor, (DialogNode * __this));
}
