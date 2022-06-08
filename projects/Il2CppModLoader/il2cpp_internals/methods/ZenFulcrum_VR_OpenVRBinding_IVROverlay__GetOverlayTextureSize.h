using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTextureSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTextureSize * __this, uint64_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight));
IL2CPP_REGISTER_METHOD(0x02D7C9C0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTextureSize * __this, uint64_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTextureSize * __this, uint32_t * pWidth, uint32_t * pHeight, IAsyncResult * result));
}
