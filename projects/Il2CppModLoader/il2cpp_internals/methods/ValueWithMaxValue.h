#include <interception_macros.h>

namespace app::methods::ValueWithMaxValue {
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Value, (ValueWithMaxValue * __this));
IL2CPP_REGISTER_METHOD(0x013B9120, void, set_Value, (ValueWithMaxValue * __this, float value));
IL2CPP_REGISTER_METHOD(0x013B9160, bool, get_ValueIsMax, (ValueWithMaxValue * __this));
IL2CPP_REGISTER_METHOD(0x013B9180, void, add_ValueChanged, (ValueWithMaxValue * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x013B9270, void, remove_ValueChanged, (ValueWithMaxValue * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x013B9360, void, Serialize, (ValueWithMaxValue * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x013B9390, void, Awake, (ValueWithMaxValue * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (ValueWithMaxValue * __this));
}
