using namespace app;

namespace app::methods::Vector2DebugMenuItem {
IL2CPP_REGISTER_METHOD(0x00F28570, Vector2, get_Value, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x010655B0, void, set_Value, (Vector2DebugMenuItem * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x013BAA00, void, __ctor, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x013BAA90, void, __ctor, (Vector2DebugMenuItem * __this, String * path, String * str));
IL2CPP_REGISTER_METHOD(0x013BAB40, bool, Draw, (Vector2DebugMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (Vector2DebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Func_1_String_ *, get_DynamicText, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DynamicText, (Vector2DebugMenuItem * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_HelpText, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_HelpText, (Vector2DebugMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Path, (Vector2DebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Path, (Vector2DebugMenuItem * __this, String * value));
}
