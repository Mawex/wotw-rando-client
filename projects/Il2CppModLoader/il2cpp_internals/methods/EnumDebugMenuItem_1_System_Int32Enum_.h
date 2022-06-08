#include <interception_macros.h>

namespace app::methods::EnumDebugMenuItem_1_System::Int32Enum_ {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, String * value));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x019E1D40, void, __ctor, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, String * path, String * text, Func_1_Int32Enum_ * getter, Action_1_Int32Enum_ * setter, String * help, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHOD(0x019E1EC0, bool, Draw, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x019E2100, void, OnSelectedFixedUpdate, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x019E2350, void, ResetHold, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x019E2360, void, UpdateHold, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Func_1_String_ *, get_DynamicText, (EnumDebugMenuItem_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DynamicText, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x019E23E0, void, IncrementValue, (EnumDebugMenuItem_1_System_Int32Enum_ * __this, int32_t delta));
IL2CPP_REGISTER_METHOD(0x019E27A0, void, __cctor, ());
}
