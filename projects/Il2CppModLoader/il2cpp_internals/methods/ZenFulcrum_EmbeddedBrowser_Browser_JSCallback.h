using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Browser_JSCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (Browser_JSCallback * __this, JSONNode * args));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Browser_JSCallback * __this, JSONNode * args, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Browser_JSCallback * __this, IAsyncResult * result));
}
