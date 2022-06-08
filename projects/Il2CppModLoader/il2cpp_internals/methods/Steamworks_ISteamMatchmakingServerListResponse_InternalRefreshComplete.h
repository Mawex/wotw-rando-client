#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_InternalRefreshComplete * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (ISteamMatchmakingServerListResponse_InternalRefreshComplete * __this, void * thisptr, HServerListRequest hRequest, EMatchMakingServerResponse__Enum response));
IL2CPP_REGISTER_METHOD(0x015FF090, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_InternalRefreshComplete * __this, void * thisptr, HServerListRequest hRequest, EMatchMakingServerResponse__Enum response, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_InternalRefreshComplete * __this, IAsyncResult * result));
}
