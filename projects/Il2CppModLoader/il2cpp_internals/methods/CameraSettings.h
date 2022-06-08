#include <interception_macros.h>

namespace app::methods::CameraSettings {
IL2CPP_REGISTER_METHOD(0x016A4E00, void, __ctor, (CameraSettings * __this, CameraSettings * settings));
IL2CPP_REGISTER_METHOD(0x016A5900, void, CopyFrom, (CameraSettings * __this, CameraSettings * settings));
IL2CPP_REGISTER_METHOD(0x016A5CC0, void, __ctor, (CameraSettings * __this, CameraSettingsAsset * settings, FogGradientController * fogGradient));
IL2CPP_REGISTER_METHOD(0x016A6AD0, Color__Array *, ConvertGradient, (Gradient * gradient));
IL2CPP_REGISTER_METHOD(0x016A6C30, void, __ctor, (CameraSettings * __this, CameraSettingsAsset * cameraSettings, Gradient * fogGradient, Gradient * multiplyFogGradient, float range));
}
