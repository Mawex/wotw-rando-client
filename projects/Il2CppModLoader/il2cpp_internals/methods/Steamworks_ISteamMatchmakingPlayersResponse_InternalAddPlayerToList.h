#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingPlayersResponse_InternalAddPlayerToList * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FD3D0, void, Invoke, (ISteamMatchmakingPlayersResponse_InternalAddPlayerToList * __this, void * thisptr, void * pchName, int32_t nScore, float flTimePlayed));
IL2CPP_REGISTER_METHOD(0x015FD7F0, IAsyncResult *, BeginInvoke, (ISteamMatchmakingPlayersResponse_InternalAddPlayerToList * __this, void * thisptr, void * pchName, int32_t nScore, float flTimePlayed, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingPlayersResponse_InternalAddPlayerToList * __this, IAsyncResult * result));
}
