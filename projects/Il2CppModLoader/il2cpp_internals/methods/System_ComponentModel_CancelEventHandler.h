#include <interception_macros.h>

namespace app::methods::System::ComponentModel::CancelEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CancelEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (CancelEventHandler * __this, Object * sender, CancelEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (CancelEventHandler * __this, Object * sender, CancelEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CancelEventHandler * __this, IAsyncResult * result));
}
