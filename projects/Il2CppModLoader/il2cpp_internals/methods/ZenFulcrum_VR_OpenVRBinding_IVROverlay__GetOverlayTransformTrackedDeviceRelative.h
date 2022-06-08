using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceRelative {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTransformTrackedDeviceRelative * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTransformTrackedDeviceRelative * __this, uint64_t ulOverlayHandle, uint32_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform));
IL2CPP_REGISTER_METHOD(0x02D7D1D0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTransformTrackedDeviceRelative * __this, uint64_t ulOverlayHandle, uint32_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTransformTrackedDeviceRelative * __this, uint32_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform, IAsyncResult * result));
}
