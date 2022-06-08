#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::FBIKChain {
IL2CPP_REGISTER_METHOD(0x0205C2B0, void, __ctor, (FBIKChain * __this));
IL2CPP_REGISTER_METHOD(0x0205C450, void, __ctor, (FBIKChain * __this, float pin, float pull, Transform__Array * nodeTransforms));
IL2CPP_REGISTER_METHOD(0x0205C640, void, SetNodes, (FBIKChain * __this, Transform__Array * boneTransforms));
IL2CPP_REGISTER_METHOD(0x0205C8E0, int32_t, GetNodeIndex, (FBIKChain * __this, Transform * boneTransform));
IL2CPP_REGISTER_METHOD(0x0205CA20, bool, IsValid, (FBIKChain * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x0205CB70, void, Initiate, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0205CE90, void, ReadPose, (FBIKChain * __this, IKSolverFullBody * solver, bool fullBody));
IL2CPP_REGISTER_METHOD(0x0205D890, void, CalculateBoneLengths, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0205E1E0, void, Reach, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0205E910, Vector3, Push, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0205EF20, void, SolveTrigonometric, (FBIKChain * __this, IKSolverFullBody * solver, bool calculateBendDirection));
IL2CPP_REGISTER_METHOD(0x0205F4B0, void, Stage1, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0205FC40, void, Stage2, (FBIKChain * __this, IKSolverFullBody * solver, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0205FE80, void, SolveConstraintSystems, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02060060, Vector3, SolveFABRIKJoint, (FBIKChain * __this, Vector3 pos1, Vector3 pos2, float length));
IL2CPP_REGISTER_METHOD(0x02060270, Vector3, GetDirToBendPoint, (FBIKChain * __this, Vector3 direction, Vector3 bendDirection, float directionMagnitude));
IL2CPP_REGISTER_METHOD(0x020605B0, void, SolveChildConstraints, (FBIKChain * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02060650, void, SolveLinearConstraint, (FBIKChain * __this, IKSolver_Node * node1, IKSolver_Node * node2, float crossFade, float distance));
IL2CPP_REGISTER_METHOD(0x020608C0, void, ForwardReach, (FBIKChain * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02060A80, void, BackwardReach, (FBIKChain * __this, Vector3 position));
}
