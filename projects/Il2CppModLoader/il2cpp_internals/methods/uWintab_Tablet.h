using namespace app;

namespace app::methods::uWintab::Tablet {
IL2CPP_REGISTER_METHOD(0x00F74130, bool, get_Initialized, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F741B0, void, set_Initialized, (bool value));
IL2CPP_REGISTER_METHOD(0x00F74240, void, InitializeTablet, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F742D0, void, FinalizeTablet, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F72B30, bool, get_IsAvailable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F74360, String *, get_DeviceName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F74370, String *, get_Version, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F72EC0, bool, get_IsPressureSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F72F50, bool, get_IsWheelSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F72FE0, bool, get_IsOrientationSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73070, bool, get_IsExpKeysSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F732E0, int32_t, get_DeviceNum, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F74380, int32_t, get_ExpKeyNum, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73410, float, get_X, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F734A0, float, get_Y, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73530, float, get_Pressure, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F735C0, float, get_Wheel, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73650, float, get_Azimuth, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F736E0, float, get_Altitude, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73770, float, get_Twist, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73800, int32_t, get_PenId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73890, CursorType__Enum, get_Cursor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F73920, int32_t, get_Time, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F739B0, bool, get_Proximity, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F74390, int32_t, GetExpKeyNum, (int32_t tabletId));
IL2CPP_REGISTER_METHOD(0x00F73A40, bool, GetButton, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F73AE0, bool, GetButtonDown, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F73B80, bool, GetButtonUp, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743A0, bool, GetExpKey, (int32_t tabletId, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743B0, bool, GetExpKey, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743C0, bool, GetExpKeyDown, (int32_t tabletId, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743D0, bool, GetExpKeyDown, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743E0, bool, GetExpKeyUp, (int32_t tabletId, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F743F0, bool, GetExpKeyUp, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00F74400, String *, Info, (MethodInfo * method));
}
