#include <interception_macros.h>

namespace app::methods::NumericDebugMenuItem_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (NumericDebugMenuItem_1_System_Object_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (NumericDebugMenuItem_1_System_Object_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (NumericDebugMenuItem_1_System_Object_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_Value, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Value, (NumericDebugMenuItem_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_String_ *, get_DynamicText, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (NumericDebugMenuItem_1_System_Object_ * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D12330, void, __ctor, (NumericDebugMenuItem_1_System_Object_ * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x01D13690, bool, Draw, (NumericDebugMenuItem_1_System_Object_ * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D125E0, void, OnSelectedFixedUpdate, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D12600, void, ResetHold, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D12610, void, UpdateHold, (NumericDebugMenuItem_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D138B0, void, __ctor, (NumericDebugMenuItem_1_System_Object_ * __this, String * path, String * text, Func_1_Object_ * getter, Action_1_Object_ * setter, Object * min, Object * max, Object * _speed, String * help, Func_1_String_ * textGetter, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHOD(0x01D13AA0, void, UpdateWithSetter, (NumericDebugMenuItem_1_System_Object_ * __this));
}
