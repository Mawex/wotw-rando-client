#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoseForTrackedDeviceIndex {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetLastPoseForTrackedDeviceIndex * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (IVRCompositor_GetLastPoseForTrackedDeviceIndex * __this, uint32_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose));
IL2CPP_REGISTER_METHOD(0x02F42260, IAsyncResult *, BeginInvoke, (IVRCompositor_GetLastPoseForTrackedDeviceIndex * __this, uint32_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_GetLastPoseForTrackedDeviceIndex * __this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose, IAsyncResult * result));
}
