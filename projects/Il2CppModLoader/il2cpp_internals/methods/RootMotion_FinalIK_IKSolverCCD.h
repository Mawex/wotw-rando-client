#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverCCD {
IL2CPP_REGISTER_METHOD(0x02BEA260, void, FadeOutBoneWeights, (IKSolverCCD * __this));
IL2CPP_REGISTER_METHOD(0x02BEA360, void, OnInitiate, (IKSolverCCD * __this));
IL2CPP_REGISTER_METHOD(0x02BEA450, void, OnUpdate, (IKSolverCCD * __this));
IL2CPP_REGISTER_METHOD(0x02BEA8C0, void, Solve, (IKSolverCCD * __this, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x02BEB3B0, void, SolveVirtual, (IKSolver_Bone__Array * bones, Vector3 targetPosition, float weight));
IL2CPP_REGISTER_METHOD(0x02BEB780, void, __ctor, (IKSolverCCD * __this));
}
