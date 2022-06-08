using namespace app;

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse {
IL2CPP_REGISTER_METHOD(0x015FE930, void, __ctor, (ISteamMatchmakingServerListResponse * __this, ISteamMatchmakingServerListResponse_ServerResponded * onServerResponded, ISteamMatchmakingServerListResponse_ServerFailedToRespond * onServerFailedToRespond, ISteamMatchmakingServerListResponse_RefreshComplete * onRefreshComplete));
IL2CPP_REGISTER_METHODINFO(0x04736C60, ISteamMatchmakingServerListResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FEEF0, void, Finalize, (ISteamMatchmakingServerListResponse * __this));
IL2CPP_REGISTER_METHOD(0x015FF000, void, InternalOnServerResponded, (ISteamMatchmakingServerListResponse * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHODINFO(0x04795BE8, ISteamMatchmakingServerListResponse_InternalOnServerResponded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FF030, void, InternalOnServerFailedToRespond, (ISteamMatchmakingServerListResponse * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHODINFO(0x04707EE0, ISteamMatchmakingServerListResponse_InternalOnServerFailedToRespond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FF060, void, InternalOnRefreshComplete, (ISteamMatchmakingServerListResponse * __this, void * thisptr, HServerListRequest hRequest, EMatchMakingServerResponse__Enum response));
IL2CPP_REGISTER_METHODINFO(0x04789748, ISteamMatchmakingServerListResponse_InternalOnRefreshComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC460, void *, operator_, (ISteamMatchmakingServerListResponse * that));
}
