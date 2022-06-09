#include <interception_macros.h>

namespace app::methods::Mono_Net_Security::AsyncProtocolResult {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_UserResult, (app::AsyncProtocolResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ExceptionDispatchInfo *, get_Error, (app::AsyncProtocolResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor_1, (app::AsyncProtocolResult * this_ptr, int32_t result));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor_2, (app::AsyncProtocolResult * this_ptr, app::ExceptionDispatchInfo * error));
}
