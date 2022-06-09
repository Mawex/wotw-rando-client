#include <interception_macros.h>

namespace app::methods::System::Action_1_TimeSpan_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_TimeSpan_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::Action_1_TimeSpan_ * this_ptr, app::TimeSpan obj));
IL2CPP_REGISTER_METHOD(0x02C07F00, IAsyncResult *, BeginInvoke, (app::Action_1_TimeSpan_ * this_ptr, app::TimeSpan obj, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_TimeSpan_ * this_ptr, app::IAsyncResult * result));
}
