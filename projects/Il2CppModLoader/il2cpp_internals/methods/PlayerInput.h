using namespace app;

namespace app::methods::PlayerInput {
IL2CPP_REGISTER_METHOD(0x014111C0, void, ClearControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddXboxOneControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddSwitchControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01411A70, void, AddControllerControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01414010, void, AddKeyboardControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x014149F0, void, AddKeyCodesToButtonInput, (PlayerInput * __this, KeyCode__Enum__Array * keyCodes, CompoundButtonInput * buttonInput));
IL2CPP_REGISTER_METHOD(0x01414C70, void, Awake, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01416840, float, SimplifyAxis, (PlayerInput * __this, float x));
IL2CPP_REGISTER_METHOD(0x014168F0, void, ApplyDeadzone, (PlayerInput * __this, float * x, float * y, float deadZone));
IL2CPP_REGISTER_METHOD(0x01416A40, void, FixedUpdate, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01417880, void, RefreshControls, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418100, void, RefreshControlScheme, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418300, void, InitInputCache, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418750, void, RefreshLastPressedButton, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418900, bool, get_WasKeyboardUsedLast, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x014189C0, bool, get_IsUsingMouse, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418A80, bool, get_WasKeyboardKeyUsedLast, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01418A90, bool, KeyboardUsedLast, (PlayerInput * __this, IButtonInput * iButtonInput));
IL2CPP_REGISTER_METHOD(0x01418C90, bool, KeyboardUsedLast, (PlayerInput * __this, IAxisInput * iAxisInput));
IL2CPP_REGISTER_METHOD(0x01418EC0, bool, IsAnyStartPressed, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x01419290, void, __ctor, (PlayerInput * __this));
IL2CPP_REGISTER_METHOD(0x0141CBF0, void, __cctor, (MethodInfo * method));
}
