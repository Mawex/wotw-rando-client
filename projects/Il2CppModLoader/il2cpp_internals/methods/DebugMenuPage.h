#include <interception_macros.h>

namespace app::methods::DebugMenuPage {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (DebugMenuPage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_HelpText, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_HelpText, (DebugMenuPage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Active, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Active, (DebugMenuPage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_Visible, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_Visible, (DebugMenuPage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Path, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Path, (DebugMenuPage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_List_1_IDebugMenuItem_ *, get_Items, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Items, (DebugMenuPage * __this, List_1_List_1_IDebugMenuItem_ * value));
IL2CPP_REGISTER_METHOD(0x00DF3E10, void, __ctor, (DebugMenuPage * __this, String * path, String * name));
IL2CPP_REGISTER_METHOD(0x00DF3E40, void, __ctor, (DebugMenuPage * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Refresh, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF41B0, void, SetScaling, (float multiplier));
IL2CPP_REGISTER_METHOD(0x00DF4280, void, Clear, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF4560, void, AddMenuItem, (DebugMenuPage * __this, String * path, IDebugMenuItem * item, int32_t col));
IL2CPP_REGISTER_METHOD(0x00DF5160, void, CloseAllMenus, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF52E0, void, UpdateOffset, (DebugMenuPage * __this, float offsetAmount));
IL2CPP_REGISTER_METHOD(0x00DF5320, bool, Draw, (DebugMenuPage * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x00447ED0, void, OpenPage, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00651F80, void, OnSelected, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF6100, void, Reset, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF61D0, void, ResetHold, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF61E0, void, OnSelectedUpdate, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF63D0, bool, GoBackMenu, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF63E0, bool, GoBackMenu, (DebugMenuPage * __this, bool keepVisible));
IL2CPP_REGISTER_METHOD(0x00DF6520, void, OnSelectedFixedUpdate, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF6D50, bool, IsCursorIndexValid, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00DF6E20, void, ConfineCursor, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, Func_1_String_ *, get_DynamicText, (DebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DynamicText, (DebugMenuPage * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x00DF71D0, void, __cctor, ());
}
