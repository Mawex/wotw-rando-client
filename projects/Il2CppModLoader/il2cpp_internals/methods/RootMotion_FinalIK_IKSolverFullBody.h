using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverFullBody {
IL2CPP_REGISTER_METHOD(0x02BF2590, IKEffector *, GetEffector, (IKSolverFullBody * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x02BF2700, FBIKChain *, GetChain, (IKSolverFullBody * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02BF2760, int32_t, GetChainIndex, (IKSolverFullBody * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02BF2940, IKSolver_Node *, GetNode, (IKSolverFullBody * __this, int32_t chainIndex, int32_t nodeIndex));
IL2CPP_REGISTER_METHOD(0x02BF29B0, void, GetChainAndNodeIndexes, (IKSolverFullBody * __this, Transform * transform, int32_t * chainIndex, int32_t * nodeIndex));
IL2CPP_REGISTER_METHOD(0x02BF2B60, IKSolver_Point__Array *, GetPoints, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF2DA0, IKSolver_Point *, GetPoint, (IKSolverFullBody * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02BF2FE0, bool, IsValid, (IKSolverFullBody * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x02BF33B0, void, StoreDefaultLocalState, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF36A0, void, FixTransforms, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF3920, void, OnInitiate, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF3B30, void, OnUpdate, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF3EF0, void, ReadPose, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF4530, void, Solve, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF4A70, void, ApplyBendConstraints, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF4AC0, void, WritePose, (IKSolverFullBody * __this));
IL2CPP_REGISTER_METHOD(0x02BF4C40, void, __ctor, (IKSolverFullBody * __this));
}
