using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509CertificateImplMono {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (X509CertificateImplMono * __this, X509Certificate * x509));
IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_IsValid, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E17090, X509CertificateImpl *, Clone, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E171E0, String *, GetIssuerName, (X509CertificateImplMono * __this, bool legacyV1Mode));
IL2CPP_REGISTER_METHOD(0x01E172F0, String *, GetSubjectName, (X509CertificateImplMono * __this, bool legacyV1Mode));
IL2CPP_REGISTER_METHOD(0x01E17400, Byte__Array *, GetRawCertData, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E17440, Byte__Array *, GetCertHash, (X509CertificateImplMono * __this, bool lazy));
IL2CPP_REGISTER_METHOD(0x01E174B0, DateTime, GetValidFrom, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E174F0, DateTime, GetValidUntil, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E17530, bool, Equals, (X509CertificateImplMono * __this, X509CertificateImpl * other, bool * result));
IL2CPP_REGISTER_METHOD(0x01E17540, Byte__Array *, GetPublicKey, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E17580, Byte__Array *, GetSerialNumber, (X509CertificateImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E175C0, String *, ToString, (X509CertificateImplMono * __this, bool full));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Dispose, (X509CertificateImplMono * __this, bool disposing));
}
