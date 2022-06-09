#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetLastPoseForTrackedDeviceIndex {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, uint32_t un_device_index, app::TrackedDevicePose_t * p_output_pose, app::TrackedDevicePose_t * p_output_game_pose));
IL2CPP_REGISTER_METHOD(0x02F42260, IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, uint32_t un_device_index, app::TrackedDevicePose_t * p_output_pose, app::TrackedDevicePose_t * p_output_game_pose, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, app::TrackedDevicePose_t * p_output_pose, app::TrackedDevicePose_t * p_output_game_pose, app::IAsyncResult * result));
}
