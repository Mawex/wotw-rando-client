#include <interception_macros.h>

namespace app::methods::System::Threading::SendOrPostCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SendOrPostCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (SendOrPostCallback * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04765EE0, SendOrPostCallback_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (SendOrPostCallback * __this, Object * state, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SendOrPostCallback * __this, IAsyncResult * result));
}
