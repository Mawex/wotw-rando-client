#include <interception_macros.h>

namespace app::methods::NumericDebugMenuItem_1_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EC18, NumericDebugMenuItem_1_System_Int32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12330, void, __ctor, (NumericDebugMenuItem_1_System_Int32_ * __this, String * path, String * text));
IL2CPP_REGISTER_METHODINFO(0x04795AD8, NumericDebugMenuItem_1_System_Int32___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D13030, void, __ctor, (NumericDebugMenuItem_1_System_Int32_ * __this, String * path, String * text, Func_1_Int32_ * getter, Action_1_Int32_ * setter, int32_t min, int32_t max, int32_t _speed, String * help, Func_1_String_ * textGetter, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHODINFO(0x0474D690, NumericDebugMenuItem_1_System_Int32___ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Value, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047863C8, NumericDebugMenuItem_1_System_Int32__get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Value, (NumericDebugMenuItem_1_System_Int32_ * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04708498, NumericDebugMenuItem_1_System_Int32__set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (NumericDebugMenuItem_1_System_Int32_ * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04737138, NumericDebugMenuItem_1_System_Int32__set_HelpText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (NumericDebugMenuItem_1_System_Int32_ * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047476C0, NumericDebugMenuItem_1_System_Int32__set_Text__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12FB0, void, UpdateHold, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C068, NumericDebugMenuItem_1_System_Int32__UpdateHold__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12FA0, void, ResetHold, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B478, NumericDebugMenuItem_1_System_Int32__ResetHold__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047745D0, NumericDebugMenuItem_1_System_Int32__get_Text__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (NumericDebugMenuItem_1_System_Int32_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x01D12D50, bool, Draw, (NumericDebugMenuItem_1_System_Int32_ * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_String_ *, get_DynamicText, (NumericDebugMenuItem_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (NumericDebugMenuItem_1_System_Int32_ * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x01D13220, void, UpdateWithSetter, (NumericDebugMenuItem_1_System_Int32_ * __this));
}
