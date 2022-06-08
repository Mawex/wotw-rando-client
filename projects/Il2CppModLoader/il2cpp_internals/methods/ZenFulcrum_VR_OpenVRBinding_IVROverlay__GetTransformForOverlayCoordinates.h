#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetTransformForOverlayCoordinates {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetTransformForOverlayCoordinates * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7D490, EVROverlayError__Enum, Invoke, (IVROverlay_GetTransformForOverlayCoordinates * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform));
IL2CPP_REGISTER_METHOD(0x02D7D8A0, IAsyncResult *, BeginInvoke, (IVROverlay_GetTransformForOverlayCoordinates * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetTransformForOverlayCoordinates * __this, HmdMatrix34_t * pmatTransform, IAsyncResult * result));
}
