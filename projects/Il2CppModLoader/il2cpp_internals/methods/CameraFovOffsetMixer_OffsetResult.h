#include <interception_macros.h>

namespace app::methods::CameraFovOffsetMixer_OffsetResult {
IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_AdditiveFieldOfView, (CameraFovOffsetMixer_OffsetResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114F30, void, set_AdditiveFieldOfView, (CameraFovOffsetMixer_OffsetResult__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_ZCenter, (CameraFovOffsetMixer_OffsetResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155C0, void, set_ZCenter, (CameraFovOffsetMixer_OffsetResult__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00114120, bool, get_IsEmpty, (CameraFovOffsetMixer_OffsetResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00119DF0, void, set_IsEmpty, (CameraFovOffsetMixer_OffsetResult__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0013B960, Vector3, ZDisplacementFrom, (CameraFovOffsetMixer_OffsetResult__Boxed * __this, Vector3 currentPosition, float currentFov));
IL2CPP_REGISTER_METHOD(0x0013B9B0, float, GetZFactor, (CameraFovOffsetMixer_OffsetResult__Boxed * __this, float oldFov, float newFov));
}
