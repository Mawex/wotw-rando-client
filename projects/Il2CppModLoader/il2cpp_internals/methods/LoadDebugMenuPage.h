#include <interception_macros.h>

namespace app::methods::LoadDebugMenuPage {
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ColumnOffset, (LoadDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (LoadDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00FB27F0, void, Awake, (LoadDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00FB2890, void, GetItems, (LoadDebugMenuPage * __this, List_1_List_1_IDebugMenuItem_ * items));
IL2CPP_REGISTER_METHOD(0x00FB2E80, void, Load, (LoadDebugMenuPage * __this, String * file));
IL2CPP_REGISTER_METHOD(0x00FB31A0, void, PopulateSaves, (LoadDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00FB3650, void, PopulateFromDirectory, (LoadDebugMenuPage * __this, String * directory, String * prepend));
IL2CPP_REGISTER_METHOD(0x00FB3C10, void, __ctor, (LoadDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
