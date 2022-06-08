#include <interception_macros.h>

namespace app::methods::Steamworks::SteamGameServerClient {
IL2CPP_REGISTER_METHOD(0x027F53E0, HSteamPipe, CreateSteamPipe, ());
IL2CPP_REGISTER_METHOD(0x027F5400, bool, BReleaseSteamPipe, (HSteamPipe hSteamPipe));
IL2CPP_REGISTER_METHOD(0x027F5430, HSteamUser, ConnectToGlobalUser, (HSteamPipe hSteamPipe));
IL2CPP_REGISTER_METHOD(0x027F5460, HSteamUser, CreateLocalUser, (HSteamPipe * phSteamPipe, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x027F54A0, void, ReleaseUser, (HSteamPipe hSteamPipe, HSteamUser hUser));
IL2CPP_REGISTER_METHOD(0x027F54E0, void *, GetISteamUser, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F5710, void *, GetISteamGameServer, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F5940, void, SetLocalIPBinding, (uint32_t unIP, uint16_t usPort));
IL2CPP_REGISTER_METHOD(0x027F5980, void *, GetISteamFriends, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F5BB0, void *, GetISteamUtils, (HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F5DD0, void *, GetISteamMatchmaking, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6000, void *, GetISteamMatchmakingServers, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6230, void *, GetISteamGenericInterface, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6460, void *, GetISteamUserStats, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6690, void *, GetISteamGameServerStats, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F68C0, void *, GetISteamApps, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6AF0, void *, GetISteamNetworking, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6D20, void *, GetISteamRemoteStorage, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F6F50, void *, GetISteamScreenshots, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7180, void *, GetISteamGameSearch, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F73B0, uint32_t, GetIPCCallCount, ());
IL2CPP_REGISTER_METHOD(0x027F73D0, void, SetWarningMessageHook, (SteamAPIWarningMessageHook_t * pFunction));
IL2CPP_REGISTER_METHOD(0x027F7400, bool, BShutdownIfAllPipesClosed, ());
IL2CPP_REGISTER_METHOD(0x027F7420, void *, GetISteamHTTP, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7650, void *, GetISteamController, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7880, void *, GetISteamUGC, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7AB0, void *, GetISteamAppList, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7CE0, void *, GetISteamMusic, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F7F10, void *, GetISteamMusicRemote, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F8140, void *, GetISteamHTMLSurface, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F8370, void *, GetISteamInventory, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F85A0, void *, GetISteamVideo, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F87D0, void *, GetISteamParentalSettings, (HSteamUser hSteamuser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F8A00, void *, GetISteamInput, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F8C30, void *, GetISteamParties, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
IL2CPP_REGISTER_METHOD(0x027F8E60, void *, GetISteamRemotePlay, (HSteamUser hSteamUser, HSteamPipe hSteamPipe, String * pchVersion));
}
