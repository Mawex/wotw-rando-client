using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_ForwardJSCallFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCD100, void, Invoke, (BrowserNative_ForwardJSCallFunc * __this, int32_t browserId, int32_t callbackId, String * data, int32_t size));
IL2CPP_REGISTER_METHOD(0x01DCD4D0, IAsyncResult *, BeginInvoke, (BrowserNative_ForwardJSCallFunc * __this, int32_t browserId, int32_t callbackId, String * data, int32_t size, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_ForwardJSCallFunc * __this, IAsyncResult * result));
}
