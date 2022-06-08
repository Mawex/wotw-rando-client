using namespace app;

namespace app::methods::RootMotion::FinalIK::IKMapping {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValid, (IKMapping * __this, IKSolver * solver, String * * message));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initiate, (IKMapping * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDAF80, bool, BoneIsValid, (IKMapping * __this, Transform * bone, IKSolver * solver, String * * message, Warning_Logger * logger));
IL2CPP_REGISTER_METHOD(0x02BDB0E0, Vector3, SolveFABRIKJoint, (IKMapping * __this, Vector3 pos1, Vector3 pos2, float length));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (IKMapping * __this));
}
