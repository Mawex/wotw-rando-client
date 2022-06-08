#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_setReadyCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_Calltype_zfb_setReadyCallback * __this, int32_t id, BrowserNative_ReadyFunc * cb));
IL2CPP_REGISTER_METHOD(0x01DCBF80, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_setReadyCallback * __this, int32_t id, BrowserNative_ReadyFunc * cb, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_setReadyCallback * __this, IAsyncResult * result));
}
