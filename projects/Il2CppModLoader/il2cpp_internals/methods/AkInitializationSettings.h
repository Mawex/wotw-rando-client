using namespace app;

namespace app::methods::AkInitializationSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkInitializationSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026EB400, void *, getCPtr, (AkInitializationSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkInitializationSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026EB490, void, Finalize, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EB510, void, Dispose, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EB720, void, __ctor, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EB840, void, set_memSettings, (AkInitializationSettings * __this, AkMemSettings * value));
IL2CPP_REGISTER_METHOD(0x026EB9D0, AkMemSettings *, get_memSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EBBE0, void, set_streamMgrSettings, (AkInitializationSettings * __this, AkStreamMgrSettings * value));
IL2CPP_REGISTER_METHOD(0x026EBD20, AkStreamMgrSettings *, get_streamMgrSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EBF30, void, set_deviceSettings, (AkInitializationSettings * __this, AkDeviceSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC070, AkDeviceSettings *, get_deviceSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EC280, void, set_initSettings, (AkInitializationSettings * __this, AkInitSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC3C0, AkInitSettings *, get_initSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EC5D0, void, set_platformSettings, (AkInitializationSettings * __this, AkPlatformInitSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC710, AkPlatformInitSettings *, get_platformSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026EC920, void, set_musicSettings, (AkInitializationSettings * __this, AkMusicSettings * value));
IL2CPP_REGISTER_METHOD(0x026ECA60, AkMusicSettings *, get_musicSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026ECC70, void, set_preparePoolSize, (AkInitializationSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026ECDA0, uint32_t, get_preparePoolSize, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026ECEC0, void, set_unityPlatformSpecificSettings, (AkInitializationSettings * __this, AkUnityPlatformSpecificSettings * value));
IL2CPP_REGISTER_METHOD(0x026ED050, AkUnityPlatformSpecificSettings *, get_unityPlatformSpecificSettings, (AkInitializationSettings * __this));
IL2CPP_REGISTER_METHOD(0x026ED260, void, set_useAsyncOpen, (AkInitializationSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026ED390, bool, get_useAsyncOpen, (AkInitializationSettings * __this));
}
