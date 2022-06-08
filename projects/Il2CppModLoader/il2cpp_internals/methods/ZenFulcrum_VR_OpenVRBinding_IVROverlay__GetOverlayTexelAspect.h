#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexelAspect {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTexelAspect * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTexelAspect * __this, uint64_t ulOverlayHandle, float * pfTexelAspect));
IL2CPP_REGISTER_METHOD(0x02D7BD50, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTexelAspect * __this, uint64_t ulOverlayHandle, float * pfTexelAspect, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTexelAspect * __this, float * pfTexelAspect, IAsyncResult * result));
}
