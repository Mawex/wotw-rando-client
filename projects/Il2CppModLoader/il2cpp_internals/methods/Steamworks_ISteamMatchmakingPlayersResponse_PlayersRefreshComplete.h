#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * __this, IAsyncResult * result));
}
