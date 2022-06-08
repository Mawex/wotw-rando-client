#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseButton {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_mouseButton * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7C360, void, Invoke, (BrowserNative_Calltype_zfb_mouseButton * __this, int32_t id, BrowserNative_MouseButton__Enum button, bool down, int32_t clickCount));
IL2CPP_REGISTER_METHOD(0x01C7C740, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_mouseButton * __this, int32_t id, BrowserNative_MouseButton__Enum button, bool down, int32_t clickCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_mouseButton * __this, IAsyncResult * result));
}
