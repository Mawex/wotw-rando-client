#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_showDevTools {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCBA90, void, Invoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, int32_t id, bool show));
IL2CPP_REGISTER_METHOD(0x01DCC4A0, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, int32_t id, bool show, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_showDevTools * this_ptr, app::IAsyncResult * result));
}
