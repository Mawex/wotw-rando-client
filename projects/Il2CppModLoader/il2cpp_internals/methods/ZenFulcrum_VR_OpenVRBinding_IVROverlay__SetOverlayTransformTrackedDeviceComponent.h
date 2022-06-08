#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceComponent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayTransformTrackedDeviceComponent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayTransformTrackedDeviceComponent * __this, uint64_t ulOverlayHandle, uint32_t unDeviceIndex, String * pchComponentName));
IL2CPP_REGISTER_METHOD(0x02D81280, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayTransformTrackedDeviceComponent * __this, uint64_t ulOverlayHandle, uint32_t unDeviceIndex, String * pchComponentName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayTransformTrackedDeviceComponent * __this, IAsyncResult * result));
}
