#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayTexelAspect {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayTexelAspect * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7E860, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, float f_texel_aspect));
IL2CPP_REGISTER_METHOD(0x02D80D30, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, float f_texel_aspect, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTexelAspect * this_ptr, app::IAsyncResult * result));
}
