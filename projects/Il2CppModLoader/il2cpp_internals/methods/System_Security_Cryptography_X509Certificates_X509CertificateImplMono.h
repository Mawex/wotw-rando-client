#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509CertificateImplMono {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (app::X509CertificateImplMono * this_ptr, app::X509Certificate * x509));
IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_IsValid, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E17090, X509CertificateImpl *, Clone, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E171E0, String *, GetIssuerName, (app::X509CertificateImplMono * this_ptr, bool legacy_v1_mode));
IL2CPP_REGISTER_METHOD(0x01E172F0, String *, GetSubjectName, (app::X509CertificateImplMono * this_ptr, bool legacy_v1_mode));
IL2CPP_REGISTER_METHOD(0x01E17400, Byte__Array *, GetRawCertData, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E17440, Byte__Array *, GetCertHash, (app::X509CertificateImplMono * this_ptr, bool lazy));
IL2CPP_REGISTER_METHOD(0x01E174B0, DateTime, GetValidFrom, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E174F0, DateTime, GetValidUntil, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E17530, bool, Equals, (app::X509CertificateImplMono * this_ptr, app::X509CertificateImpl * other, app::bool * result));
IL2CPP_REGISTER_METHOD(0x01E17540, Byte__Array *, GetPublicKey, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E17580, Byte__Array *, GetSerialNumber, (app::X509CertificateImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E175C0, String *, ToString, (app::X509CertificateImplMono * this_ptr, bool full));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Dispose, (app::X509CertificateImplMono * this_ptr, bool disposing));
}
