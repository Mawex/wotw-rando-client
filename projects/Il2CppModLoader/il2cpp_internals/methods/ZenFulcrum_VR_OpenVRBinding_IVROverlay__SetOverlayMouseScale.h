using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayMouseScale {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayMouseScale * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayMouseScale * __this, uint64_t ulOverlayHandle, HmdVector2_t * pvecMouseScale));
IL2CPP_REGISTER_METHOD(0x02D80260, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayMouseScale * __this, uint64_t ulOverlayHandle, HmdVector2_t * pvecMouseScale, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayMouseScale * __this, HmdVector2_t * pvecMouseScale, IAsyncResult * result));
}
