#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayFlags {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayFlags * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayFlags * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * p_flags));
IL2CPP_REGISTER_METHOD(0x02D7AC10, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayFlags * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * p_flags, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayFlags * this_ptr, app::uint32_t * p_flags, app::IAsyncResult * result));
}
