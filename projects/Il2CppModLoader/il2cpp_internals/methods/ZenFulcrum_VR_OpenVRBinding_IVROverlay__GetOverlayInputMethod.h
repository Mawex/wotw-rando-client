#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayInputMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayInputMethod * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayInputMethod * this_ptr, uint64_t ul_overlay_handle, app::VROverlayInputMethod__Enum * pe_input_method));
IL2CPP_REGISTER_METHOD(0x02D7B2B0, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayInputMethod * this_ptr, uint64_t ul_overlay_handle, app::VROverlayInputMethod__Enum * pe_input_method, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayInputMethod * this_ptr, app::VROverlayInputMethod__Enum * pe_input_method, app::IAsyncResult * result));
}
