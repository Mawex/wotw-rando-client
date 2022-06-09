#include <interception_macros.h>

namespace app::methods::RootMotion::Warning_Logger {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Warning_Logger * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Warning_Logger * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::Warning_Logger * this_ptr, app::String * message, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Warning_Logger * this_ptr, app::IAsyncResult * result));
}
