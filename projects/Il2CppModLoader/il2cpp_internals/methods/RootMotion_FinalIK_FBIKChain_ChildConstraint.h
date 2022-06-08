#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::FBIKChain_ChildConstraint {
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_nominalDistance, (FBIKChain_ChildConstraint * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_nominalDistance, (FBIKChain_ChildConstraint * __this, float value));
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_isRigid, (FBIKChain_ChildConstraint * __this));
IL2CPP_REGISTER_METHOD(0x0052A120, void, set_isRigid, (FBIKChain_ChildConstraint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02060CC0, void, __ctor, (FBIKChain_ChildConstraint * __this, Transform * bone1, Transform * bone2, float pushElasticity, float pullElasticity));
IL2CPP_REGISTER_METHOD(0x02060CE0, void, Initiate, (FBIKChain_ChildConstraint * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02060D40, void, OnPreSolve, (FBIKChain_ChildConstraint * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02061110, void, Solve, (FBIKChain_ChildConstraint * __this, IKSolverFullBody * solver));
}
