#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_NewWindowFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (BrowserNative_NewWindowFunc * __this, int32_t creatorBrowserId, int32_t newBrowserId, void * initialURL));
IL2CPP_REGISTER_METHOD(0x01DCDC60, IAsyncResult *, BeginInvoke, (BrowserNative_NewWindowFunc * __this, int32_t creatorBrowserId, int32_t newBrowserId, void * initialURL, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_NewWindowFunc * __this, IAsyncResult * result));
}
