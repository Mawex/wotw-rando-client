#include <interception_macros.h>

namespace app::methods::ButtonIconUtility {
IL2CPP_REGISTER_METHOD(0x0081E660, String *, KeyCodeToString, (KeyCode__Enum keyCode));
IL2CPP_REGISTER_METHOD(0x0081E8C0, String *, ControllerButtonToString, (XboxControllerInput_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081EAB0, String *, SwitchButtonToString, (Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081ECA0, String *, XboxOneControllerButtonToString, (XboxOneController_Button__Enum button));
IL2CPP_REGISTER_METHOD(0x0081EE90, String *, XboxOneControllerAxisToString, (XboxOneController_Axis__Enum axis));
IL2CPP_REGISTER_METHOD(0x0081F080, String *, SwitchControllerAxisToString, (Axis__Enum_1 axis));
IL2CPP_REGISTER_METHOD(0x0081F270, String *, GetButtonString, (KeyCodeButtonInput * keyCodeButtonInput));
IL2CPP_REGISTER_METHOD(0x0081F320, String *, GetButtonString, (XboxOneController_ButtonInput * xboxOneButtonInput));
IL2CPP_REGISTER_METHOD(0x0081F3D0, String *, GetAxisString, (XboxOneController_AxisInput * xboxOneAxisInput));
IL2CPP_REGISTER_METHOD(0x0081F480, String *, GetSwitchAxisString, (AxisInput * switchAxisInput));
IL2CPP_REGISTER_METHOD(0x0081F530, String *, GetButtonString, (ControllerButtonInput * controllerButtonInput));
IL2CPP_REGISTER_METHOD(0x0081F5E0, String *, GetButtonString, (AxisButtonInput * axisButtonInput));
IL2CPP_REGISTER_METHOD(0x0081F660, String *, GetSwitchButtonString, (AxisButtonInput * axisButtonInput));
IL2CPP_REGISTER_METHOD(0x0081F740, String *, GetButtonString, (ButtonInput * buttonInput));
IL2CPP_REGISTER_METHOD(0x0081F7D0, String *, GetAxisIcon, (IAxisInput * axisInput, bool positive));
IL2CPP_REGISTER_METHOD(0x0081FAC0, String *, GetButtonString, (CompoundButtonInput * compoundButtonInput));
IL2CPP_REGISTER_METHOD(0x0081FD70, String *, GetNeutralLeftAxis, ());
IL2CPP_REGISTER_METHOD(0x0081FDF0, String *, GetIconDigiPad, ());
IL2CPP_REGISTER_METHOD(0x0081FE70, String *, GetIconKeyboardNavigationArrows, ());
IL2CPP_REGISTER_METHOD(0x0081FEF0, String *, GetIconMouseNavigation, ());
IL2CPP_REGISTER_METHOD(0x0081FF70, String *, GetIconAnalogueStick, ());
IL2CPP_REGISTER_METHOD(0x0081FFF0, void, __cctor, ());
}
