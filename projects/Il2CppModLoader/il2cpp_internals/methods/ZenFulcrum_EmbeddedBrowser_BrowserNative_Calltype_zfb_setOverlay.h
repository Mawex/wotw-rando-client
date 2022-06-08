#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_setOverlay * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C774C0, void, Invoke, (BrowserNative_Calltype_zfb_setOverlay * __this, int32_t browserId, int32_t overlayBrowserId));
IL2CPP_REGISTER_METHOD(0x01DCBEB0, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_setOverlay * __this, int32_t browserId, int32_t overlayBrowserId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_setOverlay * __this, IAsyncResult * result));
}
