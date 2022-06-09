#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XUserGetTokenAndSignatureUtf16Result {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data * token_and_signature));
IL2CPP_REGISTER_METHOD(0x030BB730, IAsyncResult *, BeginInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data * token_and_signature, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::IAsyncResult * result));
}
