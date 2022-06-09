#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__CreateDashboardOverlay {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D792C0, EVROverlayError__Enum, Invoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::String * pch_overlay_key, app::String * pch_overlay_friendly_name, app::uint64_t * p_main_handle, app::uint64_t * p_thumbnail_handle));
IL2CPP_REGISTER_METHOD(0x02D798F0, IAsyncResult *, BeginInvoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::String * pch_overlay_key, app::String * pch_overlay_friendly_name, app::uint64_t * p_main_handle, app::uint64_t * p_thumbnail_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::uint64_t * p_main_handle, app::uint64_t * p_thumbnail_handle, app::IAsyncResult * result));
}
