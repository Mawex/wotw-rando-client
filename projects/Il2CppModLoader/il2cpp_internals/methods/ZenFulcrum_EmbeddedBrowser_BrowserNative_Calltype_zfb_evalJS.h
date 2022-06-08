using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_evalJS {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_evalJS * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, (BrowserNative_Calltype_zfb_evalJS * __this, int32_t id, String * script, String * scriptURL));
IL2CPP_REGISTER_METHOD(0x01C79950, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_evalJS * __this, int32_t id, String * script, String * scriptURL, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_evalJS * __this, IAsyncResult * result));
}
