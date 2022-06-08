#include <interception_macros.h>

namespace app::methods::SpellUISpellDetails {
IL2CPP_REGISTER_METHOD(0x009512C0, void, Awake, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHOD(0x00951610, void, OnNewItemHighlighted, (SpellUISpellDetails * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x04742C68, SpellUISpellDetails_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009516D0, void, Show, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHOD(0x009517A0, void, OnItemActivatedCallback, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHODINFO(0x04754010, SpellUISpellDetails_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00951910, void, DoAddSocket, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHOD(0x009519A0, void, SetItem, (SpellUISpellDetails * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00951AB0, void, UpdateContext, (SpellUISpellDetails * __this));
IL2CPP_REGISTER_METHOD(0x00951F20, void, __ctor, (SpellUISpellDetails * __this));
}
