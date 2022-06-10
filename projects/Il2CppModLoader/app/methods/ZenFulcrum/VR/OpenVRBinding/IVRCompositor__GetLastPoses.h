#pragma once
#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoses {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetLastPoses * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D77C70, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetLastPoses * this_ptr, app::TrackedDevicePose_t__Array * p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array * p_game_pose_array, uint32_t un_game_pose_array_count))
    IL2CPP_REGISTER_METHOD(0x02F42360, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetLastPoses * this_ptr, app::TrackedDevicePose_t__Array * p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array * p_game_pose_array, uint32_t un_game_pose_array_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetLastPoses * this_ptr, app::IAsyncResult * result))
}
