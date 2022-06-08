using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Door {
IL2CPP_REGISTER_METHOD(0x01DD5AC0, void, add_stateChange, (Door_1 * __this, Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_ * value));
IL2CPP_REGISTER_METHOD(0x01DD5BB0, void, remove_stateChange, (Door_1 * __this, Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_ * value));
IL2CPP_REGISTER_METHOD(0x003FF610, Door_OpenState__Enum, get_State, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD5CA0, void, set_State, (Door_1 * __this, Door_OpenState__Enum value));
IL2CPP_REGISTER_METHOD(0x01DD5D40, void, Start, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD6350, void, Toggle, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD6370, void, Open, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD6420, void, Close, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD64D0, void, Update, (Door_1 * __this));
IL2CPP_REGISTER_METHOD(0x01DD6A70, void, __ctor, (Door_1 * __this));
}
