#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolver {
IL2CPP_REGISTER_METHOD(0x02BE42F0, bool, IsValid, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x02BE43A0, void, Initiate, (IKSolver * __this, Transform * root));
IL2CPP_REGISTER_METHOD(0x02BE4530, void, Update, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, GetIKPosition, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x009C51C0, void, SetIKPosition, (IKSolver * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00573170, float, GetIKPositionWeight, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x02BE45A0, void, SetIKPositionWeight, (IKSolver * __this, float weight));
IL2CPP_REGISTER_METHOD(0x002FBB40, Transform *, GetRoot, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_initiated, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_initiated, (IKSolver * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02BE4670, void, LogWarning, (IKSolver * __this, String * message));
IL2CPP_REGISTER_METHOD(0x02BE4690, Transform *, ContainsDuplicateBone, (IKSolver_Bone__Array * bones));
IL2CPP_REGISTER_METHOD(0x02BE4830, bool, HierarchyIsValid, (IKSolver_Bone__Array * bones));
IL2CPP_REGISTER_METHOD(0x02BE48F0, float, PreSolveBones, (IKSolver_Bone__Array * * bones));
IL2CPP_REGISTER_METHOD(0x02BE4F60, void, SolverRotateBonesAroundPoint, (IKSolver_Bone__Array * bones, int32_t index, Vector3 point, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02BE5200, void, SolverRotate, (IKSolver_Bone__Array * bones, int32_t index, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02BE53A0, void, __ctor, (IKSolver * __this));
IL2CPP_REGISTER_METHOD(0x02BE53B0, void, __cctor, ());
}
