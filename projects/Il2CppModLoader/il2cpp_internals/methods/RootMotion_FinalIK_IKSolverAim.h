#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverAim {
IL2CPP_REGISTER_METHOD(0x02BE78A0, float, GetAngle, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE7A30, Vector3, get_transformAxis, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE7BA0, Vector3, get_transformPoleAxis, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE7D10, void, OnInitiate, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE8110, void, OnUpdate, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_minBones, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE8960, void, Solve, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE8AC0, Vector3, GetClampedIKPosition, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BE9180, void, RotateToTarget, (IKSolverAim * __this, Vector3 targetPosition, IKSolver_Bone * bone, float weight));
IL2CPP_REGISTER_METHOD(0x02BEA020, Vector3, get_localDirection, (IKSolverAim * __this));
IL2CPP_REGISTER_METHOD(0x02BEA170, void, __ctor, (IKSolverAim * __this));
}
