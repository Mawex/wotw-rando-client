#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::RotationLimitAngle {
IL2CPP_REGISTER_METHOD(0x02A21000, void, OpenUserManual, (app::RotationLimitAngle * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A210C0, void, OpenScriptReference, (app::RotationLimitAngle * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21180, void, SupportGroup, (app::RotationLimitAngle * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21240, void, ASThread, (app::RotationLimitAngle * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21300, Quaternion, LimitRotation, (app::RotationLimitAngle * this_ptr, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A213C0, Quaternion, LimitSwing, (app::RotationLimitAngle * this_ptr, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A217F0, void, __ctor, (app::RotationLimitAngle * this_ptr));
}
