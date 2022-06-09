#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetDashboardOverlaySceneProcess {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_process_id));
IL2CPP_REGISTER_METHOD(0x02D79C70, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, uint64_t ul_overlay_handle, app::uint32_t * pun_process_id, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetDashboardOverlaySceneProcess * this_ptr, app::uint32_t * pun_process_id, app::IAsyncResult * result));
}
