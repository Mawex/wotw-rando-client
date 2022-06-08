#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverTrigonometric {
IL2CPP_REGISTER_METHOD(0x02C02BB0, void, SetBendGoalPosition, (IKSolverTrigonometric * __this, Vector3 goalPosition, float weight));
IL2CPP_REGISTER_METHOD(0x02C02F00, void, SetBendPlaneToCurrent, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C03300, void, SetIKRotation, (IKSolverTrigonometric * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02C03310, void, SetIKRotationWeight, (IKSolverTrigonometric * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02C033E0, Quaternion, GetIKRotation, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, GetIKRotationWeight, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C033F0, IKSolver_Point__Array *, GetPoints, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C03590, IKSolver_Point *, GetPoint, (IKSolverTrigonometric * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02C03740, void, StoreDefaultLocalState, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C037A0, void, FixTransforms, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C03800, bool, IsValid, (IKSolverTrigonometric * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x02C03D40, bool, SetChain, (IKSolverTrigonometric * __this, Transform * bone1, Transform * bone2, Transform * bone3, Transform * root));
IL2CPP_REGISTER_METHOD(0x02C03DB0, void, Solve, (Transform * bone1, Transform * bone2, Transform * bone3, Vector3 targetPosition, Vector3 bendNormal, float weight));
IL2CPP_REGISTER_METHOD(0x02C04B50, void, SolveVirtual, (IKSolver_Bone__Array * bones, int32_t first, int32_t second, int32_t third, Vector3 targetPosition, Vector3 bendNormal, float weight));
IL2CPP_REGISTER_METHOD(0x02C055C0, void, SolveVirtualPositions, (IKSolver_Bone * bone1, IKSolver_Bone * bone2, IKSolver_Bone * bone3, Vector3 targetPosition, Vector3 bendNormal, float weight));
IL2CPP_REGISTER_METHOD(0x02C05C30, Vector3, GetDirectionToBendPoint, (Vector3 direction, float directionMag, Vector3 bendDirection, float sqrMag1, float sqrMag2));
IL2CPP_REGISTER_METHOD(0x02C05F70, void, OnInitiate, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C061E0, bool, IsDirectHierarchy, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C063F0, void, InitiateBones, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C065C0, void, OnUpdate, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitiateVirtual, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateVirtual, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostSolveVirtual, (IKSolverTrigonometric * __this));
IL2CPP_REGISTER_METHOD(0x02C07420, Vector3, GetBendDirection, (IKSolverTrigonometric * __this, Vector3 IKPosition, Vector3 bendNormal));
IL2CPP_REGISTER_METHOD(0x02C07950, void, __ctor, (IKSolverTrigonometric * __this));
}
