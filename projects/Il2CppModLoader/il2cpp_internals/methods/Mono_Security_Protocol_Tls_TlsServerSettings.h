using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::TlsServerSettings {
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_ServerKeyExchange, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_ServerKeyExchange, (TlsServerSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA280, X509CertificateCollection_2 *, get_Certificates, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Certificates, (TlsServerSettings * __this, X509CertificateCollection_2 * value));
IL2CPP_REGISTER_METHOD(0x002FB930, RSA *, get_CertificateRSA, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291C4C0, RSAParameters, get_RsaParameters, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291C4F0, void, set_RsaParameters, (TlsServerSettings * __this, RSAParameters value));
IL2CPP_REGISTER_METHOD(0x002FBB80, Byte__Array *, get_SignedParams, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_SignedParams, (TlsServerSettings * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_CertificateRequest, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_CertificateRequest, (TlsServerSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, ClientCertificateType__Enum__Array *, get_CertificateTypes, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CertificateTypes, (TlsServerSettings * __this, ClientCertificateType__Enum__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, String__Array *, get_DistinguisedNames, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_DistinguisedNames, (TlsServerSettings * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TlsServerSettings * __this));
IL2CPP_REGISTER_METHOD(0x0291C510, void, UpdateCertificateRSA, (TlsServerSettings * __this));
}
