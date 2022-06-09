#include <interception_macros.h>

namespace app::methods::System_Net::NtlmClient {
IL2CPP_REGISTER_METHOD(0x01BCAFC0, void, __ctor, (app::NtlmClient_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BCB100, Authorization *, Authenticate, (app::NtlmClient_1 * this_ptr, app::String * challenge, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x00420EE0, Authorization *, PreAuthenticate, (app::NtlmClient_1 * this_ptr, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01BCB1C0, String *, get_AuthenticationType, (app::NtlmClient_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanPreAuthenticate, (app::NtlmClient_1 * this_ptr));
}
