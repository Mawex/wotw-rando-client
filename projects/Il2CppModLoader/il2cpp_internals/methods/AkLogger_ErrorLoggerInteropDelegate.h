#include <interception_macros.h>

namespace app::methods::AkLogger_ErrorLoggerInteropDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkLogger_ErrorLoggerInteropDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (AkLogger_ErrorLoggerInteropDelegate * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (AkLogger_ErrorLoggerInteropDelegate * __this, String * message, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkLogger_ErrorLoggerInteropDelegate * __this, IAsyncResult * result));
}
