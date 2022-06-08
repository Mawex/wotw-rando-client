#include <interception_macros.h>

namespace app::methods::BoolDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (BoolDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (BoolDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (BoolDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00D39E90, void, __ctor, (BoolDebugMenuItem * __this, String * path, String * text, Func_1_Boolean_ * getter, Action_1_Boolean_ * setter, String * help, bool shouldShowOnlySelected));
IL2CPP_REGISTER_METHOD(0x00D39F80, void, __ctor, (BoolDebugMenuItem * __this, String * path, String * text, Func_1_Boolean_ * getter, Action_1_Boolean_ * setter, Func_1_String_ * dynamicText, String * help));
IL2CPP_REGISTER_METHOD(0x00D39FD0, bool, Draw, (BoolDebugMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00D3A290, void, OnSelectedFixedUpdate, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00D3A360, void, ToggleValue, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00D3A460, String *, GetText, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Func_1_String_ *, get_DynamicText, (BoolDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DynamicText, (BoolDebugMenuItem * __this, Func_1_String_ * value));
}
