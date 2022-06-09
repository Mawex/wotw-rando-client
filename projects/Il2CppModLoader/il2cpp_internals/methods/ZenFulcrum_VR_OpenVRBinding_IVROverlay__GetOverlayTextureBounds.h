#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTextureBounds {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, uint64_t ul_overlay_handle, app::VRTextureBounds_t * p_overlay_texture_bounds));
IL2CPP_REGISTER_METHOD(0x02D7C800, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, uint64_t ul_overlay_handle, app::VRTextureBounds_t * p_overlay_texture_bounds, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, app::VRTextureBounds_t * p_overlay_texture_bounds, app::IAsyncResult * result));
}
