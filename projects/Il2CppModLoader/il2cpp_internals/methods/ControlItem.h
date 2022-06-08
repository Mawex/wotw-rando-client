#include <interception_macros.h>

namespace app::methods::ControlItem {
IL2CPP_REGISTER_METHOD(0x011E8210, void, __ctor, (ControlItem * __this, CommandBinding * binding));
IL2CPP_REGISTER_METHOD(0x011E83E0, KeyCode__Enum__Array *, GetModifiedKeys, (ControlItem * __this));
IL2CPP_REGISTER_METHOD(0x011E84C0, void, AssignFromCommandInputButton, (ControlItem * __this));
IL2CPP_REGISTER_METHOD(0x011E8860, KeyCode__Enum, GetProposedKey, (ControlItem * __this, int32_t subIndex));
IL2CPP_REGISTER_METHOD(0x011E8990, bool, SetProposedKey, (ControlItem * __this, int32_t subIndex, KeyCode__Enum code));
IL2CPP_REGISTER_METHOD(0x011E8B80, bool, AddProposedKey, (ControlItem * __this, KeyCode__Enum code));
IL2CPP_REGISTER_METHOD(0x011E8E50, bool, RemoveKey, (ControlItem * __this, KeyCode__Enum code));
IL2CPP_REGISTER_METHOD(0x011E8F00, bool, UnbindIndex, (ControlItem * __this, int32_t subIndex));
IL2CPP_REGISTER_METHOD(0x011E8F10, void, UndoChanges, (ControlItem * __this));
IL2CPP_REGISTER_METHOD(0x011E9020, bool, IsChanged, (ControlItem * __this));
IL2CPP_REGISTER_METHOD(0x011E90A0, bool, ResetToDefault, (ControlItem * __this));
}
