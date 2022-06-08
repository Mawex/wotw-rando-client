#include <interception_macros.h>

namespace app::methods::EquipmentUIInventoryGrid {
IL2CPP_REGISTER_METHOD(0x009781A0, CleverMenuItemSelectionManager *, get_NavigationManager, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_NavigationManager, (EquipmentUIInventoryGrid * __this, CleverMenuItemSelectionManager * value));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsActive, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x00978280, void, set_IsActive, (EquipmentUIInventoryGrid * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00978310, void, FixedUpdate, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x00978330, void, Configure, (EquipmentUIInventoryGrid * __this, GameObject * itemPrefab, GameObject * ItemHighlightGO, Action_1_UnityEngine_GameObject_ * OnNewItemInstantiated));
IL2CPP_REGISTER_METHOD(0x00978280, void, SetIsActive, (EquipmentUIInventoryGrid * __this, bool active));
IL2CPP_REGISTER_METHOD(0x00978350, void, SetCurrentItem, (EquipmentUIInventoryGrid * __this, int32_t index, bool runActions));
IL2CPP_REGISTER_METHOD(0x009783B0, void, UpdateSelection, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x009784D0, void, UpdateItemHighlight, (EquipmentUIInventoryGrid * __this, EquipmentUIInventoryItem * item));
IL2CPP_REGISTER_METHOD(0x009788E0, void, UpdateScrolling, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x00978CC0, bool, CheckParent, (EquipmentUIInventoryGrid * __this, Transform * parent, Transform * highlight));
IL2CPP_REGISTER_METHOD(0x00978E90, void, ResetScrolling, (EquipmentUIInventoryGrid * __this));
IL2CPP_REGISTER_METHOD(0x009791E0, void, Populate, (EquipmentUIInventoryGrid * __this, List_1_System_Object_ * inventoryItems, Object * gridContext, bool runActions));
IL2CPP_REGISTER_METHOD(0x00979D40, void, PopulateUsingCache, (EquipmentUIInventoryGrid * __this, List_1_System_Object_ * inventoryItems, Object * gridContext, bool runActions));
IL2CPP_REGISTER_METHOD(0x00979FF0, void, GetRowAndCol, (EquipmentUIInventoryGrid * __this, int32_t index, int32_t * col, int32_t * row));
IL2CPP_REGISTER_METHOD(0x0097A040, void, UpdateItemProperties, (EquipmentUIInventoryGrid * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x0097A270, void, __ctor, (EquipmentUIInventoryGrid * __this));
}
