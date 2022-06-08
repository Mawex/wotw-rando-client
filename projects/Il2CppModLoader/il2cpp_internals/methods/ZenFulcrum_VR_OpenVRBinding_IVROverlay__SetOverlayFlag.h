using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFlag {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayFlag * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7F710, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayFlag * __this, uint64_t ulOverlayHandle, VROverlayFlags__Enum eOverlayFlag, bool bEnabled));
IL2CPP_REGISTER_METHOD(0x02D7FAB0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayFlag * __this, uint64_t ulOverlayHandle, VROverlayFlags__Enum eOverlayFlag, bool bEnabled, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayFlag * __this, IAsyncResult * result));
}
