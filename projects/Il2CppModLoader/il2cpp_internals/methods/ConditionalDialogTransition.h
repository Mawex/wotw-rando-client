#include <interception_macros.h>

namespace app::methods::ConditionalDialogTransition {
IL2CPP_REGISTER_METHOD(0x011E4120, IDialogNode *, get_TransitionDestination, (ConditionalDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, (ConditionalDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, (ConditionalDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x011E41E0, bool, Validate, (ConditionalDialogTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ConditionalDialogTransition * __this));
}
