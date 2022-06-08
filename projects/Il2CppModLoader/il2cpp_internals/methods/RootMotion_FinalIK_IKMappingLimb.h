using namespace app;

namespace app::methods::RootMotion::FinalIK::IKMappingLimb {
IL2CPP_REGISTER_METHOD(0x02BDEE00, bool, IsValid, (IKMappingLimb * __this, IKSolver * solver, String * * message));
IL2CPP_REGISTER_METHOD(0x02BDEEA0, IKMapping_BoneMap *, GetBoneMap, (IKMappingLimb * __this, IKMappingLimb_BoneMapType__Enum boneMap));
IL2CPP_REGISTER_METHOD(0x02BDEFB0, void, SetLimbOrientation, (IKMappingLimb * __this, Vector3 upper, Vector3 lower));
IL2CPP_REGISTER_METHOD(0x02BDFA20, void, __ctor, (IKMappingLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BDFE40, void, __ctor, (IKMappingLimb * __this, Transform * bone1, Transform * bone2, Transform * bone3, Transform * parentBone));
IL2CPP_REGISTER_METHOD(0x02BE02A0, void, SetBones, (IKMappingLimb * __this, Transform * bone1, Transform * bone2, Transform * bone3, Transform * parentBone));
IL2CPP_REGISTER_METHOD(0x02BE02C0, void, StoreDefaultLocalState, (IKMappingLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BE03D0, void, FixTransforms, (IKMappingLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BE0610, void, Initiate, (IKMappingLimb * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BE0CA0, void, ReadPose, (IKMappingLimb * __this));
IL2CPP_REGISTER_METHOD(0x02BE0DC0, void, WritePose, (IKMappingLimb * __this, IKSolverFullBody * solver, bool fullBody));
}
