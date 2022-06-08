#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XGameSaveBlobInfoCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XGameSaveBlobInfoCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x030B3590, NativeBool, Invoke, (XGameSaveBlobInfoCallback * __this, XGameSaveBlobInfo info, void * context));
IL2CPP_REGISTER_METHOD(0x030B39F0, IAsyncResult *, BeginInvoke, (XGameSaveBlobInfoCallback * __this, XGameSaveBlobInfo info, void * context, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, NativeBool, EndInvoke, (XGameSaveBlobInfoCallback * __this, IAsyncResult * result));
}
