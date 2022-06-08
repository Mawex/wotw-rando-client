using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_NavStateFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCD5D0, void, Invoke, (BrowserNative_NavStateFunc * __this, int32_t browserId, bool canGoBack, bool canGoForward, bool lodaing, void * url));
IL2CPP_REGISTER_METHOD(0x01DCDA70, IAsyncResult *, BeginInvoke, (BrowserNative_NavStateFunc * __this, int32_t browserId, bool canGoBack, bool canGoForward, bool lodaing, void * url, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_NavStateFunc * __this, IAsyncResult * result));
}
