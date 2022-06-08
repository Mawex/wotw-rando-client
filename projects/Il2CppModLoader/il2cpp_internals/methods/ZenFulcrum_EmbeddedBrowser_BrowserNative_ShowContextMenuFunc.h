#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ShowContextMenuFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_ShowContextMenuFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCDE10, void, Invoke, (BrowserNative_ShowContextMenuFunc * __this, int32_t browserId, String * menuJSON, int32_t x, int32_t y, BrowserNative_ContextMenuOrigin__Enum origin));
IL2CPP_REGISTER_METHOD(0x01DCE280, IAsyncResult *, BeginInvoke, (BrowserNative_ShowContextMenuFunc * __this, int32_t browserId, String * menuJSON, int32_t x, int32_t y, BrowserNative_ContextMenuOrigin__Enum origin, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_ShowContextMenuFunc * __this, IAsyncResult * result));
}
