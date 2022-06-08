using namespace app;

namespace app::methods::Steamworks::SteamGameSearch {
IL2CPP_REGISTER_METHOD(0x027EF190, EGameSearchErrorCode_t__Enum, AddGameSearchParams, (String * pchKeyToFind, String * pchValuesToFind));
IL2CPP_REGISTER_METHOD(0x027EF5E0, EGameSearchErrorCode_t__Enum, SearchForGameWithLobby, (CSteamID steamIDLobby, int32_t nPlayerMin, int32_t nPlayerMax));
IL2CPP_REGISTER_METHOD(0x027EF6C0, EGameSearchErrorCode_t__Enum, SearchForGameSolo, (int32_t nPlayerMin, int32_t nPlayerMax));
IL2CPP_REGISTER_METHOD(0x027EF780, EGameSearchErrorCode_t__Enum, AcceptGame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027EF830, EGameSearchErrorCode_t__Enum, DeclineGame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027EF8E0, EGameSearchErrorCode_t__Enum, RetrieveConnectionDetails, (CSteamID steamIDHost, String * * pchConnectionDetails, int32_t cubConnectionDetails));
IL2CPP_REGISTER_METHOD(0x027EFA80, EGameSearchErrorCode_t__Enum, EndGameSearch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027EFB30, EGameSearchErrorCode_t__Enum, SetGameHostParams, (String * pchKey, String * pchValue));
IL2CPP_REGISTER_METHOD(0x027EFF80, EGameSearchErrorCode_t__Enum, SetConnectionDetails, (String * pchConnectionDetails, int32_t cubConnectionDetails));
IL2CPP_REGISTER_METHOD(0x027F0270, EGameSearchErrorCode_t__Enum, RequestPlayersForGame, (int32_t nPlayerMin, int32_t nPlayerMax, int32_t nMaxTeamSize));
IL2CPP_REGISTER_METHOD(0x027F0340, EGameSearchErrorCode_t__Enum, HostConfirmGameStart, (uint64_t ullUniqueGameID));
IL2CPP_REGISTER_METHOD(0x027F0400, EGameSearchErrorCode_t__Enum, CancelRequestPlayersForGame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027F04B0, EGameSearchErrorCode_t__Enum, SubmitPlayerResult, (uint64_t ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t__Enum EPlayerResult));
IL2CPP_REGISTER_METHOD(0x027F0590, EGameSearchErrorCode_t__Enum, EndGame, (uint64_t ullUniqueGameID));
}
