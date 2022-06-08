#include <interception_macros.h>

namespace app::methods::EquipmentUIDetails {
IL2CPP_REGISTER_METHOD(0x00977730, void, Awake, (EquipmentUIDetails * __this));
IL2CPP_REGISTER_METHOD(0x00977740, void, OnNewItemHighlighted, (EquipmentUIDetails * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHOD(0x00977800, void, Show, (EquipmentUIDetails * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (EquipmentUIDetails * __this));
IL2CPP_REGISTER_METHOD(0x009778D0, void, SetItem, (EquipmentUIDetails * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x009779D0, void, UpdateContext, (EquipmentUIDetails * __this));
IL2CPP_REGISTER_METHOD(0x00977D30, void, __ctor, (EquipmentUIDetails * __this));
}
