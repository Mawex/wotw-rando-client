#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTransformType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTransformType * __this, uint64_t ulOverlayHandle, VROverlayTransformType__Enum * peTransformType));
IL2CPP_REGISTER_METHOD(0x02D7D2D0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTransformType * __this, uint64_t ulOverlayHandle, VROverlayTransformType__Enum * peTransformType, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTransformType * __this, VROverlayTransformType__Enum * peTransformType, IAsyncResult * result));
}
