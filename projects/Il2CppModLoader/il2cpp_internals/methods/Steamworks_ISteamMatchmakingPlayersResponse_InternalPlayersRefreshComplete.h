#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::void * thisptr));
IL2CPP_REGISTER_METHOD(0x015FD9B0, IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::void * thisptr, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::IAsyncResult * result));
}
