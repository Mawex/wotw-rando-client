#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_characterEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C778D0, void, Invoke, (BrowserNative_Calltype_zfb_characterEvent * __this, int32_t id, int32_t character, int32_t windowsKeyCode));
IL2CPP_REGISTER_METHOD(0x01C77C50, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_characterEvent * __this, int32_t id, int32_t character, int32_t windowsKeyCode, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_characterEvent * __this, IAsyncResult * result));
}
