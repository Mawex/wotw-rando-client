#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XGameSaveContainerHandle {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XGameSaveContainerHandle * __this, XGameSaveContainerHandle_1 interopHandle));
IL2CPP_REGISTER_METHOD(0x030BAE10, int32_t, WrapInteropHandleAndReturnHResult, (int32_t hresult, XGameSaveContainerHandle_1 interopHandle, XGameSaveContainerHandle * * userHandle));
IL2CPP_REGISTER_METHOD(0x002FA280, XGameSaveContainerHandle_1, get_InteropHandle, (XGameSaveContainerHandle * __this));
}
