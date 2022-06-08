#include <interception_macros.h>

namespace app::methods::Steamworks::SteamGameServer {
IL2CPP_REGISTER_METHOD(0x027F0650, bool, InitGameServer, (uint32_t unIP, uint16_t usGamePort, uint16_t usQueryPort, uint32_t unFlags, AppId_t nGameAppId, String * pchVersionString));
IL2CPP_REGISTER_METHOD(0x027F0970, void, SetProduct, (String * pszProduct));
IL2CPP_REGISTER_METHOD(0x027F0C30, void, SetGameDescription, (String * pszGameDescription));
IL2CPP_REGISTER_METHOD(0x027F0EF0, void, SetModDir, (String * pszModDir));
IL2CPP_REGISTER_METHOD(0x027F11B0, void, SetDedicatedServer, (bool bDedicated));
IL2CPP_REGISTER_METHOD(0x027F1270, void, LogOn, (String * pszToken));
IL2CPP_REGISTER_METHOD(0x027F1530, void, LogOnAnonymous, ());
IL2CPP_REGISTER_METHOD(0x027F15E0, void, LogOff, ());
IL2CPP_REGISTER_METHOD(0x027F1690, bool, BLoggedOn, ());
IL2CPP_REGISTER_METHOD(0x027F1740, bool, BSecure, ());
IL2CPP_REGISTER_METHOD(0x027F17F0, CSteamID, GetSteamID, ());
IL2CPP_REGISTER_METHOD(0x027F1920, bool, WasRestartRequested, ());
IL2CPP_REGISTER_METHOD(0x027F19D0, void, SetMaxPlayerCount, (int32_t cPlayersMax));
IL2CPP_REGISTER_METHOD(0x027F1A80, void, SetBotPlayerCount, (int32_t cBotplayers));
IL2CPP_REGISTER_METHOD(0x027F1B30, void, SetServerName, (String * pszServerName));
IL2CPP_REGISTER_METHOD(0x027F1DF0, void, SetMapName, (String * pszMapName));
IL2CPP_REGISTER_METHOD(0x027F20B0, void, SetPasswordProtected, (bool bPasswordProtected));
IL2CPP_REGISTER_METHOD(0x027F2170, void, SetSpectatorPort, (uint16_t unSpectatorPort));
IL2CPP_REGISTER_METHOD(0x027F2230, void, SetSpectatorServerName, (String * pszSpectatorServerName));
IL2CPP_REGISTER_METHOD(0x027F24F0, void, ClearAllKeyValues, ());
IL2CPP_REGISTER_METHOD(0x027F25A0, void, SetKeyValue, (String * pKey, String * pValue));
IL2CPP_REGISTER_METHOD(0x027F29E0, void, SetGameTags, (String * pchGameTags));
IL2CPP_REGISTER_METHOD(0x027F2CA0, void, SetGameData, (String * pchGameData));
IL2CPP_REGISTER_METHOD(0x027F2F60, void, SetRegion, (String * pszRegion));
IL2CPP_REGISTER_METHOD(0x027F3220, bool, SendUserConnectAndAuthenticate, (uint32_t unIPClient, Byte__Array * pvAuthBlob, uint32_t cubAuthBlobSize, CSteamID * pSteamIDUser));
IL2CPP_REGISTER_METHOD(0x027F3320, CSteamID, CreateUnauthenticatedUserConnection, ());
IL2CPP_REGISTER_METHOD(0x027F3450, void, SendUserDisconnect, (CSteamID steamIDUser));
IL2CPP_REGISTER_METHOD(0x027F3510, bool, BUpdateUserData, (CSteamID steamIDUser, String * pchPlayerName, uint32_t uScore));
IL2CPP_REGISTER_METHOD(0x027F3810, HAuthTicket, GetAuthSessionTicket, (Byte__Array * pTicket, int32_t cbMaxTicket, uint32_t * pcbTicket));
IL2CPP_REGISTER_METHOD(0x027F3980, EBeginAuthSessionResult__Enum, BeginAuthSession, (Byte__Array * pAuthTicket, int32_t cbAuthTicket, CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x027F3A60, void, EndAuthSession, (CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x027F3B20, void, CancelAuthTicket, (HAuthTicket hAuthTicket));
IL2CPP_REGISTER_METHOD(0x027F3BD0, EUserHasLicenseForAppResult__Enum, UserHasLicenseForApp, (CSteamID steamID, AppId_t appID));
IL2CPP_REGISTER_METHOD(0x027F3CA0, bool, RequestUserGroupStatus, (CSteamID steamIDUser, CSteamID steamIDGroup));
IL2CPP_REGISTER_METHOD(0x027F3D70, void, GetGameplayStats, ());
IL2CPP_REGISTER_METHOD(0x027F3E20, SteamAPICall_t, GetServerReputation, ());
IL2CPP_REGISTER_METHOD(0x027F3F50, uint32_t, GetPublicIP, ());
IL2CPP_REGISTER_METHOD(0x027F4000, bool, HandleIncomingPacket, (Byte__Array * pData, int32_t cbData, uint32_t srcIP, uint16_t srcPort));
IL2CPP_REGISTER_METHOD(0x027F4100, int32_t, GetNextOutgoingPacket, (Byte__Array * pOut, int32_t cbMaxOut, uint32_t * pNetAdr, uint16_t * pPort));
IL2CPP_REGISTER_METHOD(0x027F4200, void, EnableHeartbeats, (bool bActive));
IL2CPP_REGISTER_METHOD(0x027F42C0, void, SetHeartbeatInterval, (int32_t iHeartbeatInterval));
IL2CPP_REGISTER_METHOD(0x027F4370, void, ForceHeartbeat, ());
IL2CPP_REGISTER_METHOD(0x027F4420, SteamAPICall_t, AssociateWithClan, (CSteamID steamIDClan));
IL2CPP_REGISTER_METHOD(0x027F4560, SteamAPICall_t, ComputeNewPlayerCompatibility, (CSteamID steamIDNewPlayer));
}
