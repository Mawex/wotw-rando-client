using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolver_Bone {
IL2CPP_REGISTER_METHOD(0x02BE5490, RotationLimit *, get_rotationLimit, (IKSolver_Bone * __this));
IL2CPP_REGISTER_METHOD(0x02BE55B0, void, set_rotationLimit, (IKSolver_Bone * __this, RotationLimit * value));
IL2CPP_REGISTER_METHOD(0x02BE5670, void, Swing, (IKSolver_Bone * __this, Vector3 swingTarget, float weight));
IL2CPP_REGISTER_METHOD(0x02BE5E80, void, SolverSwing, (IKSolver_Bone * __this, IKSolver_Bone__Array * bones, int32_t index, Vector3 swingTarget, float weight));
IL2CPP_REGISTER_METHOD(0x02BE62D0, void, Swing2D, (IKSolver_Bone * __this, Vector3 swingTarget, float weight));
IL2CPP_REGISTER_METHOD(0x02BE6770, Quaternion, GetSolverSwing, (IKSolver_Bone * __this, Vector3 swingTarget, float weight));
IL2CPP_REGISTER_METHOD(0x02BE6B40, void, SetToSolverPosition, (IKSolver_Bone * __this));
IL2CPP_REGISTER_METHOD(0x02BE6BC0, void, __ctor, (IKSolver_Bone * __this));
IL2CPP_REGISTER_METHOD(0x02BE6CB0, void, __ctor, (IKSolver_Bone * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02BE6DB0, void, __ctor, (IKSolver_Bone * __this, Transform * transform, float weight));
}
