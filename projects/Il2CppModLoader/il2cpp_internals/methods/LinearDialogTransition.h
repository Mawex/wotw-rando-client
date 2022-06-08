#include <interception_macros.h>

namespace app::methods::LinearDialogTransition {
IL2CPP_REGISTER_METHOD(0x00FA74F0, IDialogNode *, get_TransitionDestination, (LinearDialogTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, (LinearDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, (LinearDialogTransition * __this, IDialogNode * owner));
IL2CPP_REGISTER_METHOD(0x00FA75B0, bool, Validate, (LinearDialogTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LinearDialogTransition * __this));
}
