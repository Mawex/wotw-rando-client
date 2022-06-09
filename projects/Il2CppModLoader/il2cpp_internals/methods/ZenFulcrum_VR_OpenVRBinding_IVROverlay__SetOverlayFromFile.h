#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__SetOverlayFromFile {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_SetOverlayFromFile * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, uint64_t ul_overlay_handle, app::String * pch_file_path));
IL2CPP_REGISTER_METHOD(0x02D7FBA0, IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, uint64_t ul_overlay_handle, app::String * pch_file_path, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, app::IAsyncResult * result));
}
