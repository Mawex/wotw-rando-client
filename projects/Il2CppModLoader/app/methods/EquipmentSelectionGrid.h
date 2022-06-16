#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EquipmentSelectionGrid {
    IL2CPP_REGISTER_METHOD(0x00976AA0, void, UpdateItemProperties, (app::EquipmentSelectionGrid * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x00976C90, void, Populate, (app::EquipmentSelectionGrid * this_ptr, app::List_1_System_Object_ * inventory_items, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x00977150, app::EquipmentSelectionGrid_EquipmentAnchorGroup *, GetGroup, (app::EquipmentSelectionGrid * this_ptr, app::Object * inventory_item))
    IL2CPP_REGISTER_METHOD(0x009773A0, void, ResetItems, (app::EquipmentSelectionGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009775D0, void, ctor, (app::EquipmentSelectionGrid * this_ptr))
}
