#include <interception_macros.h>

namespace app::methods::SmartInput::ControllerAxisInput {
IL2CPP_REGISTER_METHOD(0x006CB400, void, __ctor, (ControllerAxisInput * __this, XboxControllerInput_Axis__Enum axis));
IL2CPP_REGISTER_METHOD(0x006CB430, float, GetValue, (ControllerAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, XboxControllerInput_Axis__Enum, get_Axis, (ControllerAxisInput * __this));
}
