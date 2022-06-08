#include <interception_macros.h>

namespace app::methods::PlayerInputRebinding {
IL2CPP_REGISTER_METHOD(0x0141EFA0, PlayerInputRebinding_KeyBindingSettings *, get_KeyRebindings, ());
IL2CPP_REGISTER_METHOD(0x0141F150, void, set_KeyRebindings, (PlayerInputRebinding_KeyBindingSettings * value));
IL2CPP_REGISTER_METHOD(0x0141F210, String *, get_KeyRebindingFile, ());
IL2CPP_REGISTER_METHOD(0x0141F310, void, GetKeyRebindSettingsFromFile, ());
IL2CPP_REGISTER_METHOD(0x01420350, KeyCode__Enum__Array *, StringToKeyBinding, (String * s));
IL2CPP_REGISTER_METHOD(0x014206D0, void, WriteKeyRebindSettings, ());
IL2CPP_REGISTER_METHOD(0x01421A80, String *, KeyBindingToString, (KeyCode__Enum__Array * codes));
IL2CPP_REGISTER_METHOD(0x01421BB0, void, SetDefaultKeyBindingSettings, ());
IL2CPP_REGISTER_METHOD(0x01421C60, PlayerInputRebinding_KeyBindingSettings *, DefaultKeyBindingSettings, ());
IL2CPP_REGISTER_METHOD(0x01423AB0, String *, get_ControllerRemappingFile, ());
IL2CPP_REGISTER_METHOD(0x01423BB0, XboxControllerInput_Button__Enum, GetRemappedJoystickButton, (XboxControllerInput_Button__Enum joystickButtonIndex));
IL2CPP_REGISTER_METHOD(0x01423D90, void, GetControllerButtonRemappingsFromFile, ());
IL2CPP_REGISTER_METHOD(0x01425390, void, WriteControllerButtonRemappings, ());
IL2CPP_REGISTER_METHOD(0x01425EF0, void, RefreshControllerButtonRemappings, ());
IL2CPP_REGISTER_METHOD(0x01426040, void, SetDefaultControllerButtonRemappings, ());
IL2CPP_REGISTER_METHOD(0x01426120, int32_t, ButtonToInt, (XboxControllerInput_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayerInputRebinding * __this));
IL2CPP_REGISTER_METHOD(0x014261D0, void, __cctor, ());
}
