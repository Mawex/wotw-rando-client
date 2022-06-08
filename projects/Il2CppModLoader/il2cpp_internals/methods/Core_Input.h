using namespace app;

namespace app::methods::Core::Input {
IL2CPP_REGISTER_METHOD(0x011F91E0, int32_t, get_NormalizedHorizontal, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9290, float, get_NormalizedVertical, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9350, Vector2, get_Axis, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F93E0, Vector2, get_MenuAxis, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9470, Vector2, get_AnalogAxisLeft, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9500, Vector2, get_AnalogAxisRight, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9590, Vector2, get_DigiPadAxis, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9630, Vector2, get_CursorPositionScreen, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F97F0, Vector2, get_CursorPositionUI, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F99B0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9A30, Input_InputButtonProcessor__Array *, get_Buttons, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9E80, bool, get_OnAnyButtonPressed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9F20, bool, get_AnyButtonPressed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F9FC0, bool, get_AnyButtonReleased, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011FA060, bool, get_OnAnyButtonReleased, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011FA100, void, SetAllUsed, (bool used));
IL2CPP_REGISTER_METHOD(0x011FA190, Input_InputButtonProcessor *, GetButton, (Input_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x011FA5B0, Input_InputButtonProcessor *, GetCommand, (Input_Command__Enum command));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Input_1 * __this));
}
