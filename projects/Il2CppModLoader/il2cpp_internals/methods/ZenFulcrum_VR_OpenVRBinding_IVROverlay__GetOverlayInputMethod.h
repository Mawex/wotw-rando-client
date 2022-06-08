using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayInputMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayInputMethod * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayInputMethod * __this, uint64_t ulOverlayHandle, VROverlayInputMethod__Enum * peInputMethod));
IL2CPP_REGISTER_METHOD(0x02D7B2B0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayInputMethod * __this, uint64_t ulOverlayHandle, VROverlayInputMethod__Enum * peInputMethod, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayInputMethod * __this, VROverlayInputMethod__Enum * peInputMethod, IAsyncResult * result));
}
