#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse {
IL2CPP_REGISTER_METHOD(0x015FC610, void, __ctor, (ISteamMatchmakingPlayersResponse * __this, ISteamMatchmakingPlayersResponse_AddPlayerToList * onAddPlayerToList, ISteamMatchmakingPlayersResponse_PlayersFailedToRespond * onPlayersFailedToRespond, ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * onPlayersRefreshComplete));
IL2CPP_REGISTER_METHODINFO(0x0471F0A0, ISteamMatchmakingPlayersResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FCBD0, void, Finalize, (ISteamMatchmakingPlayersResponse * __this));
IL2CPP_REGISTER_METHOD(0x015FCCE0, void, InternalOnAddPlayerToList, (ISteamMatchmakingPlayersResponse * __this, void * thisptr, void * pchName, int32_t nScore, float flTimePlayed));
IL2CPP_REGISTER_METHODINFO(0x0472CD90, ISteamMatchmakingPlayersResponse_InternalOnAddPlayerToList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnPlayersFailedToRespond, (ISteamMatchmakingPlayersResponse * __this, void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x047778A8, ISteamMatchmakingPlayersResponse_InternalOnPlayersFailedToRespond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CB380, void, InternalOnPlayersRefreshComplete, (ISteamMatchmakingPlayersResponse * __this, void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x04773980, ISteamMatchmakingPlayersResponse_InternalOnPlayersRefreshComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC460, void *, operator_, (ISteamMatchmakingPlayersResponse * that));
}
