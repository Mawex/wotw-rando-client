#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayMouseScale {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayMouseScale * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayMouseScale * this_ptr, uint64_t ul_overlay_handle, app::HmdVector2_t * pvec_mouse_scale))
    IL2CPP_REGISTER_METHOD(0x02D7B8B0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayMouseScale * this_ptr, uint64_t ul_overlay_handle, app::HmdVector2_t * pvec_mouse_scale, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayMouseScale * this_ptr, app::HmdVector2_t * pvec_mouse_scale, app::IAsyncResult * result))
}
