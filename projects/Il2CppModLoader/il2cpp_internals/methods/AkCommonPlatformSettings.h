#include <interception_macros.h>

namespace app::methods::AkCommonPlatformSettings {
IL2CPP_REGISTER_METHOD(0x026DA370, AkInitializationSettings *, get_AkInitializationSettings, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DAA50, AkSpatialAudioInitSettings *, get_AkSpatialAudioInitSettings, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DAAE0, AkCallbackManager_InitializationSettings *, get_CallbackManagerInitializationSettings, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DAC60, String *, get_InitialLanguage, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DAC90, bool, get_RenderDuringFocusLoss, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DACC0, String *, get_SoundbankPath, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DACF0, bool, get_UseAsyncOpen, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DAD20, AkCommunicationSettings *, get_AkCommunicationSettings, (AkCommonPlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (AkCommonPlatformSettings * __this));
}
