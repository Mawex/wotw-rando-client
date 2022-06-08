#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformAbsolute {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTransformAbsolute * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTransformAbsolute * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform));
IL2CPP_REGISTER_METHOD(0x02D7CAC0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTransformAbsolute * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTransformAbsolute * __this, ETrackingUniverseOrigin__Enum * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform, IAsyncResult * result));
}
