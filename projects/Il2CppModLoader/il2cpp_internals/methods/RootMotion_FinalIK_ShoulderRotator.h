#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::ShoulderRotator {
IL2CPP_REGISTER_METHOD(0x02A26CD0, void, Start, (ShoulderRotator * __this));
IL2CPP_REGISTER_METHOD(0x02A26EA0, void, RotateShoulders, (ShoulderRotator * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B7F0, ShoulderRotator_RotateShoulders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A27000, void, RotateShoulder, (ShoulderRotator * __this, FullBodyBipedChain__Enum chain, float weight, float offset));
IL2CPP_REGISTER_METHOD(0x02A27B20, IKMapping_BoneMap *, GetParentBoneMap, (ShoulderRotator * __this, FullBodyBipedChain__Enum chain));
IL2CPP_REGISTER_METHOD(0x02A27C30, void, OnDestroy, (ShoulderRotator * __this));
IL2CPP_REGISTER_METHOD(0x02A27E20, void, __ctor, (ShoulderRotator * __this));
}
