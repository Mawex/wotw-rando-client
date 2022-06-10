#pragma once
#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayWidthInMeters {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayWidthInMeters * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D7E860, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, float f_width_in_meters))
    IL2CPP_REGISTER_METHOD(0x02D81450, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, float f_width_in_meters, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayWidthInMeters * this_ptr, app::IAsyncResult * result))
}
