#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XGameSaveInitializeProviderCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XGameSaveInitializeProviderCompleted * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (XGameSaveInitializeProviderCompleted * __this, int32_t hresult, XGameSaveProviderHandle * gameSaveProviderHandle));
IL2CPP_REGISTER_METHOD(0x030BAF80, IAsyncResult *, BeginInvoke, (XGameSaveInitializeProviderCompleted * __this, int32_t hresult, XGameSaveProviderHandle * gameSaveProviderHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XGameSaveInitializeProviderCompleted * __this, IAsyncResult * result));
}
