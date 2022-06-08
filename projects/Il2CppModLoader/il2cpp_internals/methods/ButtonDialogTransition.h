#include <interception_macros.h>

namespace app::methods::ButtonDialogTransition {
IL2CPP_REGISTER_METHOD(0x003FC7F0, InteractionBidingButton__Enum, get_Button, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, InteractionBinding *, get_InteractionBinding, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Action_1_IContext_ *, get_OnActivated, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_OnActivated, (ButtonDialogTransition * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Action_1_IContext_ *, get_OnFinished, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OnFinished, (ButtonDialogTransition * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x0081E230, void, OnOwnerEnter, (ButtonDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x0081E470, void, OnOwnerExit, (ButtonDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x0081E500, void, OnButtonPressed, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F8F8, ButtonDialogTransition_OnButtonPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081E5A0, IDialogNode *, get_TransitionDestination, (ButtonDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, Validate, (ButtonDialogTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ButtonDialogTransition * __this));
}
