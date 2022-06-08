#include <interception_macros.h>

namespace app::methods::SpellInventory {
IL2CPP_REGISTER_METHOD(0x00EF8A00, PlayerUberStateInventory *, get_PlayerUberStateInventory, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EF8AE0, List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *, get_Inventory, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EF8B00, List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *, get_Bindings, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EF8B20, void, Awake, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EF8BC0, void, OnDestroy, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EF8C60, PlayerUberStateInventory_InventoryItem *, AddNewSpellToInventory, (SpellInventory * __this, EquipmentType__Enum type, bool adding));
IL2CPP_REGISTER_METHOD(0x00EF8DA0, void, OnBind, (SpellInventory_Binding__Enum binding, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00EF8F80, void, UpdateBinding, (SpellInventory * __this, SpellInventory_Binding__Enum binding, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00EF91A0, void, UpdateBinding, (SpellInventory * __this, SpellInventory_Binding__Enum binding, EquipmentType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00EF91E0, void, UnbindAllEquipment, (SpellInventory * __this, List_1_EquipmentType_ * exceptions));
IL2CPP_REGISTER_METHOD(0x00EF93A0, void, BindEquipmentInFreeSlot, (SpellInventory * __this, List_1_EquipmentType_ * items));
IL2CPP_REGISTER_METHOD(0x00EF95B0, void, UnbindItem, (SpellInventory * __this, EquipmentType__Enum item));
IL2CPP_REGISTER_METHOD(0x00EF9720, bool, HasSpell, (SpellInventory * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00EF98F0, bool, IsItemBound, (SpellInventory * __this, EquipmentType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00EF9AB0, SpellInventory_Binding__Enum, GetItemBinding, (SpellInventory * __this, EquipmentType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00EF9AF0, SpellInventory_Binding__Enum, GetItemBinding, (SpellInventory * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00EF9C20, PlayerUberStateInventory_InventoryItem *, GetActualInventoryItem, (SpellInventory * __this, EquipmentType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00EF9DE0, EquipmentType__Enum, GetBoundEquipmentType, (SpellInventory * __this, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHOD(0x00EF9EC0, int32_t, GetLevelOfShardSocketedToCurrentlyBoundEquipment, (SpellInventory * __this, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x00EF9F80, int32_t, GetLevelOfShardSocketedToCurrentlyBoundEquipmentByAbility, (SpellInventory * __this, AbilityType__Enum abilityType, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x00EF9FC0, bool, IsShardSocketedToCurrentlyBoundEquipmentByAbility, (SpellInventory * __this, AbilityType__Enum abilityType, SpiritShardType__Enum shardType));
IL2CPP_REGISTER_METHOD(0x00EFA080, void, SetReferenceToSein, (SpellInventory * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x00EFA160, Input_Command__Enum, BindingToButton, (SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x0474DD70, SpellInventory_BindingToButton__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFA230, void, ClearInventory, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EFA3E0, void, DebugAddSpells, (SpellInventory * __this, bool missingOnly, List_1_EquipmentType_ * except));
IL2CPP_REGISTER_METHOD(0x00EFA7A0, void, Apply, (SpellInventory * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_ApplyOnEditor, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, IUberState__Array *, get_AffectingUberStates, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SpellInventory * __this));
IL2CPP_REGISTER_METHOD(0x00EFA900, void, __ctor, (SpellInventory * __this));
}
