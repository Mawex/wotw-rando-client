#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_memcpy * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C78130, void, Invoke, (BrowserNative_Calltype_zfb_memcpy * __this, void * dst, void * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x01C7C270, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_memcpy * __this, void * dst, void * src, int32_t size, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_memcpy * __this, IAsyncResult * result));
}
