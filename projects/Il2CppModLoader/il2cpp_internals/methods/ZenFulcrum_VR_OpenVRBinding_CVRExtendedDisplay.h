#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::CVRExtendedDisplay {
IL2CPP_REGISTER_METHOD(0x016786F0, void, __ctor, (app::CVRExtendedDisplay * this_ptr, app::void * p_interface));
IL2CPP_REGISTER_METHOD(0x01678810, void, GetWindowBounds, (app::CVRExtendedDisplay * this_ptr, app::int32_t * pn_x, app::int32_t * pn_y, app::uint32_t * pn_width, app::uint32_t * pn_height));
IL2CPP_REGISTER_METHOD(0x01678850, void, GetEyeOutputViewport, (app::CVRExtendedDisplay * this_ptr, app::EVREye__Enum e_eye, app::uint32_t * pn_x, app::uint32_t * pn_y, app::uint32_t * pn_width, app::uint32_t * pn_height));
IL2CPP_REGISTER_METHOD(0x01678890, void, GetDXGIOutputInfo, (app::CVRExtendedDisplay * this_ptr, app::int32_t * pn_adapter_index, app::int32_t * pn_adapter_output_index));
}
