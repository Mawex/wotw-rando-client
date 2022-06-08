#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPingResponse {
IL2CPP_REGISTER_METHOD(0x015FBE40, void, __ctor, (ISteamMatchmakingPingResponse * __this, ISteamMatchmakingPingResponse_ServerResponded * onServerResponded, ISteamMatchmakingPingResponse_ServerFailedToRespond * onServerFailedToRespond));
IL2CPP_REGISTER_METHODINFO(0x04750F88, ISteamMatchmakingPingResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC320, void, Finalize, (ISteamMatchmakingPingResponse * __this));
IL2CPP_REGISTER_METHOD(0x015FC430, void, InternalOnServerResponded, (ISteamMatchmakingPingResponse * __this, void * thisptr, gameserveritem_t * server));
IL2CPP_REGISTER_METHODINFO(0x04743B60, ISteamMatchmakingPingResponse_InternalOnServerResponded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnServerFailedToRespond, (ISteamMatchmakingPingResponse * __this, void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x0470EB30, ISteamMatchmakingPingResponse_InternalOnServerFailedToRespond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC460, void *, operator_, (ISteamMatchmakingPingResponse * that));
}
