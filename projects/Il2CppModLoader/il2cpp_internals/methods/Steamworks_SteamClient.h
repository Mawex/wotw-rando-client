#include <interception_macros.h>

namespace app::methods::Steamworks::SteamClient {
IL2CPP_REGISTER_METHOD(0x027E3940, HSteamPipe, CreateSteamPipe, ());
IL2CPP_REGISTER_METHOD(0x027E3960, bool, BReleaseSteamPipe, (HSteamPipe hSteamPipe));
IL2CPP_REGISTER_METHOD(0x027E3990, HSteamUser, ConnectToGlobalUser, (HSteamPipe hSteamPipe));
IL2CPP_REGISTER_METHOD(0x027E39C0, HSteamUser, CreateLocalUser, (HSteamPipe * phSteamPipe, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x027E3A00, void, ReleaseUser, (HSteamPipe hSteamPipe, HSteamUser hUser));
IL2CPP_REGISTER_METHOD(0x027E3A40, void *, GetISteamUser, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E3C70, void *, GetISteamGameServer, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E3EA0, void, SetLocalIPBinding, (uint32_t unIP, uint16_t usPort));
IL2CPP_REGISTER_METHOD(0x027E3EE0, void *, GetISteamFriends, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4110, void *, GetISteamUtils, (HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4330, void *, GetISteamMatchmaking, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4560, void *, GetISteamMatchmakingServers, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4790, void *, GetISteamGenericInterface, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E49C0, void *, GetISteamUserStats, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4BF0, void *, GetISteamGameServerStats, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E4E20, void *, GetISteamApps, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E5050, void *, GetISteamNetworking, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E5280, void *, GetISteamRemoteStorage, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E54B0, void *, GetISteamScreenshots, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E56E0, void *, GetISteamGameSearch, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E5910, uint32_t, GetIPCCallCount, ());
IL2CPP_REGISTER_METHOD(0x027E5930, void, SetWarningMessageHook, (SteamAPIWarningMessageHook_t * pFunction));
IL2CPP_REGISTER_METHOD(0x027E5960, bool, BShutdownIfAllPipesClosed, ());
IL2CPP_REGISTER_METHOD(0x027E5980, void *, GetISteamHTTP, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E5BB0, void *, GetISteamController, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E5DE0, void *, GetISteamUGC, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6010, void *, GetISteamAppList, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6240, void *, GetISteamMusic, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6470, void *, GetISteamMusicRemote, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E66A0, void *, GetISteamHTMLSurface, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E68D0, void *, GetISteamInventory, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6B00, void *, GetISteamVideo, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6D30, void *, GetISteamParentalSettings, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E6F60, void *, GetISteamInput, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E7190, void *, GetISteamParties, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027E73C0, void *, GetISteamRemotePlay, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
}
