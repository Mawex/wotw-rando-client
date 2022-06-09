#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::IKSolverTrigonometric_TrigonometricBone {
IL2CPP_REGISTER_METHOD(0x02A05EA0, void, Initiate, (app::IKSolverTrigonometric_TrigonometricBone * this_ptr, app::Vector3 child_position, app::Vector3 bend_normal));
IL2CPP_REGISTER_METHOD(0x02A06270, Quaternion, GetRotation, (app::IKSolverTrigonometric_TrigonometricBone * this_ptr, app::Vector3 direction, app::Vector3 bend_normal));
IL2CPP_REGISTER_METHOD(0x02A06580, Vector3, GetBendNormalFromCurrentRotation, (app::IKSolverTrigonometric_TrigonometricBone * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A066F0, void, __ctor, (app::IKSolverTrigonometric_TrigonometricBone * this_ptr));
}
