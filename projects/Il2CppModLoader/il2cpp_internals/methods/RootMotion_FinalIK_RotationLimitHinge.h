using namespace app;

namespace app::methods::RootMotion::FinalIK::RotationLimitHinge {
IL2CPP_REGISTER_METHOD(0x02A21810, void, OpenUserManual, (RotationLimitHinge * __this));
IL2CPP_REGISTER_METHOD(0x02A218D0, void, OpenScriptReference, (RotationLimitHinge * __this));
IL2CPP_REGISTER_METHOD(0x02A21990, void, SupportGroup, (RotationLimitHinge * __this));
IL2CPP_REGISTER_METHOD(0x02A21A50, void, ASThread, (RotationLimitHinge * __this));
IL2CPP_REGISTER_METHOD(0x02A21B10, Quaternion, LimitRotation, (RotationLimitHinge * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A21B60, Quaternion, LimitHinge, (RotationLimitHinge * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A22030, void, __ctor, (RotationLimitHinge * __this));
}
