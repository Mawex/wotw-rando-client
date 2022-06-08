using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTexelAspect {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTexelAspect * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7E860, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTexelAspect * __this, uint64_t ulOverlayHandle, float fTexelAspect));
IL2CPP_REGISTER_METHOD(0x02D80D30, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTexelAspect * __this, uint64_t ulOverlayHandle, float fTexelAspect, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTexelAspect * __this, IAsyncResult * result));
}
