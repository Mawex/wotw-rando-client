#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureBounds {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTextureBounds * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTextureBounds * __this, uint64_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds));
IL2CPP_REGISTER_METHOD(0x02D80EF0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTextureBounds * __this, uint64_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTextureBounds * __this, VRTextureBounds_t * pOverlayTextureBounds, IAsyncResult * result));
}
