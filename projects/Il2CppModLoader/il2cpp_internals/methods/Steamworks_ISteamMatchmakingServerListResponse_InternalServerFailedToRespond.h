using namespace app;

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingServerListResponse_InternalServerFailedToRespond * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (ISteamMatchmakingServerListResponse_InternalServerFailedToRespond * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer));
IL2CPP_REGISTER_METHOD(0x015FF180, IAsyncResult *, BeginInvoke, (ISteamMatchmakingServerListResponse_InternalServerFailedToRespond * __this, void * thisptr, HServerListRequest hRequest, int32_t iServer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingServerListResponse_InternalServerFailedToRespond * __this, IAsyncResult * result));
}
