#include <interception_macros.h>

namespace app::methods::Mono::Http::NtlmClient {
IL2CPP_REGISTER_METHOD(0x02172460, Authorization *, Authenticate, (NtlmClient * __this, String * challenge, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x00420EE0, Authorization *, PreAuthenticate, (NtlmClient * __this, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x02172920, String *, get_AuthenticationType, (NtlmClient * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanPreAuthenticate, (NtlmClient * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NtlmClient * __this));
IL2CPP_REGISTER_METHOD(0x021729A0, void, __cctor, ());
}
