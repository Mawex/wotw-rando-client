#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ISteamMatchmakingRulesResponse_RulesResponded * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (ISteamMatchmakingRulesResponse_RulesResponded * __this, String * pchRule, String * pchValue));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ISteamMatchmakingRulesResponse_RulesResponded * __this, String * pchRule, String * pchValue, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ISteamMatchmakingRulesResponse_RulesResponded * __this, IAsyncResult * result));
}
