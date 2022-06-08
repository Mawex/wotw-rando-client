using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlag {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayFlag * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayFlag * __this, uint64_t ulOverlayHandle, VROverlayFlags__Enum eOverlayFlag, bool * pbEnabled));
IL2CPP_REGISTER_METHOD(0x02D7AB20, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayFlag * __this, uint64_t ulOverlayHandle, VROverlayFlags__Enum eOverlayFlag, bool * pbEnabled, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayFlag * __this, bool * pbEnabled, IAsyncResult * result));
}
