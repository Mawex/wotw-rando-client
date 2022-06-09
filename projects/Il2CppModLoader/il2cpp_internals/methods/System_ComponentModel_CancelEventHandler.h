#include <interception_macros.h>

namespace app::methods::System_ComponentModel::CancelEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CancelEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::CancelEventHandler * this_ptr, app::Object * sender, app::CancelEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::CancelEventHandler * this_ptr, app::Object * sender, app::CancelEventArgs * e, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CancelEventHandler * this_ptr, app::IAsyncResult * result));
}
