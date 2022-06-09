#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayColor * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7F190, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float f_red, float f_green, float f_blue));
IL2CPP_REGISTER_METHOD(0x02D7F600, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float f_red, float f_green, float f_blue, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayColor * this_ptr, app::IAsyncResult * result));
}
