#include <interception_macros.h>

namespace app::methods::System::Threading::ParameterizedThreadStart {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ParameterizedThreadStart * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::ParameterizedThreadStart * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::ParameterizedThreadStart * this_ptr, app::Object * obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ParameterizedThreadStart * this_ptr, app::IAsyncResult * result));
}
