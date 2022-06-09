#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayColor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7A530, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayColor * this_ptr, uint64_t ul_overlay_handle, app::float * pf_red, app::float * pf_green, app::float * pf_blue));
IL2CPP_REGISTER_METHOD(0x02D7A950, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayColor * this_ptr, uint64_t ul_overlay_handle, app::float * pf_red, app::float * pf_green, app::float * pf_blue, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayColor * this_ptr, app::float * pf_red, app::float * pf_green, app::float * pf_blue, app::IAsyncResult * result));
}
