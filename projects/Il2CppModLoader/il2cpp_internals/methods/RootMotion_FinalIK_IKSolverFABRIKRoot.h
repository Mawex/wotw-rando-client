#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverFABRIKRoot {
IL2CPP_REGISTER_METHOD(0x02BF0350, bool, IsValid, (IKSolverFABRIKRoot * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x02BF1120, void, StoreDefaultLocalState, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF1250, void, FixTransforms, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF1380, void, OnInitiate, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF1680, bool, IsRoot, (IKSolverFABRIKRoot * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02BF1780, void, OnUpdate, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF1B30, IKSolver_Point__Array *, GetPoints, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF1C30, IKSolver_Point *, GetPoint, (IKSolverFABRIKRoot * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02BF1D00, void, AddPointsToArray, (IKSolverFABRIKRoot * __this, IKSolver_Point__Array * * array, FABRIKChain * chain));
IL2CPP_REGISTER_METHOD(0x02BF1ED0, Vector3, GetCentroid, (IKSolverFABRIKRoot * __this));
IL2CPP_REGISTER_METHOD(0x02BF24D0, void, __ctor, (IKSolverFABRIKRoot * __this));
}
