#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayIntersectionMask {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayIntersectionMask * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7FD40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayIntersectionMask * __this, uint64_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize));
IL2CPP_REGISTER_METHOD(0x02D80150, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayIntersectionMask * __this, uint64_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayIntersectionMask * __this, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, IAsyncResult * result));
}
