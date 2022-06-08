using namespace app;

namespace app::methods::DebugMenuTogglerItem {
IL2CPP_REGISTER_METHOD(0x00DF7B50, void, __ctor, (DebugMenuTogglerItem * __this, String * path, IDebugMenuToggleable * toggleable));
IL2CPP_REGISTER_METHOD(0x00DF7B60, bool, Draw, (DebugMenuTogglerItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x00DF7E50, String *, get_Text, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Text, (DebugMenuTogglerItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00DF7EE0, String *, get_HelpText, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HelpText, (DebugMenuTogglerItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Path, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, (DebugMenuTogglerItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x00DF7F70, void, OnSelectedFixedUpdate, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x00DF8330, void, ResetHold, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x00DF8340, void, UpdateHold, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Func_1_String_ *, get_DynamicText, (DebugMenuTogglerItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DynamicText, (DebugMenuTogglerItem * __this, Func_1_String_ * value));
}
