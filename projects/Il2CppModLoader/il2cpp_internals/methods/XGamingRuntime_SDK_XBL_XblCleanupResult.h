#include <interception_macros.h>

namespace app::methods::XGamingRuntime::SDK_XBL_XblCleanupResult {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SDK_XBL_XblCleanupResult * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (SDK_XBL_XblCleanupResult * __this, int32_t hresult));
IL2CPP_REGISTER_METHOD(0x030BAB70, IAsyncResult *, BeginInvoke, (SDK_XBL_XblCleanupResult * __this, int32_t hresult, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SDK_XBL_XblCleanupResult * __this, IAsyncResult * result));
}
