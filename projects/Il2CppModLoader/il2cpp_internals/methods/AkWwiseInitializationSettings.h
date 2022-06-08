using namespace app;

namespace app::methods::AkWwiseInitializationSettings {
IL2CPP_REGISTER_METHOD(0x02702E30, uint32_t, get_DefaultDeviceSharesetId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02702ED0, uint32_t, get_SpatialDeviceSharesetId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02702F70, bool, get_IsValid, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x02703010, int32_t, get_Count, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, AkCommonUserSettings *, GetUserSettings, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, AkCommonAdvancedSettings *, GetAdvancedSettings, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, AkCommonCommSettings *, GetCommsSettings, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x027030A0, AkWwiseInitializationSettings *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02703240, AkBasePlatformSettings *, GetPlatformSettings, (String * platformName));
IL2CPP_REGISTER_METHOD(0x027035D0, AkBasePlatformSettings *, get_ActivePlatformSettings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02703740, void, OnEnable, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x027038C0, bool, InitializeSoundEngine, (AkWwiseInitializationSettings * config, WwiseBootstrapConfiguration * bootstrapConfig));
IL2CPP_REGISTER_METHOD(0x02704E20, bool, ResetSoundEngine, (bool isPlaying));
IL2CPP_REGISTER_METHOD(0x02704F60, void, TerminateSoundEngine, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02705240, void, SleepForMilliseconds, (double milliseconds));
IL2CPP_REGISTER_METHOD(0x02705470, void, __ctor, (AkWwiseInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x02705760, void, __cctor, (MethodInfo * method));
}
