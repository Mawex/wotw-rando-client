using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_sendRequestData {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_sendRequestData * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C79170, void, Invoke, (BrowserNative_Calltype_zfb_sendRequestData * __this, int32_t requestId, void * data, int32_t dataSize));
IL2CPP_REGISTER_METHOD(0x01DCB150, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_sendRequestData * __this, int32_t requestId, void * data, int32_t dataSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_sendRequestData * __this, IAsyncResult * result));
}
