using namespace app;

namespace app::methods::RootMotion::FinalIK::IKEffector {
IL2CPP_REGISTER_METHOD(0x02BD8120, IKSolver_Node *, GetNode, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_isEndEffector, (IKEffector * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_isEndEffector, (IKEffector * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02BD81B0, void, PinToBone, (IKEffector * __this, float positionWeight, float rotationWeight));
IL2CPP_REGISTER_METHOD(0x02BD83B0, void, __ctor, (IKEffector * __this));
IL2CPP_REGISTER_METHOD(0x02BD8540, void, __ctor, (IKEffector * __this, Transform * bone, Transform__Array * childBones));
IL2CPP_REGISTER_METHOD(0x02BD86F0, bool, IsValid, (IKEffector * __this, IKSolver * solver, String * * message));
IL2CPP_REGISTER_METHOD(0x02BD8A70, void, Initiate, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BD8ED0, void, ResetOffset, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BD90D0, void, SetToTarget, (IKEffector * __this));
IL2CPP_REGISTER_METHOD(0x02BD9270, void, OnPreSolve, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BD9D40, void, OnPostWrite, (IKEffector * __this));
IL2CPP_REGISTER_METHOD(0x02BD9DF0, Quaternion, GetPlaneRotation, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDA160, void, Update, (IKEffector * __this, IKSolverFullBody * solver));
IL2CPP_REGISTER_METHOD(0x02BDA700, Vector3, GetPosition, (IKEffector * __this, IKSolverFullBody * solver, Quaternion * planeRotationOffset));
}
