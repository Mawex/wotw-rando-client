using namespace app;

namespace app::methods::ActionDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, __ctor, (ActionDebugMenuItem * __this, String * path));
IL2CPP_REGISTER_METHOD(0x004C49E0, void, __ctor, (ActionDebugMenuItem * __this, String * path, String * name, Func_1_Boolean_ * func));
IL2CPP_REGISTER_METHOD(0x004C4A90, void, __ctor, (ActionDebugMenuItem * __this, String * path, String * name, String * helpText, Func_1_Boolean_ * func));
IL2CPP_REGISTER_METHOD(0x004C4B50, bool, Draw, (ActionDebugMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x004C4CE0, void, OnSelected, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x004C4CF0, void, OnSelectedFixedUpdate, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Func_1_String_ *, get_DynamicText, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DynamicText, (ActionDebugMenuItem * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (ActionDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_HelpText, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_HelpText, (ActionDebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Path, (ActionDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Path, (ActionDebugMenuItem * __this, String * value));
}
