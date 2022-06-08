#include <interception_macros.h>

namespace app::methods::SpellPickup {
IL2CPP_REGISTER_METHOD(0x00943310, void, Awake, (SpellPickup * __this));
IL2CPP_REGISTER_METHOD(0x00943320, void, Initialize, (SpellPickup * __this, EquipmentType__Enum equipment, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHOD(0x00943660, void, OnCollect, (SpellPickup * __this));
IL2CPP_REGISTER_METHODINFO(0x04789EF0, SpellPickup_OnCollect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009437D0, void, __ctor, (SpellPickup * __this));
}
