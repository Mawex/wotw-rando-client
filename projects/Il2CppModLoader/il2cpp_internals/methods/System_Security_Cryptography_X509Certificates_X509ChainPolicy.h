#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainPolicy {
IL2CPP_REGISTER_METHOD(0x021D3F90, void, __ctor, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021D3FA0, void, __ctor, (X509ChainPolicy * __this, X509CertificateCollection_1 * store));
IL2CPP_REGISTER_METHOD(0x021D3FB0, X509Certificate2Collection *, get_ExtraStore, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x00654950, X509RevocationFlag__Enum, get_RevocationFlag, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021D4370, void, set_RevocationFlag, (X509ChainPolicy * __this, X509RevocationFlag__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04720328, X509ChainPolicy_set_RevocationFlag__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00998570, X509RevocationMode__Enum, get_RevocationMode, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021D4430, void, set_RevocationMode, (X509ChainPolicy * __this, X509RevocationMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0475B2F0, X509ChainPolicy_set_RevocationMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UrlRetrievalTimeout, (X509ChainPolicy * __this, TimeSpan value));
IL2CPP_REGISTER_METHOD(0x004E57A0, X509VerificationFlags__Enum, get_VerificationFlags, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021D44F0, void, set_VerificationFlags, (X509ChainPolicy * __this, X509VerificationFlags__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0476B2B8, X509ChainPolicy_set_VerificationFlags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, DateTime, get_VerificationTime, (X509ChainPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021D45B0, void, Reset, (X509ChainPolicy * __this));
}
