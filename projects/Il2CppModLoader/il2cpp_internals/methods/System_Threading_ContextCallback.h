#include <interception_macros.h>

namespace app::methods::System::Threading::ContextCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ContextCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (ContextCallback * __this, Object * state));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (ContextCallback * __this, Object * state, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ContextCallback * __this, IAsyncResult * result));
}
