#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_changeLoading {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_changeLoading * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C774C0, void, Invoke, (BrowserNative_Calltype_zfb_changeLoading * __this, int32_t id, BrowserNative_LoadChange__Enum what));
IL2CPP_REGISTER_METHOD(0x01C77800, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_changeLoading * __this, int32_t id, BrowserNative_LoadChange__Enum what, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_changeLoading * __this, IAsyncResult * result));
}
