#include <interception_macros.h>

namespace app::methods::AkCommonUserSettings {
IL2CPP_REGISTER_METHOD(0x026DAD80, void, CopyTo, (AkCommonUserSettings * __this, AkMemSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DAEC0, String *, GetPluginPath, ());
IL2CPP_REGISTER_METHOD(0x026DB060, void, CopyTo, (AkCommonUserSettings * __this, AkInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DB5E0, void, CopyTo, (AkCommonUserSettings * __this, AkMusicSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DB720, void, CopyTo, (AkCommonUserSettings * __this, AkStreamMgrSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo, (AkCommonUserSettings * __this, AkDeviceSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DB860, void, CopyTo, (AkCommonUserSettings * __this, AkPlatformInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DBAD0, void, CopyTo, (AkCommonUserSettings * __this, AkSpatialAudioInitSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo, (AkCommonUserSettings * __this, AkUnityPlatformSpecificSettings * settings));
IL2CPP_REGISTER_METHOD(0x026DBF50, void, Validate, (AkCommonUserSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DBF70, void, __ctor, (AkCommonUserSettings * __this));
}
