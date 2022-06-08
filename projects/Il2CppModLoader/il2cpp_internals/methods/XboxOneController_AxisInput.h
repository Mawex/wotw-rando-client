#include <interception_macros.h>

namespace app::methods::XboxOneController_AxisInput {
IL2CPP_REGISTER_METHOD(0x00597BC0, void, __ctor, (XboxOneController_AxisInput * __this, XboxOneController_Axis__Enum axis, bool anyPad));
IL2CPP_REGISTER_METHOD(0x00420EE0, XboxOneController_Axis__Enum, get_Axis, (XboxOneController_AxisInput * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetValue, (XboxOneController_AxisInput * __this));
}
