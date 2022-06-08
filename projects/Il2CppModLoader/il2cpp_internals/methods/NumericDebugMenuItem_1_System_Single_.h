#include <interception_macros.h>

namespace app::methods::NumericDebugMenuItem_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (NumericDebugMenuItem_1_System_Single_ * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047759C8, NumericDebugMenuItem_1_System_Single__set_HelpText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (NumericDebugMenuItem_1_System_Single_ * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472C348, NumericDebugMenuItem_1_System_Single__set_Text__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Value, (NumericDebugMenuItem_1_System_Single_ * __this, float value));
IL2CPP_REGISTER_METHODINFO(0x04759D68, NumericDebugMenuItem_1_System_Single__set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12FB0, void, UpdateHold, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04775D50, NumericDebugMenuItem_1_System_Single__UpdateHold__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12FA0, void, ResetHold, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04762300, NumericDebugMenuItem_1_System_Single__ResetHold__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04752C08, NumericDebugMenuItem_1_System_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D12330, void, __ctor, (NumericDebugMenuItem_1_System_Single_ * __this, String * path, String * text));
IL2CPP_REGISTER_METHODINFO(0x0474F1C0, NumericDebugMenuItem_1_System_Single___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D14240, void, __ctor, (NumericDebugMenuItem_1_System_Single_ * __this, String * path, String * text, Func_1_Single_ * getter, Action_1_Single_ * setter, float min, float max, float _speed, String * help, Func_1_String_ * textGetter, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHODINFO(0x04717578, NumericDebugMenuItem_1_System_Single___ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Value, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047814A8, NumericDebugMenuItem_1_System_Single__get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (NumericDebugMenuItem_1_System_Single_ * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04760288, NumericDebugMenuItem_1_System_Single__set_Path__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x01D13FF0, bool, Draw, (NumericDebugMenuItem_1_System_Single_ * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_String_ *, get_DynamicText, (NumericDebugMenuItem_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (NumericDebugMenuItem_1_System_Single_ * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x01D14440, void, UpdateWithSetter, (NumericDebugMenuItem_1_System_Single_ * __this));
}
