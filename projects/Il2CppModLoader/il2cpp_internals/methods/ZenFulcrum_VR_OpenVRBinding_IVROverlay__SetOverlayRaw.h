#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayRaw {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayRaw * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D80500, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayRaw * this_ptr, uint64_t ul_overlay_handle, app::void * pv_buffer, uint32_t un_width, uint32_t un_height, uint32_t un_depth));
IL2CPP_REGISTER_METHOD(0x02D80980, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayRaw * this_ptr, uint64_t ul_overlay_handle, app::void * pv_buffer, uint32_t un_width, uint32_t un_height, uint32_t un_depth, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayRaw * this_ptr, app::IAsyncResult * result));
}
