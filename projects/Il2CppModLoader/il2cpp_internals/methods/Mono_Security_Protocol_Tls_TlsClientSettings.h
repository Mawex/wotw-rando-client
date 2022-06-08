using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::TlsClientSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_TargetHost, (TlsClientSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TargetHost, (TlsClientSettings * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, X509CertificateCollection_1 *, get_Certificates, (TlsClientSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Certificates, (TlsClientSettings * __this, X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB950, X509Certificate_1 *, get_ClientCertificate, (TlsClientSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291B8F0, void, set_ClientCertificate, (TlsClientSettings * __this, X509Certificate_1 * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, RSAManaged_1 *, get_CertificateRSA, (TlsClientSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291B900, void, __ctor, (TlsClientSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291BA60, void, UpdateCertificateRSA, (TlsClientSettings * __this));
}
