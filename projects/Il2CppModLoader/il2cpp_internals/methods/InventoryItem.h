#include <interception_macros.h>

namespace app::methods::InventoryItem {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsUnlocked, (InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x0063EE50, void, OnEnable, (InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x0063EF50, void, Refresh, (InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x0063F0D0, void, Activate, (InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (InventoryItem * __this));
}
