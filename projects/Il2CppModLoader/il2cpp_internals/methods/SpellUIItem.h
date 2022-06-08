#include <interception_macros.h>

namespace app::methods::SpellUIItem {
IL2CPP_REGISTER_METHOD(0x002FBBC0, PlayerUberStateInventory_InventoryItem *, get_Spell, (SpellUIItem * __this));
IL2CPP_REGISTER_METHOD(0x0094D730, void, Awake, (SpellUIItem * __this));
IL2CPP_REGISTER_METHOD(0x0094D760, void, SetItemContext, (SpellUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x0094D860, void, OnItemContextDirty, (SpellUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x0094D870, void, SetSpell, (SpellUIItem * __this, PlayerUberStateInventory_InventoryItem * spell));
IL2CPP_REGISTER_METHOD(0x0094D8C0, void, UpdateSpellIcon, (SpellUIItem * __this));
IL2CPP_REGISTER_METHOD(0x0094DAD0, void, UpdateSpellProperties, (SpellUIItem * __this, bool initialize));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpellUIItem * __this));
}
