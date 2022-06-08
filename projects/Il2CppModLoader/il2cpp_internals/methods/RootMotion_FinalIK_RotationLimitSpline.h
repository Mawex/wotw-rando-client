#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::RotationLimitSpline {
IL2CPP_REGISTER_METHOD(0x02A25F10, void, OpenUserManual, (RotationLimitSpline * __this));
IL2CPP_REGISTER_METHOD(0x02A25FD0, void, OpenScriptReference, (RotationLimitSpline * __this));
IL2CPP_REGISTER_METHOD(0x02A26090, void, SupportGroup, (RotationLimitSpline * __this));
IL2CPP_REGISTER_METHOD(0x02A26150, void, ASThread, (RotationLimitSpline * __this));
IL2CPP_REGISTER_METHOD(0x02A26210, void, SetSpline, (RotationLimitSpline * __this, Keyframe__Array * keyframes));
IL2CPP_REGISTER_METHOD(0x02A26280, Quaternion, LimitRotation, (RotationLimitSpline * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A26340, Quaternion, LimitSwing, (RotationLimitSpline * __this, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A26CC0, void, __ctor, (RotationLimitSpline * __this));
}
