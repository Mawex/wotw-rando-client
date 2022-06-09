#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRExtendedDisplay__GetEyeOutputViewport {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEDA90, void, Invoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::EVREye__Enum e_eye, app::uint32_t * pn_x, app::uint32_t * pn_y, app::uint32_t * pn_width, app::uint32_t * pn_height));
IL2CPP_REGISTER_METHOD(0x02D78340, IAsyncResult *, BeginInvoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::EVREye__Enum e_eye, app::uint32_t * pn_x, app::uint32_t * pn_y, app::uint32_t * pn_width, app::uint32_t * pn_height, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::uint32_t * pn_x, app::uint32_t * pn_y, app::uint32_t * pn_width, app::uint32_t * pn_height, app::IAsyncResult * result));
}
