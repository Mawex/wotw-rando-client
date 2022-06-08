#include <interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateInventory {
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *, get_Inventory, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *, get_Bindings, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_ *, get_QuestItems, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Keystones, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB20, void, set_Keystones, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_MapStones, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB30, void, set_MapStones, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Experience, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB40, void, set_Experience, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_Ore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB50, void, set_Ore, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_PartialHealthContainers, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB60, void, set_PartialHealthContainers, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_PartialEnergyContainers, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB70, void, set_PartialEnergyContainers, (PlayerUberStateInventory * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_ExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB80, void, set_ExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_KeystoneHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AB90, void, set_KeystoneHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, get_EnergyOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3ABB0, void, set_EnergyOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_HealthOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3ABC0, void, set_HealthOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_SmallExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3ABD0, void, set_SmallExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00863130, bool, get_MediumExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3ABE0, void, set_MediumExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F3ABF0, bool, get_LargeExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AC00, void, set_LargeExpOrbHasBeenCollectedBefore, (PlayerUberStateInventory * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F3AC10, void, SetBinding, (PlayerUberStateInventory * __this, EquipmentType__Enum type, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00F3AD20, void, SetBinding, (PlayerUberStateInventory * __this, SpellInventory_Binding__Enum binding, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00F3AE00, void, InitializeBindings, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3AF50, void, RunSetDirtyCallback, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3B0E0, void, __ctor, (PlayerUberStateInventory * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F3BC70, PlayerUberStateInventory_InventoryItem *, GrantItem, (PlayerUberStateInventory * __this, EquipmentType__Enum type));
IL2CPP_REGISTER_METHOD(0x00F3BE30, void, ClearInventory, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3BEE0, bool, UsesEnergy, (EquipmentType__Enum type));
IL2CPP_REGISTER_METHOD(0x00F3BF40, void, GrantQuestItem, (PlayerUberStateInventory * __this, QuestItemType__Enum itemType));
IL2CPP_REGISTER_METHOD(0x00F3C0B0, bool, HasQuestItem, (PlayerUberStateInventory * __this, QuestItemType__Enum type));
IL2CPP_REGISTER_METHOD(0x00F3C250, void, Save, (PlayerUberStateInventory * __this, UberStateArchive * archive, PlayerUberStateInventory * inventory));
IL2CPP_REGISTER_METHOD(0x00F3CD90, void, Load, (PlayerUberStateInventory * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F3D910, void, OnGui, (PlayerUberStateInventory * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F3DDC0, int64_t, get_Size, (PlayerUberStateInventory * __this));
IL2CPP_REGISTER_METHOD(0x00F3DEB0, int32_t, IndexOf, (PlayerUberStateInventory * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00F3DFB0, void, __cctor, ());
}
