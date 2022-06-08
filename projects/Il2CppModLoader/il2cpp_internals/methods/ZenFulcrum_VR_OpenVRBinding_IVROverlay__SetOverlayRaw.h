using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRaw {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayRaw * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D80500, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayRaw * __this, uint64_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth));
IL2CPP_REGISTER_METHOD(0x02D80980, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayRaw * __this, uint64_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayRaw * __this, IAsyncResult * result));
}
