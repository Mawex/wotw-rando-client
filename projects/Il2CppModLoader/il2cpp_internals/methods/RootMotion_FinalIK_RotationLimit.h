using namespace app;

namespace app::methods::RootMotion::FinalIK::RotationLimit {
IL2CPP_REGISTER_METHOD(0x02A1F900, void, SetDefaultLocalRotation, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02A1FA50, Quaternion, GetLimitedLocalRotation, (RotationLimit * __this, Quaternion localRotation, bool * changed));
IL2CPP_REGISTER_METHOD(0x02A1FE80, bool, Apply, (RotationLimit * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02A20200, void, Disable, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02A202A0, Vector3, get_secondaryAxis, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02A202C0, Vector3, get_crossAxis, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02A20400, void, Awake, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02A20640, void, LateUpdate, (RotationLimit * __this));
IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (RotationLimit * __this, String * message));
IL2CPP_REGISTER_METHOD(0x02A20650, Quaternion, Limit1DOF, (Quaternion rotation, Vector3 axis));
IL2CPP_REGISTER_METHOD(0x02A209A0, Quaternion, LimitTwist, (Quaternion rotation, Vector3 axis, Vector3 orthoAxis, float twistLimit));
IL2CPP_REGISTER_METHOD(0x02A20E40, float, GetOrthogonalAngle, (Vector3 v1, Vector3 v2, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x02A20F40, void, __ctor, (RotationLimit * __this));
}
