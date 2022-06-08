#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XUserHandle {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XUserHandle * __this, XUserHandle_1 interopHandle));
IL2CPP_REGISTER_METHOD(0x030BB800, int32_t, WrapAndReturnHResult, (int32_t hresult, XUserHandle_1 interopHandle, XUserHandle * * handle));
IL2CPP_REGISTER_METHOD(0x0063D180, void, ClearInteropHandle, (XUserHandle * __this));
IL2CPP_REGISTER_METHOD(0x030BB970, bool, Equals, (XUserHandle * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (XUserHandle * __this));
IL2CPP_REGISTER_METHOD(0x030BBA50, bool, operator___, (XUserHandle * handle1, XUserHandle * handle2));
IL2CPP_REGISTER_METHOD(0x002FA280, XUserHandle_1, get_InteropHandle, (XUserHandle * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_InteropHandle, (XUserHandle * __this, XUserHandle_1 value));
}
