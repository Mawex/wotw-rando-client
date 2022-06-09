#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XUserHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XUserHandle * this_ptr, app::XUserHandle_1 interop_handle));
    IL2CPP_REGISTER_METHOD(0x030BB800, int32_t, WrapAndReturnHResult, (int32_t hresult, app::XUserHandle_1 interop_handle, app::XUserHandle * * handle));
    IL2CPP_REGISTER_METHOD(0x0063D180, void, ClearInteropHandle, (app::XUserHandle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030BB970, bool, Equals, (app::XUserHandle * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::XUserHandle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030BBA50, bool, operator___, (app::XUserHandle * handle1, app::XUserHandle * handle2));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XUserHandle_1, get_InteropHandle, (app::XUserHandle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_InteropHandle, (app::XUserHandle * this_ptr, app::XUserHandle_1 value));
}
