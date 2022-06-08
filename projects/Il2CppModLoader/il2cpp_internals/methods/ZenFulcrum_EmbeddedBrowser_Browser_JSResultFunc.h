using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Browser_JSResultFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Browser_JSResultFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (Browser_JSResultFunc * __this, JSONNode * value, bool isError));
IL2CPP_REGISTER_METHOD(0x01C717F0, IAsyncResult *, BeginInvoke, (Browser_JSResultFunc * __this, JSONNode * value, bool isError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Browser_JSResultFunc * __this, IAsyncResult * result));
}
