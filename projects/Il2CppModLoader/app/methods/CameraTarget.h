#pragma once
#include <interception_macros.h>

namespace app::methods::CameraTarget {
    IL2CPP_REGISTER_METHOD(0x00B203E0, void, ctor, (app::CameraTarget * this_ptr, app::GameplayCamera * gameplay_gameplay_camera))
    IL2CPP_REGISTER_METHOD(0x00B20740, app::CameraTarget_TargetLayer *, get_BaseTargetLayer, (app::CameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B207E0, app::CameraTarget_TargetLayer *, AddTargetLayer, (app::CameraTarget * this_ptr, app::Transform * target, float weight, bool follow_x, bool follow_y, bool follow_z))
    IL2CPP_REGISTER_METHOD(0x00B20990, void, RemoveTargetLayer, (app::CameraTarget * this_ptr, app::CameraTarget_TargetLayer * target_layer))
    IL2CPP_REGISTER_METHOD(0x00B20A30, void, SetTargetPosition, (app::CameraTarget * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00B20A70, void, UpdateTargetPosition, (app::CameraTarget * this_ptr))
}
