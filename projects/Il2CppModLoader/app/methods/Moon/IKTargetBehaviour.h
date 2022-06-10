#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::IKTargetBehaviour {
    IL2CPP_REGISTER_METHOD(0x01101D50, void, Start, (app::IKTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101E90, void, ResetBehaviour, (app::IKTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01101F20, app::Transform *, get_LookTransform, (app::IKTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01102050, app::Vector2, ClampVector, (app::IKTargetBehaviour * this_ptr, app::Vector3 origin, app::Vector3 target, float max_dist))
    IL2CPP_REGISTER_METHOD(0x01102210, void, Process, (app::IKTargetBehaviour * this_ptr, app::MoonAnimator * animator, app::InverseKinematicsPostprocess * postprocess, float delta, app::Vector3 target_pos, bool ignore_damp))
    IL2CPP_REGISTER_METHOD(0x01102AF0, void, FixedUpdate, (app::IKTargetBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01102C70, void, ctor, (app::IKTargetBehaviour * this_ptr))
}
