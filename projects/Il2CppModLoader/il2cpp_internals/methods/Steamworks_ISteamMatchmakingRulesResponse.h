#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingRulesResponse {
IL2CPP_REGISTER_METHOD(0x015FDA70, void, __ctor, (ISteamMatchmakingRulesResponse * __this, ISteamMatchmakingRulesResponse_RulesResponded * onRulesResponded, ISteamMatchmakingRulesResponse_RulesFailedToRespond * onRulesFailedToRespond, ISteamMatchmakingRulesResponse_RulesRefreshComplete * onRulesRefreshComplete));
IL2CPP_REGISTER_METHODINFO(0x04784758, ISteamMatchmakingRulesResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FE030, void, Finalize, (ISteamMatchmakingRulesResponse * __this));
IL2CPP_REGISTER_METHOD(0x015FE140, void, InternalOnRulesResponded, (ISteamMatchmakingRulesResponse * __this, void * thisptr, void * pchRule, void * pchValue));
IL2CPP_REGISTER_METHODINFO(0x04743F00, ISteamMatchmakingRulesResponse_InternalOnRulesResponded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnRulesFailedToRespond, (ISteamMatchmakingRulesResponse * __this, void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x04788FF8, ISteamMatchmakingRulesResponse_InternalOnRulesFailedToRespond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CB380, void, InternalOnRulesRefreshComplete, (ISteamMatchmakingRulesResponse * __this, void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x04793900, ISteamMatchmakingRulesResponse_InternalOnRulesRefreshComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC460, void *, operator_, (ISteamMatchmakingRulesResponse * that));
}
