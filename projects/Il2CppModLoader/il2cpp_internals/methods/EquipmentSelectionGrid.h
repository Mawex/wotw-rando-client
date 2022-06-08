#include <interception_macros.h>

namespace app::methods::EquipmentSelectionGrid {
IL2CPP_REGISTER_METHOD(0x00976AA0, void, UpdateItemProperties, (EquipmentSelectionGrid * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00976C90, void, Populate, (EquipmentSelectionGrid * __this, List_1_System_Object_ * inventoryItems, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00977150, EquipmentSelectionGrid_EquipmentAnchorGroup *, GetGroup, (EquipmentSelectionGrid * __this, Object * inventoryItem));
IL2CPP_REGISTER_METHOD(0x009773A0, void, ResetItems, (EquipmentSelectionGrid * __this));
IL2CPP_REGISTER_METHOD(0x009775D0, void, __ctor, (EquipmentSelectionGrid * __this));
}
