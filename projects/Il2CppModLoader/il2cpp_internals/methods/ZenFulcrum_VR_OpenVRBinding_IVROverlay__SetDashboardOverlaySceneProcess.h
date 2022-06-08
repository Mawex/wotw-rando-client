using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetDashboardOverlaySceneProcess {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetDashboardOverlaySceneProcess * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (IVROverlay_SetDashboardOverlaySceneProcess * __this, uint64_t ulOverlayHandle, uint32_t unProcessId));
IL2CPP_REGISTER_METHOD(0x02D7E010, IAsyncResult *, BeginInvoke, (IVROverlay_SetDashboardOverlaySceneProcess * __this, uint64_t ulOverlayHandle, uint32_t unProcessId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetDashboardOverlaySceneProcess * __this, IAsyncResult * result));
}
