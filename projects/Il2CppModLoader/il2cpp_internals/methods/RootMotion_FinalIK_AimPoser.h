using namespace app;

namespace app::methods::RootMotion::FinalIK::AimPoser {
IL2CPP_REGISTER_METHOD(0x0204DC50, AimPoser_Pose *, GetPose, (AimPoser * __this, Vector3 localDirection));
IL2CPP_REGISTER_METHOD(0x0204DDA0, void, SetPoseActive, (AimPoser * __this, AimPoser_Pose * pose));
IL2CPP_REGISTER_METHOD(0x0204DE30, void, __ctor, (AimPoser * __this));
}
