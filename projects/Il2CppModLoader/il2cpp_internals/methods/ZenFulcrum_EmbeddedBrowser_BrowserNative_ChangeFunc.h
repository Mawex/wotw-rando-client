using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_ChangeFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (BrowserNative_ChangeFunc * __this, int32_t browserId, BrowserNative_ChangeType__Enum changeType, String * arg1));
IL2CPP_REGISTER_METHOD(0x01DCC570, IAsyncResult *, BeginInvoke, (BrowserNative_ChangeFunc * __this, int32_t browserId, BrowserNative_ChangeType__Enum changeType, String * arg1, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_ChangeFunc * __this, IAsyncResult * result));
}
