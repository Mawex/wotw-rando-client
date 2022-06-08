using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderModel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayRenderModel * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7ACF0, uint32_t, Invoke, (IVROverlay_GetOverlayRenderModel * __this, uint64_t ulOverlayHandle, String * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02D7BA90, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayRenderModel * __this, uint64_t ulOverlayHandle, String * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, uint32_t, EndInvoke, (IVROverlay_GetOverlayRenderModel * __this, HmdColor_t * pColor, EVROverlayError__Enum * pError, IAsyncResult * result));
}
