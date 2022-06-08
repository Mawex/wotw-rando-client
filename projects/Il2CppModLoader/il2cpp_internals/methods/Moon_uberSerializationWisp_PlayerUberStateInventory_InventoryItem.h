#include <interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateInventory_InventoryItem {
IL2CPP_REGISTER_METHOD(0x00F3E1C0, void, __ctor, (PlayerUberStateInventory_InventoryItem * __this, EquipmentType__Enum type, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F3E4A0, void, __ctor, (PlayerUberStateInventory_InventoryItem * __this, UberStateArchive * archive, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x002FC6D0, EquipmentType__Enum, get_Type, (PlayerUberStateInventory_InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x00F3E760, void, set_Type, (PlayerUberStateInventory_InventoryItem * __this, EquipmentType__Enum value));
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_IsNew, (PlayerUberStateInventory_InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x00F3E790, void, set_IsNew, (PlayerUberStateInventory_InventoryItem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_Gained, (PlayerUberStateInventory_InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x00F3E7C0, void, set_Gained, (PlayerUberStateInventory_InventoryItem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F3E7F0, bool, get_UsesEnergy, (PlayerUberStateInventory_InventoryItem * __this));
IL2CPP_REGISTER_METHOD(0x00F3E8E0, bool, UsesEnergyCheck, (PlayerUberStateInventory_InventoryItem * __this, EquipmentType__Enum type));
IL2CPP_REGISTER_METHOD(0x00F3E9D0, void, Serialize, (PlayerUberStateInventory_InventoryItem * __this, UberStateArchive * ar));
IL2CPP_REGISTER_METHOD(0x00F3EA60, void, RunSetDirtyCallback, (PlayerUberStateInventory_InventoryItem * __this));
}
