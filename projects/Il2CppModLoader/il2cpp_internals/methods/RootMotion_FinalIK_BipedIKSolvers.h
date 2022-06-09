#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::BipedIKSolvers {
IL2CPP_REGISTER_METHOD(0x020503B0, IKSolverLimb__Array *, get_limbs, (app::BipedIKSolvers * this_ptr));
IL2CPP_REGISTER_METHOD(0x020505B0, IKSolver__Array *, get_ikSolvers, (app::BipedIKSolvers * this_ptr));
IL2CPP_REGISTER_METHOD(0x020508A0, void, AssignReferences, (app::BipedIKSolvers * this_ptr, app::BipedReferences * references));
IL2CPP_REGISTER_METHOD(0x02050BA0, void, __ctor, (app::BipedIKSolvers * this_ptr));
}
