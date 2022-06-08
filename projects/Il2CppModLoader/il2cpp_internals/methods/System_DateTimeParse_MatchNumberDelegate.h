#include <interception_macros.h>

namespace app::methods::System::DateTimeParse_MatchNumberDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DateTimeParse_MatchNumberDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x028B92F0, bool, Invoke, (DateTimeParse_MatchNumberDelegate * __this, _DTString * str, int32_t digitLen, int32_t * result));
IL2CPP_REGISTER_METHOD(0x028B9690, IAsyncResult *, BeginInvoke, (DateTimeParse_MatchNumberDelegate * __this, _DTString * str, int32_t digitLen, int32_t * result, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (DateTimeParse_MatchNumberDelegate * __this, _DTString * str, int32_t * result, IAsyncResult * __result));
}
