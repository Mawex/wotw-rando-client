using namespace app;

namespace app::methods::RootMotion::FinalIK::IKMappingBone {
IL2CPP_REGISTER_METHOD(0x02BDE790, bool, IsValid, (IKMappingBone * __this, IKSolver * solver, String * * message));
IL2CPP_REGISTER_METHOD(0x02BDE860, void, __ctor, (IKMappingBone * __this));
IL2CPP_REGISTER_METHOD(0x02BDE9D0, void, __ctor, (IKMappingBone * __this, Transform * bone));
IL2CPP_REGISTER_METHOD(0x02BDEB50, void, StoreDefaultLocalState, (IKMappingBone * __this));
IL2CPP_REGISTER_METHOD(0x02BDEB70, void, FixTransforms, (IKMappingBone * __this));
IL2CPP_REGISTER_METHOD(0x02BDEBF0, void, Initiate, (IKMappingBone * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDEDB0, void, ReadPose, (IKMappingBone * __this));
IL2CPP_REGISTER_METHOD(0x02BDEDD0, void, WritePose, (IKMappingBone * __this, float solverWeight));
}
