#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_getImage {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_getImage * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A160, BrowserNative_RenderData, Invoke, (app::BrowserNative_Calltype_zfb_getImage * this_ptr, int32_t id, bool force_dirty));
IL2CPP_REGISTER_METHOD(0x01C7A5B0, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_getImage * this_ptr, int32_t id, bool force_dirty, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x01C7A680, BrowserNative_RenderData, EndInvoke, (app::BrowserNative_Calltype_zfb_getImage * this_ptr, app::IAsyncResult * result));
}
