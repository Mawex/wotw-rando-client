#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetProjectionRaw {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetProjectionRaw * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEDA90, void, Invoke, (app::IVRSystem_GetProjectionRaw * this_ptr, app::EVREye__Enum e_eye, app::float * pf_left, app::float * pf_right, app::float * pf_top, app::float * pf_bottom));
IL2CPP_REGISTER_METHOD(0x02CEDF20, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetProjectionRaw * this_ptr, app::EVREye__Enum e_eye, app::float * pf_left, app::float * pf_right, app::float * pf_top, app::float * pf_bottom, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (app::IVRSystem_GetProjectionRaw * this_ptr, app::float * pf_left, app::float * pf_right, app::float * pf_top, app::float * pf_bottom, app::IAsyncResult * result));
}
