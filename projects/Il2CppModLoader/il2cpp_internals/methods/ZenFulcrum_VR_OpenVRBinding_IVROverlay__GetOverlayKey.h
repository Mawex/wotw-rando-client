#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayKey {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayKey * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7B390, uint32_t, Invoke, (IVROverlay_GetOverlayKey * __this, uint64_t ulOverlayHandle, StringBuilder * pchValue, uint32_t unBufferSize, EVROverlayError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02D7B7B0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayKey * __this, uint64_t ulOverlayHandle, StringBuilder * pchValue, uint32_t unBufferSize, EVROverlayError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVROverlay_GetOverlayKey * __this, EVROverlayError__Enum * pError, IAsyncResult * result));
}
