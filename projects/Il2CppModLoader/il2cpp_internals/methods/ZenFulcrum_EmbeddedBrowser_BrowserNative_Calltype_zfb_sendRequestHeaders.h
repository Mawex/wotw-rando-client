#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestHeaders {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_sendRequestHeaders * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (BrowserNative_Calltype_zfb_sendRequestHeaders * __this, int32_t requestId, int32_t responseLength, String * headersJSON));
IL2CPP_REGISTER_METHOD(0x01DCB5C0, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_sendRequestHeaders * __this, int32_t requestId, int32_t responseLength, String * headersJSON, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_sendRequestHeaders * __this, IAsyncResult * result));
}
