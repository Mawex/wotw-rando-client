#include <interception_macros.h>

namespace app::methods::CameraSettingsZone {
IL2CPP_REGISTER_METHOD(0x016A8680, CameraSettings *, GetSettings, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8860, void, ResetSettings, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8870, void, Register, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8A60, void, OnEnable, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8DA0, void, OnDisable, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8E60, float, get_Strength, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A8E80, void, Advance, (CameraSettingsZone * __this, Vector2 position, float timeDelta));
IL2CPP_REGISTER_METHOD(0x016A8FF0, float, CalculateStrengthFromPosition, (CameraSettingsZone * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00910BD0, SelectableCategory__Enum, get_Category, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A9380, void, __ctor, (CameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x016A93D0, void, __cctor, ());
}
