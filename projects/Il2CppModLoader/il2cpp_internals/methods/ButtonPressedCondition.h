#include <interception_macros.h>

namespace app::methods::ButtonPressedCondition {
IL2CPP_REGISTER_METHOD(0x008220A0, bool, Validate, (ButtonPressedCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008222A0, bool, ValidateInput, (Input_Button__Enum button, ButtonPressedCondition_ButtonStates__Enum state));
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (ButtonPressedCondition * __this));
}
