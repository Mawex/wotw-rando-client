#include <interception_macros.h>

namespace app::methods::SmartInput::AxisButtonInput {
IL2CPP_REGISTER_METHOD(0x006CA000, void, __ctor, (app::AxisButtonInput * this_ptr, app::IAxisInput * axis, app::AxisButtonInput_AxisMode__Enum axis_mode, float value));
IL2CPP_REGISTER_METHOD(0x006CA050, bool, GetValue, (app::AxisButtonInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (app::AxisButtonInput * this_ptr, app::InputCacheManager * manager));
IL2CPP_REGISTER_METHOD(0x002FB930, IAxisInput *, GetAxisInput, (app::AxisButtonInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1D0, AxisButtonInput_AxisMode__Enum, GetAxisMode, (app::AxisButtonInput * this_ptr));
}
