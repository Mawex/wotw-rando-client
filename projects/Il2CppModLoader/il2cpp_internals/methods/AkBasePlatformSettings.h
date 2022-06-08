using namespace app;

namespace app::methods::AkBasePlatformSettings {
IL2CPP_REGISTER_METHOD(0x026CF390, AkInitializationSettings *, get_AkInitializationSettings, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026CF5D0, AkSpatialAudioInitSettings *, get_AkSpatialAudioInitSettings, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026CF810, AkCallbackManager_InitializationSettings *, get_CallbackManagerInitializationSettings, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026CF950, String *, get_InitialLanguage, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RenderDuringFocusLoss, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026CF9D0, String *, get_SoundbankPath, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026CFA70, AkCommunicationSettings *, get_AkCommunicationSettings, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseAsyncOpen, (AkBasePlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (AkBasePlatformSettings * __this));
}
