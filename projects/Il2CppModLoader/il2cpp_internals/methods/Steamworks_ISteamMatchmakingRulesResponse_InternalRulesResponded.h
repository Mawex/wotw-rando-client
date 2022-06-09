#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::void * thisptr, app::void * pch_rule, app::void * pch_value));
IL2CPP_REGISTER_METHOD(0x015FE320, IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::void * thisptr, app::void * pch_rule, app::void * pch_value, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::IAsyncResult * result));
}
