#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTexelAspect {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, app::float * pf_texel_aspect));
IL2CPP_REGISTER_METHOD(0x02D7BD50, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, app::float * pf_texel_aspect, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, app::float * pf_texel_aspect, app::IAsyncResult * result));
}
