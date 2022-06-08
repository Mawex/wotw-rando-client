using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerChangeCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_registerChangeCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_Calltype_zfb_registerChangeCallback * __this, int32_t id, BrowserNative_ChangeFunc * cb));
IL2CPP_REGISTER_METHOD(0x01DC9E50, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_registerChangeCallback * __this, int32_t id, BrowserNative_ChangeFunc * cb, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_registerChangeCallback * __this, IAsyncResult * result));
}
