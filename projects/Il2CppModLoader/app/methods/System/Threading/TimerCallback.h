#pragma once
#include <interception_macros.h>

namespace app::methods::System::Threading::TimerCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TimerCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::TimerCallback * this_ptr, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::TimerCallback * this_ptr, app::Object * state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::TimerCallback * this_ptr, app::IAsyncResult * result))
}
