#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XGameSaveSubmitUpdateCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XGameSaveSubmitUpdateCompleted * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (XGameSaveSubmitUpdateCompleted * __this, int32_t hresult));
IL2CPP_REGISTER_METHOD(0x030BB290, IAsyncResult *, BeginInvoke, (XGameSaveSubmitUpdateCompleted * __this, int32_t hresult, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XGameSaveSubmitUpdateCompleted * __this, IAsyncResult * result));
}
