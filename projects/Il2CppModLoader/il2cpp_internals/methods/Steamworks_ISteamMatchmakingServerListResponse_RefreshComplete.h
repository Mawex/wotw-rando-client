#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_RefreshComplete * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (ISteamMatchmakingServerListResponse_RefreshComplete * __this, HServerListRequest hRequest, EMatchMakingServerResponse__Enum response));
IL2CPP_REGISTER_METHOD(0x015FF6D0, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_RefreshComplete * __this, HServerListRequest hRequest, EMatchMakingServerResponse__Enum response, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_RefreshComplete * __this, IAsyncResult * result));
}
