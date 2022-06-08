using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTexture {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTexture * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTexture * __this, uint64_t ulOverlayHandle, Texture_t * pTexture));
IL2CPP_REGISTER_METHOD(0x02D80E10, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTexture * __this, uint64_t ulOverlayHandle, Texture_t * pTexture, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTexture * __this, Texture_t * pTexture, IAsyncResult * result));
}
