#include <interception_macros.h>

namespace app::methods::UnityEngine::CharacterJoint {
IL2CPP_REGISTER_METHOD(0x0309F1E0, void, set_swingAxis, (CharacterJoint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309F240, void, set_swingLimitSpring, (CharacterJoint * __this, SoftJointLimitSpring value));
IL2CPP_REGISTER_METHOD(0x0309F2A0, void, set_lowTwistLimit, (CharacterJoint * __this, SoftJointLimit value));
IL2CPP_REGISTER_METHOD(0x0309F300, void, set_highTwistLimit, (CharacterJoint * __this, SoftJointLimit value));
IL2CPP_REGISTER_METHOD(0x0309F360, void, set_swing1Limit, (CharacterJoint * __this, SoftJointLimit value));
IL2CPP_REGISTER_METHOD(0x0309F3C0, void, set_swing2Limit, (CharacterJoint * __this, SoftJointLimit value));
IL2CPP_REGISTER_METHOD(0x0309F420, void, set_enableProjection, (CharacterJoint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0309F480, void, set_swingAxis_Injected, (CharacterJoint * __this, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x0309F4E0, void, set_swingLimitSpring_Injected, (CharacterJoint * __this, SoftJointLimitSpring * value));
IL2CPP_REGISTER_METHOD(0x0309F540, void, set_lowTwistLimit_Injected, (CharacterJoint * __this, SoftJointLimit * value));
IL2CPP_REGISTER_METHOD(0x0309F5A0, void, set_highTwistLimit_Injected, (CharacterJoint * __this, SoftJointLimit * value));
IL2CPP_REGISTER_METHOD(0x0309F600, void, set_swing1Limit_Injected, (CharacterJoint * __this, SoftJointLimit * value));
IL2CPP_REGISTER_METHOD(0x0309F660, void, set_swing2Limit_Injected, (CharacterJoint * __this, SoftJointLimit * value));
}
