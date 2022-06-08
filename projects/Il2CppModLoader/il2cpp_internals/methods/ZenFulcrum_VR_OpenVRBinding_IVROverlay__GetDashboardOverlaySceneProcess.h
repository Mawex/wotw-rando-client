#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetDashboardOverlaySceneProcess {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetDashboardOverlaySceneProcess * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetDashboardOverlaySceneProcess * __this, uint64_t ulOverlayHandle, uint32_t * punProcessId));
IL2CPP_REGISTER_METHOD(0x02D79C70, IAsyncResult *, BeginInvoke, (IVROverlay_GetDashboardOverlaySceneProcess * __this, uint64_t ulOverlayHandle, uint32_t * punProcessId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetDashboardOverlaySceneProcess * __this, uint32_t * punProcessId, IAsyncResult * result));
}
