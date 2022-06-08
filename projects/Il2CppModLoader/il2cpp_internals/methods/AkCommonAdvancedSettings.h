#include <interception_macros.h>

namespace app::methods::AkCommonAdvancedSettings {
IL2CPP_REGISTER_METHOD(0x026D8830, void, CopyTo, (AkCommonAdvancedSettings * __this, AkDeviceSettings * settings));
IL2CPP_REGISTER_METHOD(0x026D8C70, void, CopyTo, (AkCommonAdvancedSettings * __this, AkInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo, (AkCommonAdvancedSettings * __this, AkPlatformInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x026D9470, void, CopyTo, (AkCommonAdvancedSettings * __this, AkSpatialAudioInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo, (AkCommonAdvancedSettings * __this, AkUnityPlatformSpecificSettings * settings));
IL2CPP_REGISTER_METHOD(0x026D96E0, void, Validate, (AkCommonAdvancedSettings * __this));
IL2CPP_REGISTER_METHOD(0x026D9740, void, __ctor, (AkCommonAdvancedSettings * __this));
}
