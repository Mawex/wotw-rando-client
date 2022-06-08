using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceRelative {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTransformTrackedDeviceRelative * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTransformTrackedDeviceRelative * __this, uint64_t ulOverlayHandle, uint32_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform));
IL2CPP_REGISTER_METHOD(0x02D81360, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTransformTrackedDeviceRelative * __this, uint64_t ulOverlayHandle, uint32_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTransformTrackedDeviceRelative * __this, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform, IAsyncResult * result));
}
