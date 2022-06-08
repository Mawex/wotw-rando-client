#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerPopupCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_registerPopupCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCA330, void, Invoke, (BrowserNative_Calltype_zfb_registerPopupCallback * __this, int32_t id, BrowserNative_NewWindowAction__Enum windowAction, BrowserNative_ZFBSettings baseSettings, BrowserNative_NewWindowFunc * cb));
IL2CPP_REGISTER_METHOD(0x01DCA8B0, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_registerPopupCallback * __this, int32_t id, BrowserNative_NewWindowAction__Enum windowAction, BrowserNative_ZFBSettings baseSettings, BrowserNative_NewWindowFunc * cb, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_registerPopupCallback * __this, IAsyncResult * result));
}
