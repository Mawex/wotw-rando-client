#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_keyEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_keyEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7BDF0, void, Invoke, (BrowserNative_Calltype_zfb_keyEvent * __this, int32_t id, bool down, int32_t windowsKeyCode));
IL2CPP_REGISTER_METHOD(0x01C7C180, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_keyEvent * __this, int32_t id, bool down, int32_t windowsKeyCode, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_keyEvent * __this, IAsyncResult * result));
}
