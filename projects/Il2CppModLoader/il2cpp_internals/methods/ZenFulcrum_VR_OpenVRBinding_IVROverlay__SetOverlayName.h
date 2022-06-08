#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayName * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayName * __this, uint64_t ulOverlayHandle, String * pchName));
IL2CPP_REGISTER_METHOD(0x02D80340, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayName * __this, uint64_t ulOverlayHandle, String * pchName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayName * __this, IAsyncResult * result));
}
