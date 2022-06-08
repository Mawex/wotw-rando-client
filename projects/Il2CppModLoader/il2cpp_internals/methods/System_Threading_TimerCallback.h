#include <interception_macros.h>

namespace app::methods::System::Threading::TimerCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (TimerCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (TimerCallback * __this, Object * state));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (TimerCallback * __this, Object * state, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (TimerCallback * __this, IAsyncResult * result));
}
