#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_ReadyFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (BrowserNative_ReadyFunc * __this, int32_t browserId));
IL2CPP_REGISTER_METHOD(0x01DCDD50, IAsyncResult *, BeginInvoke, (BrowserNative_ReadyFunc * __this, int32_t browserId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_ReadyFunc * __this, IAsyncResult * result));
}
