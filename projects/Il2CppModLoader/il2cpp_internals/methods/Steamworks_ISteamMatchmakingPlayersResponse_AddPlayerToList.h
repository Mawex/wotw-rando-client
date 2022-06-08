#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingPlayersResponse_AddPlayerToList * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FCD30, void, Invoke, (ISteamMatchmakingPlayersResponse_AddPlayerToList * __this, String * pchName, int32_t nScore, float flTimePlayed));
IL2CPP_REGISTER_METHOD(0x015FD2E0, IAsyncResult *, BeginInvoke, (ISteamMatchmakingPlayersResponse_AddPlayerToList * __this, String * pchName, int32_t nScore, float flTimePlayed, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingPlayersResponse_AddPlayerToList * __this, IAsyncResult * result));
}
