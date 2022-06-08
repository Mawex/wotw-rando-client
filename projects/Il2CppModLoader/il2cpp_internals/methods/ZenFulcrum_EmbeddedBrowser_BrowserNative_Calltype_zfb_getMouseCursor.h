using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCursor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_getMouseCursor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, BrowserNative_CursorType__Enum, Invoke, (BrowserNative_Calltype_zfb_getMouseCursor * __this, int32_t id, int32_t * width, int32_t * height));
IL2CPP_REGISTER_METHOD(0x01C7AA70, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_getMouseCursor * __this, int32_t id, int32_t * width, int32_t * height, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, BrowserNative_CursorType__Enum, EndInvoke, (BrowserNative_Calltype_zfb_getMouseCursor * __this, int32_t * width, int32_t * height, IAsyncResult * result));
}
