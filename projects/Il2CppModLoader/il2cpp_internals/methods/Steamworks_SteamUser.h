#include <interception_macros.h>

namespace app::methods::Steamworks::SteamUser {
IL2CPP_REGISTER_METHOD(0x0279D8F0, HSteamUser, GetHSteamUser, ());
IL2CPP_REGISTER_METHOD(0x0279D9A0, bool, BLoggedOn, ());
IL2CPP_REGISTER_METHOD(0x0279DA50, CSteamID, GetSteamID, ());
IL2CPP_REGISTER_METHOD(0x0279DB80, int32_t, InitiateGameConnection, (Byte__Array * pAuthBlob, int32_t cbMaxAuthBlob, CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer, bool bSecure));
IL2CPP_REGISTER_METHOD(0x0279DCA0, void, TerminateGameConnection, (uint32_t unIPServer, uint16_t usPortServer));
IL2CPP_REGISTER_METHOD(0x0279DD70, void, TrackAppUsageEvent, (CGameID gameID, int32_t eAppUsageEvent, String * pchExtraInfo));
IL2CPP_REGISTER_METHOD(0x0279E050, bool, GetUserDataFolder, (String * * pchBuffer, int32_t cubBuffer));
IL2CPP_REGISTER_METHOD(0x0279E200, void, StartVoiceRecording, ());
IL2CPP_REGISTER_METHOD(0x0279E2B0, void, StopVoiceRecording, ());
IL2CPP_REGISTER_METHOD(0x0279E360, EVoiceResult__Enum, GetAvailableVoice, (uint32_t * pcbCompressed));
IL2CPP_REGISTER_METHOD(0x0279E480, EVoiceResult__Enum, GetVoice, (bool bWantCompressed, Byte__Array * pDestBuffer, uint32_t cbDestBufferSize, uint32_t * nBytesWritten));
IL2CPP_REGISTER_METHOD(0x0279E600, EVoiceResult__Enum, DecompressVoice, (Byte__Array * pCompressed, uint32_t cbCompressed, Byte__Array * pDestBuffer, uint32_t cbDestBufferSize, uint32_t * nBytesWritten, uint32_t nDesiredSampleRate));
IL2CPP_REGISTER_METHOD(0x0279E720, uint32_t, GetVoiceOptimalSampleRate, ());
IL2CPP_REGISTER_METHOD(0x0279E7D0, HAuthTicket, GetAuthSessionTicket, (Byte__Array * pTicket, int32_t cbMaxTicket, uint32_t * pcbTicket));
IL2CPP_REGISTER_METHOD(0x0279E940, EBeginAuthSessionResult__Enum, BeginAuthSession, (Byte__Array * pAuthTicket, int32_t cbAuthTicket, CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x0279EA20, void, EndAuthSession, (CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x0279EAE0, void, CancelAuthTicket, (HAuthTicket hAuthTicket));
IL2CPP_REGISTER_METHOD(0x0279EB90, EUserHasLicenseForAppResult__Enum, UserHasLicenseForApp, (CSteamID steamID, AppId_t appID));
IL2CPP_REGISTER_METHOD(0x0279EC60, bool, BIsBehindNAT, ());
IL2CPP_REGISTER_METHOD(0x0279ED10, void, AdvertiseGame, (CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer));
IL2CPP_REGISTER_METHOD(0x0279EDF0, SteamAPICall_t, RequestEncryptedAppTicket, (Byte__Array * pDataToInclude, int32_t cbDataToInclude));
IL2CPP_REGISTER_METHOD(0x0279EF50, bool, GetEncryptedAppTicket, (Byte__Array * pTicket, int32_t cbMaxTicket, uint32_t * pcbTicket));
IL2CPP_REGISTER_METHOD(0x0279F030, int32_t, GetGameBadgeLevel, (int32_t nSeries, bool bFoil));
IL2CPP_REGISTER_METHOD(0x0279F100, int32_t, GetPlayerSteamLevel, ());
IL2CPP_REGISTER_METHOD(0x0279F1B0, SteamAPICall_t, RequestStoreAuthURL, (String * pchRedirectURL));
IL2CPP_REGISTER_METHOD(0x0279F4B0, bool, BIsPhoneVerified, ());
IL2CPP_REGISTER_METHOD(0x0279F560, bool, BIsTwoFactorEnabled, ());
IL2CPP_REGISTER_METHOD(0x0279F610, bool, BIsPhoneIdentifying, ());
IL2CPP_REGISTER_METHOD(0x0279F6C0, bool, BIsPhoneRequiringVerification, ());
IL2CPP_REGISTER_METHOD(0x0279F770, SteamAPICall_t, GetMarketEligibility, ());
IL2CPP_REGISTER_METHOD(0x0279F8A0, SteamAPICall_t, GetDurationControl, ());
}
