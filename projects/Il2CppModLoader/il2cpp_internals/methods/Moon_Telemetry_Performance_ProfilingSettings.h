using namespace app;

namespace app::methods::Moon::Telemetry::Performance::ProfilingSettings {
IL2CPP_REGISTER_METHOD(0x00E33C00, void, CacheDefaults, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E33DF0, void, CreateSettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E346B0, IProfilingSetting *, GetSettingForType, (ProfilingSettings_SettingType__Enum type));
IL2CPP_REGISTER_METHOD(0x00E347E0, void, InitializeSettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E37BB0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyConfigFile, (String * file));
IL2CPP_REGISTER_METHOD(0x00E37CB0, void, ApplyCommandline, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E38210, void, ApplyConfig, (GameController_ProfilingConfiguration__Enum configuration, bool applyDefault));
IL2CPP_REGISTER_METHOD(0x00E38490, String *, ParseArgument, (String * flag));
IL2CPP_REGISTER_METHOD(0x00E388B0, void, RestoreSettingsBulk, (ProfilingSettings_SettingType__Enum__Array__Array * settings));
IL2CPP_REGISTER_METHOD(0x00E389A0, ProfilingSettings_BulkSettings *, SetStateBulk, (ProfilingSettings_BulkSettings * settings));
IL2CPP_REGISTER_METHOD(0x00E38A60, ProfilingSettings_BulkSettings *, SetStateBulk, (ProfilingSettings_SettingType__Enum__Array * settingsToDisable, ProfilingSettings_SettingType__Enum__Array * settingsToEnable, ProfilingSettings_SettingType__Enum__Array * settingsToRestore));
IL2CPP_REGISTER_METHOD(0x00E39040, void, SetState, (ProfilingSettings_SettingType__Enum setting, ProfilingSettings_SettingAction__Enum state));
IL2CPP_REGISTER_METHOD(0x00E390F0, bool, GetState, (ProfilingSettings_SettingType__Enum setting));
IL2CPP_REGISTER_METHOD(0x00E39270, void, ApplyState, (ProfilingSettings_SettingType__Enum type, ProfilingSettings_SettingAction__Enum setting));
IL2CPP_REGISTER_METHOD(0x00E393F0, void, ApplyImmediate, (GameController_ProfilingConfiguration__Enum config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ProfilingSettings * __this));
IL2CPP_REGISTER_METHOD(0x00E39590, void, __cctor, (MethodInfo * method));
}
