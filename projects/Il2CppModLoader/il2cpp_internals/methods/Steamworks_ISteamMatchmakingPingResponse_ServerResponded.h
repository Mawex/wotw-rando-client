#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPingResponse_ServerResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingPingResponse_ServerResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (ISteamMatchmakingPingResponse_ServerResponded * __this, gameserveritem_t * server));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (ISteamMatchmakingPingResponse_ServerResponded * __this, gameserveritem_t * server, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingPingResponse_ServerResponded * __this, IAsyncResult * result));
}
