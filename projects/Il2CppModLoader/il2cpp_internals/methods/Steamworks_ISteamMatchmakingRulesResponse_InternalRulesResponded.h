#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingRulesResponse_InternalRulesResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (ISteamMatchmakingRulesResponse_InternalRulesResponded * __this, void * thisptr, void * pchRule, void * pchValue));
IL2CPP_REGISTER_METHOD(0x015FE320, IAsyncResult *, BeginInvoke, (ISteamMatchmakingRulesResponse_InternalRulesResponded * __this, void * thisptr, void * pchRule, void * pchValue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingRulesResponse_InternalRulesResponded * __this, IAsyncResult * result));
}
