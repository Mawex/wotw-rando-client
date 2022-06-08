#include <interception_macros.h>

namespace app::methods::RootMotion::QuaTools {
IL2CPP_REGISTER_METHOD(0x02A2C380, Quaternion, LinearBlend, (Quaternion q, float weight));
IL2CPP_REGISTER_METHOD(0x02A2C590, Quaternion, SphericalBlend, (Quaternion q, float weight));
IL2CPP_REGISTER_METHOD(0x02A2C7A0, Quaternion, FromToAroundAxis, (Vector3 fromDirection, Vector3 toDirection, Vector3 axis));
IL2CPP_REGISTER_METHOD(0x02A2CA60, Quaternion, RotationToLocalSpace, (Quaternion space, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A2CCB0, Quaternion, FromToRotation, (Quaternion from, Quaternion to));
IL2CPP_REGISTER_METHOD(0x02A2CF50, Vector3, GetAxis, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x02A2D320, Quaternion, ClampRotation, (Quaternion rotation, float clampWeight, int32_t clampSmoothing));
IL2CPP_REGISTER_METHOD(0x02A2D5D0, float, ClampAngle, (float angle, float clampWeight, int32_t clampSmoothing));
}
