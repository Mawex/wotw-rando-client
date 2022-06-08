#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlags {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayFlags * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayFlags * __this, uint64_t ulOverlayHandle, uint32_t * pFlags));
IL2CPP_REGISTER_METHOD(0x02D7AC10, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayFlags * __this, uint64_t ulOverlayHandle, uint32_t * pFlags, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayFlags * __this, uint32_t * pFlags, IAsyncResult * result));
}
