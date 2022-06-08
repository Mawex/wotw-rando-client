#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAlpha {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayAlpha * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7E860, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayAlpha * __this, uint64_t ulOverlayHandle, float fAlpha));
IL2CPP_REGISTER_METHOD(0x02D7EBE0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayAlpha * __this, uint64_t ulOverlayHandle, float fAlpha, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayAlpha * __this, IAsyncResult * result));
}
