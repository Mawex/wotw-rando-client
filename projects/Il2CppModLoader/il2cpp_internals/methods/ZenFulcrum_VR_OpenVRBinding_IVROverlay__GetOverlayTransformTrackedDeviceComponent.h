using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceComponent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_GetOverlayTransformTrackedDeviceComponent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D7CCC0, EVROverlayError__Enum, Invoke, (IVROverlay_GetOverlayTransformTrackedDeviceComponent * __this, uint64_t ulOverlayHandle, uint32_t * punDeviceIndex, String * pchComponentName, uint32_t unComponentNameSize));
IL2CPP_REGISTER_METHOD(0x02D7D0D0, IAsyncResult *, BeginInvoke, (IVROverlay_GetOverlayTransformTrackedDeviceComponent * __this, uint64_t ulOverlayHandle, uint32_t * punDeviceIndex, String * pchComponentName, uint32_t unComponentNameSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVROverlayError__Enum, EndInvoke, (IVROverlay_GetOverlayTransformTrackedDeviceComponent * __this, uint32_t * punDeviceIndex, IAsyncResult * result));
}
