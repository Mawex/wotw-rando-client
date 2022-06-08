using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAlpha {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayAlpha * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayAlpha * __this, uint64_t ulOverlayHandle, float * pfAlpha));
IL2CPP_REGISTER_METHOD(0x02D7A350, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayAlpha * __this, uint64_t ulOverlayHandle, float * pfAlpha, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayAlpha * __this, float * pfAlpha, IAsyncResult * result));
}
