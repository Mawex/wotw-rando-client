#include <interception_macros.h>

namespace app::methods::Mono::Http::NtlmSession {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NtlmSession * __this));
IL2CPP_REGISTER_METHOD(0x02172D70, Authorization *, Authenticate, (NtlmSession * __this, String * challenge, WebRequest * webRequest, ICredentials * credentials));
}
