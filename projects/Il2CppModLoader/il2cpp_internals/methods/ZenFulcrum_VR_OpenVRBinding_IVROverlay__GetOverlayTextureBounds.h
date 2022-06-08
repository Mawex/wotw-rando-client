using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureBounds {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTextureBounds * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTextureBounds * __this, uint64_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds));
IL2CPP_REGISTER_METHOD(0x02D7C800, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTextureBounds * __this, uint64_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTextureBounds * __this, VRTextureBounds_t * pOverlayTextureBounds, IAsyncResult * result));
}
