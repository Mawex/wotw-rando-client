#include <interception_macros.h>

namespace app::methods::EquipmentRadialSelection {
IL2CPP_REGISTER_METHOD(0x00CAB820, CleverMenuItemSelectionManager *, get_NavigationManager, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsActive, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsActive, (EquipmentRadialSelection * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CAB900, float, get_AngleStep, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAB920, bool, get_IsSpiral, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAB960, void, OnEnable, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CABC70, void, OnDisable, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CABF80, void, Awake, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAC010, void, FixedUpdate, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAC070, void, OnBindingUpdate, (EquipmentRadialSelection * __this, SpellInventory_Binding__Enum obj));
IL2CPP_REGISTER_METHODINFO(0x0476ACE0, EquipmentRadialSelection_OnBindingUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAC190, void, QueueRenderersRefresh, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAC1C0, void, Configure, (EquipmentRadialSelection * __this, GameObject * itemPrefab, GameObject * ItemHighlightGO, GameObject * PlaceholderRoot));
IL2CPP_REGISTER_METHOD(0x00CAC560, void, SetIsActive, (EquipmentRadialSelection * __this, bool active));
IL2CPP_REGISTER_METHOD(0x00CAC600, void, UpdateSelection, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAC700, void, UpdateItemHighlight, (EquipmentRadialSelection * __this, EquipmentUIInventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00CACAC0, int32_t, GetWheelIndex, (EquipmentType__Enum item));
IL2CPP_REGISTER_METHOD(0x00CACB90, void, Populate, (EquipmentRadialSelection * __this, List_1_System_Object_ * inventoryItems, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00CADBA0, void, UpdateSpiral, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CADE80, void, AdjustItemIndexForSpiral, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AD00, EquipmentRadialSelection_AdjustItemIndexForSpiral__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAE400, void, UpdateItemProperties, (EquipmentRadialSelection * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00CAE630, Vector3, DirectionToSelected, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAE760, float, SelectedAngle, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAE830, bool, get_IsSuspended, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAE840, void, set_IsSuspended, (EquipmentRadialSelection * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008468B0, SuspendableMask__Enum, get_Mask, (EquipmentRadialSelection * __this));
IL2CPP_REGISTER_METHOD(0x00CAE850, void, set_Mask, (EquipmentRadialSelection * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00CAE910, void, __ctor, (EquipmentRadialSelection * __this));
}
