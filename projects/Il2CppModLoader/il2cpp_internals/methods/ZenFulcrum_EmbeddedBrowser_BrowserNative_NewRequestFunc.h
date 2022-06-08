using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_NewRequestFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_NewRequestFunc * __this, int32_t requestId, String * url));
IL2CPP_REGISTER_METHOD(0x01DCDB90, IAsyncResult *, BeginInvoke, (BrowserNative_NewRequestFunc * __this, int32_t requestId, String * url, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_NewRequestFunc * __this, IAsyncResult * result));
}
