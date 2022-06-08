#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendDialogResults {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_sendDialogResults * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCAC40, void, Invoke, (BrowserNative_Calltype_zfb_sendDialogResults * __this, int32_t id, bool affirmed, String * text1, String * text2));
IL2CPP_REGISTER_METHOD(0x01DCB060, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_sendDialogResults * __this, int32_t id, bool affirmed, String * text1, String * text2, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_sendDialogResults * __this, IAsyncResult * result));
}
