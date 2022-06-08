#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayColor {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayColor * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7F190, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayColor * __this, uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue));
IL2CPP_REGISTER_METHOD(0x02D7F600, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayColor * __this, uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayColor * __this, IAsyncResult * result));
}
