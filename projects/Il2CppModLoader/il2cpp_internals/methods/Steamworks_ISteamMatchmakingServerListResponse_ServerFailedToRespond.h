#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_ServerFailedToRespond * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (ISteamMatchmakingServerListResponse_ServerFailedToRespond * __this, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x015FF7A0, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_ServerFailedToRespond * __this, HServerListRequest hRequest, int32_t iServer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_ServerFailedToRespond * __this, IAsyncResult * result));
}
