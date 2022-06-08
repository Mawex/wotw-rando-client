#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getMouseCustomCursor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_getMouseCustomCursor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7AB70, void, Invoke, (BrowserNative_Calltype_zfb_getMouseCustomCursor * __this, int32_t id, void * buffer, int32_t width, int32_t height, int32_t * hotX, int32_t * hotY));
IL2CPP_REGISTER_METHOD(0x01C7B070, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_getMouseCustomCursor * __this, int32_t id, void * buffer, int32_t width, int32_t height, int32_t * hotX, int32_t * hotY, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (BrowserNative_Calltype_zfb_getMouseCustomCursor * __this, int32_t * hotX, int32_t * hotY, IAsyncResult * result));
}
