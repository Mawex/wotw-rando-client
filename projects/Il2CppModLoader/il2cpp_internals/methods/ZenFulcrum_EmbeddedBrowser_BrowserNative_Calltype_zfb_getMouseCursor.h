#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_getMouseCursor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, BrowserNative_CursorType__Enum, Invoke, (app::BrowserNative_Calltype_zfb_getMouseCursor * this_ptr, int32_t id, app::int32_t * width, app::int32_t * height));
IL2CPP_REGISTER_METHOD(0x01C7AA70, IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_getMouseCursor * this_ptr, int32_t id, app::int32_t * width, app::int32_t * height, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, BrowserNative_CursorType__Enum, EndInvoke, (app::BrowserNative_Calltype_zfb_getMouseCursor * this_ptr, app::int32_t * width, app::int32_t * height, app::IAsyncResult * result));
}
