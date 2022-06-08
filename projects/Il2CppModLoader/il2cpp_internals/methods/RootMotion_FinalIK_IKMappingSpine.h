using namespace app;

namespace app::methods::RootMotion::FinalIK::IKMappingSpine {
IL2CPP_REGISTER_METHOD(0x02BE0FA0, bool, IsValid, (IKMappingSpine * __this, IKSolver * solver, String * * message));
IL2CPP_REGISTER_METHOD(0x02BE1330, void, __ctor, (IKMappingSpine * __this));
IL2CPP_REGISTER_METHOD(0x02BE1770, void, __ctor, (IKMappingSpine * __this, Transform__Array * spineBones, Transform * leftUpperArmBone, Transform * rightUpperArmBone, Transform * leftThighBone, Transform * rightThighBone));
IL2CPP_REGISTER_METHOD(0x00F70AB0, void, SetBones, (IKMappingSpine * __this, Transform__Array * spineBones, Transform * leftUpperArmBone, Transform * rightUpperArmBone, Transform * leftThighBone, Transform * rightThighBone));
IL2CPP_REGISTER_METHOD(0x02064960, void, StoreDefaultLocalState, (IKMappingSpine * __this));
IL2CPP_REGISTER_METHOD(0x02BE1BF0, void, FixTransforms, (IKMappingSpine * __this));
IL2CPP_REGISTER_METHOD(0x02BE1CA0, void, Initiate, (IKMappingSpine * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BE2D70, bool, UseFABRIK, (IKMappingSpine * __this));
IL2CPP_REGISTER_METHOD(0x02BE2DA0, void, ReadPose, (IKMappingSpine * __this));
IL2CPP_REGISTER_METHOD(0x02BE3330, void, WritePose, (IKMappingSpine * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BE39F0, void, ForwardReach, (IKMappingSpine * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BE3BC0, void, BackwardReach, (IKMappingSpine * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02BE3D60, void, MapToSolverPositions, (IKMappingSpine * __this, IKSolverFullBody * solver));
}
