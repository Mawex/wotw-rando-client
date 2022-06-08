using namespace app;

namespace app::methods::Moon::InteractionGraph::ButtonInteractionTransition {
IL2CPP_REGISTER_METHOD(0x003FC7F0, InteractionBidingButton__Enum, get_Button, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, InteractionBinding *, get_InteractionBinding, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Action_1_IContext_ *, get_OnActivated, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OnActivated, (ButtonInteractionTransition * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Action_1_IContext_ *, get_OnFinished, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnFinished, (ButtonInteractionTransition * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x0198B150, IInteractionNode *, get_TransitionDestination, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x0198B210, IMessageProvider *, get_ResolvedMessage, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x0198B2A0, void, OnOwnerEnter, (ButtonInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x0198B560, void, OnOwnerExit, (ButtonInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x0198B5F0, void, OnButtonPressed, (ButtonInteractionTransition * __this));
IL2CPP_REGISTER_METHODINFO(0x0470D388, ButtonInteractionTransition_OnButtonPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, Validate, (ButtonInteractionTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0198B690, void, __ctor, (ButtonInteractionTransition * __this));
}
