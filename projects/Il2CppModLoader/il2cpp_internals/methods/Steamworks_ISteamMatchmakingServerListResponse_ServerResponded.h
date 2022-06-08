#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_ServerResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (ISteamMatchmakingServerListResponse_ServerResponded * __this, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x015FF870, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_ServerResponded * __this, HServerListRequest hRequest, int32_t iServer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_ServerResponded * __this, IAsyncResult * result));
}
