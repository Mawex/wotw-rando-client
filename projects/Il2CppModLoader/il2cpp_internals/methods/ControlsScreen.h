#include <interception_macros.h>

namespace app::methods::ControlsScreen {
IL2CPP_REGISTER_METHOD(0x011F2DC0, bool, get_IsVisible, ());
IL2CPP_REGISTER_METHOD(0x011F2EF0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x011F2F70, void, Awake, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F2F80, void, Initialize, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F44D0, void, OnDestroy, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F45B0, void, OnEnable, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F4740, void, OnDisable, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F4750, void, SaveChanges, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F4B70, void, ApplyControlScheme, (ControlsScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04796D30, ControlsScreen_ApplyControlScheme__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F4FC0, void, SetControlScheme, (ControlsScreen * __this, ControlScheme__Enum scheme));
IL2CPP_REGISTER_METHOD(0x011F50C0, void, ApplyCommandList, (ControlsScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04749438, ControlsScreen_ApplyCommandList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F5420, void, FixedUpdate, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x011F5820, KeyCode__Enum__Array *, CommandToBinding, (ControlsScreen * __this, KeybindingCommandMapAsset_CommandBindingEnum__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x04764FA0, ControlsScreen_CommandToBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F2F70, void, OnBeforeFaderIsPlayed, (ControlsScreen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ControlsScreen * __this));
}
