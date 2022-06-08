using namespace app;

namespace app::methods::System::Net::NtlmClient {
IL2CPP_REGISTER_METHOD(0x01BCAFC0, void, __ctor, (NtlmClient_1 * __this));
IL2CPP_REGISTER_METHOD(0x01BCB100, Authorization *, Authenticate, (NtlmClient_1 * __this, String * challenge, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x00420EE0, Authorization *, PreAuthenticate, (NtlmClient_1 * __this, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01BCB1C0, String *, get_AuthenticationType, (NtlmClient_1 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanPreAuthenticate, (NtlmClient_1 * __this));
}
