#include <interception_macros.h>

namespace app::methods::XGamingRuntime_Interop::XGameSaveBlobInfoCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XGameSaveBlobInfoCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x030B3590, NativeBool, Invoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::XGameSaveBlobInfo info, app::void * context));
IL2CPP_REGISTER_METHOD(0x030B39F0, IAsyncResult *, BeginInvoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::XGameSaveBlobInfo info, app::void * context, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, NativeBool, EndInvoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::IAsyncResult * result));
}
