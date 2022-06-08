using namespace app;

namespace app::methods::System::Security::Cryptography::CspParameters {
IL2CPP_REGISTER_METHOD(0x005C3FF0, CspProviderFlags__Enum, get_Flags, (CspParameters * __this));
IL2CPP_REGISTER_METHOD(0x020D0460, void, set_Flags, (CspParameters * __this, CspProviderFlags__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04715C68, CspParameters_set_Flags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, CryptoKeySecurity *, get_CryptoKeySecurity, (CspParameters * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_CryptoKeySecurity, (CspParameters * __this, CryptoKeySecurity * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, SecureString *, get_KeyPassword, (CspParameters * __this));
IL2CPP_REGISTER_METHOD(0x020D0580, void, set_KeyPassword, (CspParameters * __this, SecureString * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, void *, get_ParentWindowHandle, (CspParameters * __this));
IL2CPP_REGISTER_METHOD(0x020D0630, void, set_ParentWindowHandle, (CspParameters * __this, void * value));
IL2CPP_REGISTER_METHOD(0x020D0640, void, __ctor, (CspParameters * __this));
IL2CPP_REGISTER_METHOD(0x020D0670, void, __ctor, (CspParameters * __this, int32_t dwTypeIn));
IL2CPP_REGISTER_METHOD(0x020D0690, void, __ctor, (CspParameters * __this, int32_t dwTypeIn, String * strProviderNameIn));
IL2CPP_REGISTER_METHOD(0x020D06B0, void, __ctor, (CspParameters * __this, int32_t dwTypeIn, String * strProviderNameIn, String * strContainerNameIn));
IL2CPP_REGISTER_METHOD(0x020D06D0, void, __ctor, (CspParameters * __this, int32_t providerType, String * providerName, String * keyContainerName, CryptoKeySecurity * cryptoKeySecurity, SecureString * keyPassword));
IL2CPP_REGISTER_METHOD(0x020D0710, void, __ctor, (CspParameters * __this, int32_t providerType, String * providerName, String * keyContainerName, CryptoKeySecurity * cryptoKeySecurity, void * parentWindowHandle));
IL2CPP_REGISTER_METHOD(0x020D0750, void, __ctor, (CspParameters * __this, int32_t providerType, String * providerName, String * keyContainerName, CspProviderFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x020D0770, void, __ctor, (CspParameters * __this, CspParameters * parameters));
}
