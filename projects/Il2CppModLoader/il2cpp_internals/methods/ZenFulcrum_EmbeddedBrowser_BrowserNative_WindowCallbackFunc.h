#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_WindowCallbackFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_WindowCallbackFunc * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, int32_t window_id, app::void * data));
IL2CPP_REGISTER_METHOD(0x01DCE3A0, IAsyncResult *, BeginInvoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, int32_t window_id, app::void * data, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, app::IAsyncResult * result));
}
