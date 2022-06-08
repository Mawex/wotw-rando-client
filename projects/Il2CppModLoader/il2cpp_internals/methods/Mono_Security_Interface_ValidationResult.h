using namespace app;

namespace app::methods::Mono::Security::Interface::ValidationResult {
IL2CPP_REGISTER_METHOD(0x02A47290, void, __ctor, (ValidationResult * __this, bool trusted, bool user_denied, int32_t error_code, Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ policy_errors));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Trusted, (ValidationResult * __this));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_UserDenied, (ValidationResult * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ErrorCode, (ValidationResult * __this));
}
