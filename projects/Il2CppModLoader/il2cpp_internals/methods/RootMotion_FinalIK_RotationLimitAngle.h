using namespace app;

namespace app::methods::RootMotion::FinalIK::RotationLimitAngle {
IL2CPP_REGISTER_METHOD(0x02A21000, void, OpenUserManual, (RotationLimitAngle * __this));
IL2CPP_REGISTER_METHOD(0x02A210C0, void, OpenScriptReference, (RotationLimitAngle * __this));
IL2CPP_REGISTER_METHOD(0x02A21180, void, SupportGroup, (RotationLimitAngle * __this));
IL2CPP_REGISTER_METHOD(0x02A21240, void, ASThread, (RotationLimitAngle * __this));
IL2CPP_REGISTER_METHOD(0x02A21300, Quaternion, LimitRotation, (RotationLimitAngle * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A213C0, Quaternion, LimitSwing, (RotationLimitAngle * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A217F0, void, __ctor, (RotationLimitAngle * __this));
}
