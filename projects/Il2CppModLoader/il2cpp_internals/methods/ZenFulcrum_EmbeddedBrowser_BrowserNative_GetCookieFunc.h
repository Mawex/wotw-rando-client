using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_GetCookieFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (BrowserNative_GetCookieFunc * __this, BrowserNative_NativeCookie * cookie));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (BrowserNative_GetCookieFunc * __this, BrowserNative_NativeCookie * cookie, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_GetCookieFunc * __this, IAsyncResult * result));
}
