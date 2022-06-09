#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__WaitGetPoses {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_WaitGetPoses * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02D77C70, EVRCompositorError__Enum, Invoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::TrackedDevicePose_t__Array * p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array * p_game_pose_array, uint32_t un_game_pose_array_count));
IL2CPP_REGISTER_METHOD(0x02D78080, IAsyncResult *, BeginInvoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::TrackedDevicePose_t__Array * p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array * p_game_pose_array, uint32_t un_game_pose_array_count, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::IAsyncResult * result));
}
