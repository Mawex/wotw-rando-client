#include <interception_macros.h>

namespace app::methods::AkCallbackManager {
IL2CPP_REGISTER_METHOD(0x026D0330, bool, get_IsLoggingEnabled, ());
IL2CPP_REGISTER_METHOD(0x026D03D0, void, set_IsLoggingEnabled, (bool value));
IL2CPP_REGISTER_METHOD(0x026D0480, void, RemoveEventCallback, (uint32_t in_playingID));
IL2CPP_REGISTER_METHOD(0x026D09A0, void, RemoveEventCallbackCookie, (Object * in_cookie));
IL2CPP_REGISTER_METHOD(0x026D0E40, void, RemoveBankCallback, (Object * in_cookie));
IL2CPP_REGISTER_METHOD(0x026D12E0, void, SetLastAddedPlayingID, (uint32_t in_playingID));
IL2CPP_REGISTER_METHOD(0x026D1400, AKRESULT__Enum, Init, (AkCallbackManager_InitializationSettings * settings));
IL2CPP_REGISTER_METHOD(0x026D16C0, void, Term, ());
IL2CPP_REGISTER_METHOD(0x026D18D0, void, SetMonitoringCallback, (AkMonitorErrorLevel__Enum in_Level, AkCallbackManager_MonitoringCallback * in_CB));
IL2CPP_REGISTER_METHOD(0x026D1A80, void, SetBGMCallback, (AkCallbackManager_BGMCallback * in_CB, Object * in_cookie));
IL2CPP_REGISTER_METHOD(0x026D1C10, int32_t, PostCallbacks, ());
IL2CPP_REGISTER_METHOD(0x026D2C60, void, __cctor, ());
}
