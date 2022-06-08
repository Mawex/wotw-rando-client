#include <interception_macros.h>

namespace app::methods::Mono::Net::Security::AsyncProtocolResult {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_UserResult, (AsyncProtocolResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ExceptionDispatchInfo *, get_Error, (AsyncProtocolResult * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (AsyncProtocolResult * __this, int32_t result));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (AsyncProtocolResult * __this, ExceptionDispatchInfo * error));
}
