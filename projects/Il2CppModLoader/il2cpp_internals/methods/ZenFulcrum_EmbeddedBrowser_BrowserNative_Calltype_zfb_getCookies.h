#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_getCookies * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_Calltype_zfb_getCookies * __this, int32_t id, BrowserNative_GetCookieFunc * cb));
IL2CPP_REGISTER_METHOD(0x01C7A090, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_getCookies * __this, int32_t id, BrowserNative_GetCookieFunc * cb, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_getCookies * __this, IAsyncResult * result));
}
