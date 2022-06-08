using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate {
IL2CPP_REGISTER_METHOD(0x01F6CD40, void, __ctor, (TlsClientCertificate * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F709F0, void, Update, (TlsClientCertificate * __this));
IL2CPP_REGISTER_METHOD(0x01F70CD0, bool, get_HasCertificate, (TlsClientCertificate * __this));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsClientCertificate * __this));
IL2CPP_REGISTER_METHOD(0x01F70D20, void, ProcessAsTls1, (TlsClientCertificate * __this));
IL2CPP_REGISTER_METHODINFO(0x04795AE0, TlsClientCertificate_ProcessAsTls1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F71180, bool, checkCertificateUsage, (TlsClientCertificate * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x01F71680, void, validateCertificates, (TlsClientCertificate * __this, X509CertificateCollection_2 * certificates));
IL2CPP_REGISTER_METHODINFO(0x04731680, TlsClientCertificate_validateCertificates__MethodInfo);
}
