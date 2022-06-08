#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_goToURL * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7B2A0, void, Invoke, (BrowserNative_Calltype_zfb_goToURL * __this, int32_t id, String * url, bool force));
IL2CPP_REGISTER_METHOD(0x01C7B630, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_goToURL * __this, int32_t id, String * url, bool force, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_goToURL * __this, IAsyncResult * result));
}
