#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderingPid {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayRenderingPid * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, uint32_t, Invoke, (IVROverlay_GetOverlayRenderingPid * __this, uint64_t ulOverlayHandle));
IL2CPP_REGISTER_METHOD(0x02D7BBB0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayRenderingPid * __this, uint64_t ulOverlayHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVROverlay_GetOverlayRenderingPid * __this, IAsyncResult * result));
}
