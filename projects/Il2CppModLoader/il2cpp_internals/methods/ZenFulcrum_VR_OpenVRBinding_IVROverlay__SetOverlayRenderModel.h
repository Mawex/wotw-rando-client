using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderModel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayRenderModel * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayRenderModel * __this, uint64_t ulOverlayHandle, String * pchRenderModel, HmdColor_t * pColor));
IL2CPP_REGISTER_METHOD(0x02D80AA0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayRenderModel * __this, uint64_t ulOverlayHandle, String * pchRenderModel, HmdColor_t * pColor, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayRenderModel * __this, HmdColor_t * pColor, IAsyncResult * result));
}
