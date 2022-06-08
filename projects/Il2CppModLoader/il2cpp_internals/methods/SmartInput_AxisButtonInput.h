#include <interception_macros.h>

namespace app::methods::SmartInput::AxisButtonInput {
IL2CPP_REGISTER_METHOD(0x006CA000, void, __ctor, (AxisButtonInput * __this, IAxisInput * axis, AxisButtonInput_AxisMode__Enum axisMode, float value));
IL2CPP_REGISTER_METHOD(0x006CA050, bool, GetValue, (AxisButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (AxisButtonInput * __this, InputCacheManager * manager));
IL2CPP_REGISTER_METHOD(0x002FB930, IAxisInput *, GetAxisInput, (AxisButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, AxisButtonInput_AxisMode__Enum, GetAxisMode, (AxisButtonInput * __this));
}
