#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayInputMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayInputMethod * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayInputMethod * this_ptr, uint64_t ul_overlay_handle, app::VROverlayInputMethod__Enum e_input_method));
IL2CPP_REGISTER_METHOD(0x02D7FC70, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayInputMethod * this_ptr, uint64_t ul_overlay_handle, app::VROverlayInputMethod__Enum e_input_method, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayInputMethod * this_ptr, app::IAsyncResult * result));
}
