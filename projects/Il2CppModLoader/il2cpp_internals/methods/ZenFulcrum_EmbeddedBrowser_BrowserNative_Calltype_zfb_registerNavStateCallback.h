#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerNavStateCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_registerNavStateCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (BrowserNative_Calltype_zfb_registerNavStateCallback * __this, int32_t id, BrowserNative_NavStateFunc * callback));
IL2CPP_REGISTER_METHOD(0x01DCA260, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_registerNavStateCallback * __this, int32_t id, BrowserNative_NavStateFunc * callback, AsyncCallback * __callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_registerNavStateCallback * __this, IAsyncResult * result));
}
