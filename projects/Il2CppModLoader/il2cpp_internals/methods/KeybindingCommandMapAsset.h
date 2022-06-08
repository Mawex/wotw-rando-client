using namespace app;

namespace app::methods::KeybindingCommandMapAsset {
IL2CPP_REGISTER_METHOD(0x00E65250, List_1_KeybindingCommandMapAsset_ExclusiveCommandList_ *, GetExclusiveKeyLists, (KeybindingCommandMapAsset * __this, KeybindingCommandMapAsset_CommandBindingEnum__Enum bind));
IL2CPP_REGISTER_METHOD(0x00E654B0, List_1_KeybindingCommandMapAsset_ExclusiveCommandList_ *, GetExclusiveKeyExceptionLists, (KeybindingCommandMapAsset * __this, KeybindingCommandMapAsset_CommandBindingEnum__Enum bind));
IL2CPP_REGISTER_METHOD(0x00E65710, void, SetCommandKey, (PlayerInputRebinding_KeyBindingSettings * rebind, KeybindingCommandMapAsset_CommandBindingEnum__Enum entryKey, KeyCode__Enum__Array * entryValue));
IL2CPP_REGISTER_METHODINFO(0x047668C0, KeybindingCommandMapAsset_SetCommandKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E664D0, CompoundButtonInput *, GetCommandButton, (KeybindingCommandMapAsset_CommandBindingEnum__Enum command));
IL2CPP_REGISTER_METHODINFO(0x0476C428, KeybindingCommandMapAsset_GetCommandButton__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E67870, IEnumerable_1_CommandBinding_ *, GetAllBindingsIterator, (KeybindingCommandMapAsset * __this));
IL2CPP_REGISTER_METHOD(0x00E67A00, List_1_CommandBinding_ *, GetBindingsByFamily, (KeybindingCommandMapAsset * __this, ControlsScreen_ControlListEnum__Enum controlFamily));
IL2CPP_REGISTER_METHODINFO(0x04756B08, KeybindingCommandMapAsset_GetBindingsByFamily__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E68EA0, void, __ctor, (KeybindingCommandMapAsset * __this));
}
