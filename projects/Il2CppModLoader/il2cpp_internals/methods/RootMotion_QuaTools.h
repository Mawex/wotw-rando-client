#include <interception_macros.h>

namespace app::methods::RootMotion::QuaTools {
IL2CPP_REGISTER_METHOD(0x02A2C380, Quaternion, LinearBlend, (app::Quaternion q, float weight));
IL2CPP_REGISTER_METHOD(0x02A2C590, Quaternion, SphericalBlend, (app::Quaternion q, float weight));
IL2CPP_REGISTER_METHOD(0x02A2C7A0, Quaternion, FromToAroundAxis, (app::Vector3 from_direction, app::Vector3 to_direction, app::Vector3 axis));
IL2CPP_REGISTER_METHOD(0x02A2CA60, Quaternion, RotationToLocalSpace, (app::Quaternion space, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A2CCB0, Quaternion, FromToRotation, (app::Quaternion from, app::Quaternion to));
IL2CPP_REGISTER_METHOD(0x02A2CF50, Vector3, GetAxis, (app::Vector3 v));
IL2CPP_REGISTER_METHOD(0x02A2D320, Quaternion, ClampRotation, (app::Quaternion rotation, float clamp_weight, int32_t clamp_smoothing));
IL2CPP_REGISTER_METHOD(0x02A2D5D0, float, ClampAngle, (float angle, float clamp_weight, int32_t clamp_smoothing));
}
