using namespace app;

namespace app::methods::TextDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (TextDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010E7BB0, String *, get_Text, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (TextDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x010E7C40, String *, get_HelpText, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_HelpText, (TextDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x010E7CD0, void, __ctor, (TextDebugMenuItem * __this, String * path, String * text, String * helpText, Func_1_String_ * textGetter, Func_1_String_ * helpGetter));
IL2CPP_REGISTER_METHOD(0x010E7CF0, void, __ctor, (TextDebugMenuItem * __this, String * path, String * text, String * helpText, Func_1_String_ * helpGetter));
IL2CPP_REGISTER_METHOD(0x010E7D10, void, __ctor, (TextDebugMenuItem * __this, String * path, Func_1_String_ * textGetter, String * helpText, Func_1_String_ * helpGetter));
IL2CPP_REGISTER_METHOD(0x010E7D30, bool, Draw, (TextDebugMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_String_ *, get_DynamicText, (TextDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DynamicText, (TextDebugMenuItem * __this, Func_1_String_ * value));
}
