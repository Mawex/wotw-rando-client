#include <interception_macros.h>

namespace app::methods::System::DateTimeParse_MatchNumberDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x028B92F0, bool, Invoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString * str, int32_t digit_len, app::int32_t * result));
IL2CPP_REGISTER_METHOD(0x028B9690, IAsyncResult *, BeginInvoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString * str, int32_t digit_len, app::int32_t * result, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString * str, app::int32_t * result, app::IAsyncResult * __result));
}
