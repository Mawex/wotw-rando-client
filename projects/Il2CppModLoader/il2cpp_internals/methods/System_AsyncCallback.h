#include <interception_macros.h>

namespace app::methods::System::AsyncCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AsyncCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::AsyncCallback * this_ptr, app::IAsyncResult * ar));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::AsyncCallback * this_ptr, app::IAsyncResult * ar, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AsyncCallback * this_ptr, app::IAsyncResult * result));
}
