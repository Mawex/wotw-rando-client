#include <interception_macros.h>

namespace app::methods::System::ComponentModel::RefreshEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::RefreshEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::RefreshEventHandler * this_ptr, app::RefreshEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::RefreshEventHandler * this_ptr, app::RefreshEventArgs * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::RefreshEventHandler * this_ptr, app::IAsyncResult * result));
}
