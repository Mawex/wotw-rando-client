#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection {
IL2CPP_REGISTER_METHOD(0x021CBED0, void, __ctor, (X509CertificateImplCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CC020, void, __ctor, (X509CertificateImplCollection * __this, X509CertificateImplCollection * other));
IL2CPP_REGISTER_METHOD(0x021CC290, int32_t, get_Count, (X509CertificateImplCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CC320, X509CertificateImpl *, get_Item, (X509CertificateImplCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x021CC3D0, void, Add, (X509CertificateImplCollection * __this, X509CertificateImpl * impl, bool takeOwnership));
IL2CPP_REGISTER_METHOD(0x021CC4A0, X509CertificateImplCollection *, Clone, (X509CertificateImplCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CC5F0, void, Dispose, (X509CertificateImplCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CC6A0, void, Dispose, (X509CertificateImplCollection * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x021CC830, void, Finalize, (X509CertificateImplCollection * __this));
}
