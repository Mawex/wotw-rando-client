using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayImageData {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayImageData * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7ACF0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayImageData * __this, uint64_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight));
IL2CPP_REGISTER_METHOD(0x02D7B190, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayImageData * __this, uint64_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayImageData * __this, uint32_t * punWidth, uint32_t * punHeight, IAsyncResult * result));
}
