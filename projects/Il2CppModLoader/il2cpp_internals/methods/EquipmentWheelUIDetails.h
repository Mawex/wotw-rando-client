#include <interception_macros.h>

namespace app::methods::EquipmentWheelUIDetails {
IL2CPP_REGISTER_METHOD(0x00981340, void, Awake, (EquipmentWheelUIDetails * __this));
IL2CPP_REGISTER_METHOD(0x00981350, void, SetItem, (EquipmentWheelUIDetails * __this, SpellUIItem * uiItem, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x009815A0, void, UpdatePosition, (EquipmentWheelUIDetails * __this, SpellUIItem * uiItem));
IL2CPP_REGISTER_METHOD(0x00981960, void, UpdateContext, (EquipmentWheelUIDetails * __this, bool toRight));
IL2CPP_REGISTER_METHOD(0x00981CA0, void, __ctor, (EquipmentWheelUIDetails * __this));
}
