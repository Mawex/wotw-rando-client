#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayKey {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayKey * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7B390, uint32_t, Invoke, (app::IVROverlay_GetOverlayKey * this_ptr, uint64_t ul_overlay_handle, app::StringBuilder * pch_value, uint32_t un_buffer_size, app::EVROverlayError__Enum * p_error));
IL2CPP_REGISTER_METHOD(0x02D7B7B0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayKey * this_ptr, uint64_t ul_overlay_handle, app::StringBuilder * pch_value, uint32_t un_buffer_size, app::EVROverlayError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVROverlay_GetOverlayKey * this_ptr, app::EVROverlayError__Enum * p_error, app::IAsyncResult * result));
}
