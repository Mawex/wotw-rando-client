#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7AB70, void, Invoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, int32_t id, app::void * buffer, int32_t width, int32_t height, app::int32_t * hot_x, app::int32_t * hot_y));
IL2CPP_REGISTER_METHOD(0x01C7B070, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, int32_t id, app::void * buffer, int32_t width, int32_t height, app::int32_t * hot_x, app::int32_t * hot_y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::BrowserNative_Calltype_zfb_getMouseCustomCursor * this_ptr, app::int32_t * hot_x, app::int32_t * hot_y, app::IAsyncResult * result));
}
