#include <interception_macros.h>

namespace app::methods::uWintab::Lib {
IL2CPP_REGISTER_METHOD(0x00F72B30, bool, IsAvailable, ());
IL2CPP_REGISTER_METHOD(0x00F72BC0, void, Initialize, ());
IL2CPP_REGISTER_METHOD(0x00F72C50, void, Finalize, ());
IL2CPP_REGISTER_METHOD(0x00F72CE0, void, GetDeviceName, (StringBuilder * buf, int32_t len));
IL2CPP_REGISTER_METHOD(0x00F72EC0, bool, IsPressureSupported, ());
IL2CPP_REGISTER_METHOD(0x00F72F50, bool, IsWheelSupported, ());
IL2CPP_REGISTER_METHOD(0x00F72FE0, bool, IsOrientationSupported, ());
IL2CPP_REGISTER_METHOD(0x00F73070, bool, IsExpKeysSupported, ());
IL2CPP_REGISTER_METHOD(0x00F73100, void, GetVersion, (StringBuilder * buf, int32_t len));
IL2CPP_REGISTER_METHOD(0x00F732E0, int32_t, GetDeviceNum, ());
IL2CPP_REGISTER_METHOD(0x00F73370, int32_t, GetExpKeyNum, (int32_t tabletId));
IL2CPP_REGISTER_METHOD(0x00F73410, float, GetX, ());
IL2CPP_REGISTER_METHOD(0x00F734A0, float, GetY, ());
IL2CPP_REGISTER_METHOD(0x00F73530, float, GetPressure, ());
IL2CPP_REGISTER_METHOD(0x00F735C0, float, GetWheel, ());
IL2CPP_REGISTER_METHOD(0x00F73650, float, GetAzimuth, ());
IL2CPP_REGISTER_METHOD(0x00F736E0, float, GetAltitude, ());
IL2CPP_REGISTER_METHOD(0x00F73770, float, GetTwist, ());
IL2CPP_REGISTER_METHOD(0x00F73800, int32_t, GetPenId, ());
IL2CPP_REGISTER_METHOD(0x00F73890, CursorType__Enum, GetCursor, ());
IL2CPP_REGISTER_METHOD(0x00F73920, int32_t, GetTime, ());
IL2CPP_REGISTER_METHOD(0x00F739B0, bool, GetProximity, ());
IL2CPP_REGISTER_METHOD(0x00F73A40, bool, GetButton, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F73AE0, bool, GetButtonDown, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F73B80, bool, GetButtonUp, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F73C20, bool, GetExpKey, (int32_t tabletId, int32_t controlId));
IL2CPP_REGISTER_METHOD(0x00F73CD0, bool, GetExpKeyDown, (int32_t tabletId, int32_t controlId));
IL2CPP_REGISTER_METHOD(0x00F73D80, bool, GetExpKeyUp, (int32_t tabletId, int32_t controlId));
IL2CPP_REGISTER_METHOD(0x00F73E30, String *, GetDeviceName, ());
IL2CPP_REGISTER_METHOD(0x00F73FB0, String *, GetVersion, ());
}
