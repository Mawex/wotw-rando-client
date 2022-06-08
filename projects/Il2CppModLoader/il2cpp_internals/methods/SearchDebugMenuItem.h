#include <interception_macros.h>

namespace app::methods::SearchDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (SearchDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Text, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (SearchDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_HelpText, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (SearchDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0106A150, void, __ctor, (SearchDebugMenuItem * __this, String * path));
IL2CPP_REGISTER_METHOD(0x0106A3A0, bool, Draw, (SearchDebugMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x0106A760, void, OnSelectedFixedUpdate, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x0106A7C0, void, RefreshSearch, (SearchDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x0106AC70, void, Search, (SearchDebugMenuItem * __this, String * text));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Func_1_String_ *, get_DynamicText, (SearchDebugMenuItem * __this));
}
