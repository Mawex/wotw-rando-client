#include <interception_macros.h>

namespace app::methods::UnityEngine::JointDrive {
IL2CPP_REGISTER_METHOD(0x00002890, void, set_mode, (JointDrive__Boxed * __this, JointDriveMode__Enum value));
IL2CPP_REGISTER_METHOD(0x001EB400, float, get_positionSpring, (JointDrive__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114F30, void, set_positionSpring, (JointDrive__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001EB410, float, get_positionDamper, (JointDrive__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155C0, void, set_positionDamper, (JointDrive__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_maximumForce, (JointDrive__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B30, void, set_maximumForce, (JointDrive__Boxed * __this, float value));
}
