#include <interception_macros.h>

namespace app::methods::DelayedAction_Action {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DelayedAction_Action * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (DelayedAction_Action * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (DelayedAction_Action * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DelayedAction_Action * __this, IAsyncResult * result));
}
