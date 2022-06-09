#include <interception_macros.h>

namespace app::methods::AkBasePlatformSettings {
IL2CPP_REGISTER_METHOD(0x026CF390, AkInitializationSettings *, get_AkInitializationSettings, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CF5D0, AkSpatialAudioInitSettings *, get_AkSpatialAudioInitSettings, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CF810, AkCallbackManager_InitializationSettings *, get_CallbackManagerInitializationSettings, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CF950, String *, get_InitialLanguage, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RenderDuringFocusLoss, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CF9D0, String *, get_SoundbankPath, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CFA70, AkCommunicationSettings *, get_AkCommunicationSettings, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseAsyncOpen, (app::AkBasePlatformSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (app::AkBasePlatformSettings * this_ptr));
}
