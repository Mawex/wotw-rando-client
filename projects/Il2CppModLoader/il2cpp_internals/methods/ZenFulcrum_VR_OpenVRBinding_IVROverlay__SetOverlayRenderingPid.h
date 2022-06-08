#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderingPid {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayRenderingPid * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayRenderingPid * __this, uint64_t ulOverlayHandle, uint32_t unPID));
IL2CPP_REGISTER_METHOD(0x02D80B90, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayRenderingPid * __this, uint64_t ulOverlayHandle, uint32_t unPID, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayRenderingPid * __this, IAsyncResult * result));
}
