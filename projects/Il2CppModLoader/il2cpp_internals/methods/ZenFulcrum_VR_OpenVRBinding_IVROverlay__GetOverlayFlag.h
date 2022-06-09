#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayFlag {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayFlag * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayFlag * this_ptr, uint64_t ul_overlay_handle, app::VROverlayFlags__Enum e_overlay_flag, app::bool * pb_enabled));
IL2CPP_REGISTER_METHOD(0x02D7AB20, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayFlag * this_ptr, uint64_t ul_overlay_handle, app::VROverlayFlags__Enum e_overlay_flag, app::bool * pb_enabled, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayFlag * this_ptr, app::bool * pb_enabled, app::IAsyncResult * result));
}
