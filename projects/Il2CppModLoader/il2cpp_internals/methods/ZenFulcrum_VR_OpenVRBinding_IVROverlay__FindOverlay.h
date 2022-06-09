#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__FindOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_FindOverlay * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02AD6B00, EVROverlayError__Enum, Invoke, (app::IVROverlay_FindOverlay * this_ptr, app::String * pch_overlay_key, app::uint64_t * p_overlay_handle));
IL2CPP_REGISTER_METHOD(0x02D79B90, IAsyncResult *, BeginInvoke, (app::IVROverlay_FindOverlay * this_ptr, app::String * pch_overlay_key, app::uint64_t * p_overlay_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_FindOverlay * this_ptr, app::uint64_t * p_overlay_handle, app::IAsyncResult * result));
}
