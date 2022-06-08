#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XUserChangeEventCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XUserChangeEventCallback_1 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (XUserChangeEventCallback_1 * __this, void * context, XUserLocalId userLocalId, XUserChangeEvent__Enum eventType));
IL2CPP_REGISTER_METHOD(0x030B3AD0, IAsyncResult *, BeginInvoke, (XUserChangeEventCallback_1 * __this, void * context, XUserLocalId userLocalId, XUserChangeEvent__Enum eventType, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XUserChangeEventCallback_1 * __this, IAsyncResult * result));
}
