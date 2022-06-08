using namespace app;

namespace app::methods::RootMotion::FinalIK::IKConstraintBend {
IL2CPP_REGISTER_METHOD(0x02077D90, bool, IsValid, (IKConstraintBend * __this, IKSolverFullBody * solver, Warning_Logger * logger));
IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_initiated, (IKConstraintBend * __this));
IL2CPP_REGISTER_METHOD(0x0085E280, void, set_initiated, (IKConstraintBend * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02077FC0, void, __ctor, (IKConstraintBend * __this));
IL2CPP_REGISTER_METHOD(0x02078080, void, __ctor, (IKConstraintBend * __this, Transform * bone1, Transform * bone2, Transform * bone3));
IL2CPP_REGISTER_METHOD(0x00522850, void, SetBones, (IKConstraintBend * __this, Transform * bone1, Transform * bone2, Transform * bone3));
IL2CPP_REGISTER_METHOD(0x02078160, void, Initiate, (IKConstraintBend * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02078AE0, void, SetLimbOrientation, (IKConstraintBend * __this, Vector3 upper, Vector3 lower, Vector3 last));
IL2CPP_REGISTER_METHOD(0x02078D50, void, LimitBend, (IKConstraintBend * __this, float solverWeight, float positionWeight));
IL2CPP_REGISTER_METHOD(0x02079B60, Vector3, GetDir, (IKConstraintBend * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x0207A6E0, Vector3, OrthoToLimb, (IKConstraintBend * __this, IKSolverFullBody * solver, Vector3 tangent));
IL2CPP_REGISTER_METHOD(0x0207A880, Vector3, OrthoToBone1, (IKConstraintBend * __this, IKSolverFullBody * solver, Vector3 tangent));
}
