using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_MessageFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (BrowserNative_MessageFunc * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (BrowserNative_MessageFunc * __this, String * message, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_MessageFunc * __this, IAsyncResult * result));
}
