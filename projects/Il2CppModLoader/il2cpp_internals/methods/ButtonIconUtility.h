#include <interception_macros.h>

namespace app::methods::ButtonIconUtility {
IL2CPP_REGISTER_METHOD(0x0081E660, String *, KeyCodeToString, (app::KeyCode__Enum key_code));
IL2CPP_REGISTER_METHOD(0x0081E8C0, String *, ControllerButtonToString, (app::XboxControllerInput_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081EAB0, String *, SwitchButtonToString, (app::Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081ECA0, String *, XboxOneControllerButtonToString, (app::XboxOneController_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081EE90, String *, XboxOneControllerAxisToString, (app::XboxOneController_Axis__Enum axis));
IL2CPP_REGISTER_METHOD(0x0081F080, String *, SwitchControllerAxisToString, (app::Axis__Enum_1 axis));
IL2CPP_REGISTER_METHOD(0x0081F270, String *, GetButtonString_1, (app::KeyCodeButtonInput * key_code_button_input));
IL2CPP_REGISTER_METHOD(0x0081F320, String *, GetButtonString_2, (app::XboxOneController_ButtonInput * xbox_one_button_input));
IL2CPP_REGISTER_METHOD(0x0081F3D0, String *, GetAxisString, (app::XboxOneController_AxisInput * xbox_one_axis_input));
IL2CPP_REGISTER_METHOD(0x0081F480, String *, GetSwitchAxisString, (app::AxisInput * switch_axis_input));
IL2CPP_REGISTER_METHOD(0x0081F530, String *, GetButtonString_3, (app::ControllerButtonInput * controller_button_input));
IL2CPP_REGISTER_METHOD(0x0081F5E0, String *, GetButtonString_4, (app::AxisButtonInput * axis_button_input));
IL2CPP_REGISTER_METHOD(0x0081F660, String *, GetSwitchButtonString, (app::AxisButtonInput * axis_button_input));
IL2CPP_REGISTER_METHOD(0x0081F740, String *, GetButtonString_5, (app::ButtonInput * button_input));
IL2CPP_REGISTER_METHOD(0x0081F7D0, String *, GetAxisIcon, (app::IAxisInput * axis_input, bool positive));
IL2CPP_REGISTER_METHOD(0x0081FAC0, String *, GetButtonString_6, (app::CompoundButtonInput * compound_button_input));
IL2CPP_REGISTER_METHOD(0x0081FD70, String *, GetNeutralLeftAxis, ());
IL2CPP_REGISTER_METHOD(0x0081FDF0, String *, GetIconDigiPad, ());
IL2CPP_REGISTER_METHOD(0x0081FE70, String *, GetIconKeyboardNavigationArrows, ());
IL2CPP_REGISTER_METHOD(0x0081FEF0, String *, GetIconMouseNavigation, ());
IL2CPP_REGISTER_METHOD(0x0081FF70, String *, GetIconAnalogueStick, ());
IL2CPP_REGISTER_METHOD(0x0081FFF0, void, __cctor, ());
}
