#include <interception_macros.h>

namespace app::methods::SettingsScreen {
IL2CPP_REGISTER_METHOD(0x005A5280, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x005A5300, void, Awake, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x005A5400, void, OnDestroy, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x005A54E0, void, FixedUpdate, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x005A56C0, void, OnDisable, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x005A56D0, void, FlushSettings, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x005A5890, void, SetDirty, (SettingsScreen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SettingsScreen * __this));
}
