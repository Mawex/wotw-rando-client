#pragma once
#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureBounds {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, uint64_t ul_overlay_handle, app::VRTextureBounds_t * p_overlay_texture_bounds))
    IL2CPP_REGISTER_METHOD(0x02D7C800, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, uint64_t ul_overlay_handle, app::VRTextureBounds_t * p_overlay_texture_bounds, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTextureBounds * this_ptr, app::VRTextureBounds_t * p_overlay_texture_bounds, app::IAsyncResult * result))
}
