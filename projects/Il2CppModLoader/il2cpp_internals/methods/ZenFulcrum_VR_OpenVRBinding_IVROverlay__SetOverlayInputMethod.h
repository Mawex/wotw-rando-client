using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayInputMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayInputMethod * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayInputMethod * __this, uint64_t ulOverlayHandle, VROverlayInputMethod__Enum eInputMethod));
IL2CPP_REGISTER_METHOD(0x02D7FC70, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayInputMethod * __this, uint64_t ulOverlayHandle, VROverlayInputMethod__Enum eInputMethod, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayInputMethod * __this, IAsyncResult * result));
}
