using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_WindowCallbackFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_WindowCallbackFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_WindowCallbackFunc * __this, int32_t windowId, void * data));
IL2CPP_REGISTER_METHOD(0x01DCE3A0, IAsyncResult *, BeginInvoke, (BrowserNative_WindowCallbackFunc * __this, int32_t windowId, void * data, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_WindowCallbackFunc * __this, IAsyncResult * result));
}
