#include <interception_macros.h>

namespace app::methods::Steamworks::SteamMatchmakingServers {
IL2CPP_REGISTER_METHOD(0x0278A110, HServerListRequest, RequestInternetServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array * ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278A370, HServerListRequest, RequestLANServerList, (app::AppId_t i_app, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278A4D0, HServerListRequest, RequestFriendsServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array * ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278A730, HServerListRequest, RequestFavoritesServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array * ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278A990, HServerListRequest, RequestHistoryServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array * ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278ABF0, HServerListRequest, RequestSpectatorServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array * ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278AE50, void, ReleaseRequest, (app::HServerListRequest h_server_list_request));
IL2CPP_REGISTER_METHOD(0x0278AF10, gameserveritem_t *, GetServerDetails, (app::HServerListRequest h_request, int32_t i_server));
IL2CPP_REGISTER_METHOD(0x0278B0F0, void, CancelQuery, (app::HServerListRequest h_request));
IL2CPP_REGISTER_METHOD(0x0278B1B0, void, RefreshQuery, (app::HServerListRequest h_request));
IL2CPP_REGISTER_METHOD(0x0278B270, bool, IsRefreshing, (app::HServerListRequest h_request));
IL2CPP_REGISTER_METHOD(0x0278B330, int32_t, GetServerCount, (app::HServerListRequest h_request));
IL2CPP_REGISTER_METHOD(0x0278B3F0, void, RefreshServer, (app::HServerListRequest h_request, int32_t i_server));
IL2CPP_REGISTER_METHOD(0x0278B4C0, HServerQuery, PingServer, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingPingResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278B630, HServerQuery, PlayerDetails, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingPlayersResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278B7A0, HServerQuery, ServerRules, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingRulesResponse * p_request_servers_response));
IL2CPP_REGISTER_METHOD(0x0278B910, void, CancelServerQuery, (app::HServerQuery h_server_query));
}
