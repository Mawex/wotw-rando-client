using namespace app;

namespace app::methods::DebugHubItem {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (DebugHubItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, Input_Button__Enum, get_ButtonBinding, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ButtonBinding, (DebugHubItem * __this, Input_Button__Enum value));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsModal, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_IsModal, (DebugHubItem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB950, Action *, get_ToggleAction, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ToggleAction, (DebugHubItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Func_1_Boolean_ *, get_IsActiveFunc, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IsActiveFunc, (DebugHubItem * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x00DED630, DebugHubItem_DebugHubItemLayout, get_Layout, (DebugHubItem * __this));
IL2CPP_REGISTER_METHOD(0x00DED650, void, set_Layout, (DebugHubItem * __this, DebugHubItem_DebugHubItemLayout value));
IL2CPP_REGISTER_METHOD(0x00DED650, void, UpdateLayout, (DebugHubItem * __this, DebugHubItem_DebugHubItemLayout layout));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DebugHubItem * __this));
}
