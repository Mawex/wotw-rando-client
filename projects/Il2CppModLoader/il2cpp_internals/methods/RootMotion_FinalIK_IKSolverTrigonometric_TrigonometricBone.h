using namespace app;

namespace app::methods::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone {
IL2CPP_REGISTER_METHOD(0x02A05EA0, void, Initiate, (IKSolverTrigonometric_TrigonometricBone * __this, Vector3 childPosition, Vector3 bendNormal));
IL2CPP_REGISTER_METHOD(0x02A06270, Quaternion, GetRotation, (IKSolverTrigonometric_TrigonometricBone * __this, Vector3 direction, Vector3 bendNormal));
IL2CPP_REGISTER_METHOD(0x02A06580, Vector3, GetBendNormalFromCurrentRotation, (IKSolverTrigonometric_TrigonometricBone * __this));
IL2CPP_REGISTER_METHOD(0x02A066F0, void, __ctor, (IKSolverTrigonometric_TrigonometricBone * __this));
}
