using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayMouseScale {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayMouseScale * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayMouseScale * __this, uint64_t ulOverlayHandle, HmdVector2_t * pvecMouseScale));
IL2CPP_REGISTER_METHOD(0x02D7B8B0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayMouseScale * __this, uint64_t ulOverlayHandle, HmdVector2_t * pvecMouseScale, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayMouseScale * __this, HmdVector2_t * pvecMouseScale, IAsyncResult * result));
}
