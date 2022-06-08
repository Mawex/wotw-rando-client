using namespace app;

namespace app::methods::Steamworks::SteamMatchmakingServers {
IL2CPP_REGISTER_METHOD(0x0278A110, HServerListRequest, RequestInternetServerList, (AppId_t iApp, MatchMakingKeyValuePair_t__Array * ppchFilters, uint32_t nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278A370, HServerListRequest, RequestLANServerList, (AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278A4D0, HServerListRequest, RequestFriendsServerList, (AppId_t iApp, MatchMakingKeyValuePair_t__Array * ppchFilters, uint32_t nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278A730, HServerListRequest, RequestFavoritesServerList, (AppId_t iApp, MatchMakingKeyValuePair_t__Array * ppchFilters, uint32_t nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278A990, HServerListRequest, RequestHistoryServerList, (AppId_t iApp, MatchMakingKeyValuePair_t__Array * ppchFilters, uint32_t nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278ABF0, HServerListRequest, RequestSpectatorServerList, (AppId_t iApp, MatchMakingKeyValuePair_t__Array * ppchFilters, uint32_t nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278AE50, void, ReleaseRequest, (HServerListRequest hServerListRequest));
IL2CPP_REGISTER_METHOD(0x0278AF10, gameserveritem_t *, GetServerDetails, (HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x0278B0F0, void, CancelQuery, (HServerListRequest hRequest));
IL2CPP_REGISTER_METHOD(0x0278B1B0, void, RefreshQuery, (HServerListRequest hRequest));
IL2CPP_REGISTER_METHOD(0x0278B270, bool, IsRefreshing, (HServerListRequest hRequest));
IL2CPP_REGISTER_METHOD(0x0278B330, int32_t, GetServerCount, (HServerListRequest hRequest));
IL2CPP_REGISTER_METHOD(0x0278B3F0, void, RefreshServer, (HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x0278B4C0, HServerQuery, PingServer, (uint32_t unIP, uint16_t usPort, ISteamMatchmakingPingResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278B630, HServerQuery, PlayerDetails, (uint32_t unIP, uint16_t usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278B7A0, HServerQuery, ServerRules, (uint32_t unIP, uint16_t usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse));
IL2CPP_REGISTER_METHOD(0x0278B910, void, CancelServerQuery, (HServerQuery hServerQuery));
}
