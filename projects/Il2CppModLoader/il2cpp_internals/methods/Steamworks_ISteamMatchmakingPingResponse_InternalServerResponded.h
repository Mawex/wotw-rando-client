using namespace app;

namespace app::methods::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingPingResponse_InternalServerResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (ISteamMatchmakingPingResponse_InternalServerResponded * __this, void * thisptr, gameserveritem_t * server));
IL2CPP_REGISTER_METHOD(0x015FC540, IAsyncResult *, BeginInvoke, (ISteamMatchmakingPingResponse_InternalServerResponded * __this, void * thisptr, gameserveritem_t * server, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingPingResponse_InternalServerResponded * __this, IAsyncResult * result));
}
