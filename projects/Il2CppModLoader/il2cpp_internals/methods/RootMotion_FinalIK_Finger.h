#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Finger {
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_initiated, (Finger * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_initiated, (Finger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020615B0, Vector3, get_IKPosition, (Finger * __this));
IL2CPP_REGISTER_METHOD(0x020615E0, void, set_IKPosition, (Finger * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x02061610, Quaternion, get_IKRotation, (Finger * __this));
IL2CPP_REGISTER_METHOD(0x02061640, void, set_IKRotation, (Finger * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x02061660, bool, IsValid, (Finger * __this, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x020617A0, void, Initiate, (Finger * __this, Transform * hand, int32_t index));
IL2CPP_REGISTER_METHOD(0x02061E50, void, FixTransforms, (Finger * __this));
IL2CPP_REGISTER_METHOD(0x02062000, void, Update, (Finger * __this, float masterWeight));
IL2CPP_REGISTER_METHOD(0x004FBE40, void, __ctor, (Finger * __this));
}
