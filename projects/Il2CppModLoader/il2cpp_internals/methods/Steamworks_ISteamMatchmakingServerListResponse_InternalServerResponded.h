using namespace app;

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_InternalServerResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (ISteamMatchmakingServerListResponse_InternalServerResponded * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x015FF270, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_InternalServerResponded * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_InternalServerResponded * __this, IAsyncResult * result));
}
