using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformAbsolute {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTransformAbsolute * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTransformAbsolute * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform));
IL2CPP_REGISTER_METHOD(0x02D810A0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTransformAbsolute * __this, uint64_t ulOverlayHandle, ETrackingUniverseOrigin__Enum eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTransformAbsolute * __this, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform, IAsyncResult * result));
}
