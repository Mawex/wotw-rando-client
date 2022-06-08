using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerCertificate {
IL2CPP_REGISTER_METHOD(0x01F6CD40, void, __ctor, (TlsServerCertificate_1 * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F6CD80, void, Update, (TlsServerCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsServerCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6CE00, void, ProcessAsTls1, (TlsServerCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6D120, bool, checkCertificateUsage, (TlsServerCertificate_1 * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x01F6D680, void, validateCertificates, (TlsServerCertificate_1 * __this, X509CertificateCollection_2 * certificates));
IL2CPP_REGISTER_METHOD(0x01F6D890, void, RemoteValidation, (TlsServerCertificate_1 * __this, ClientContext * context, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHODINFO(0x0478B228, TlsServerCertificate_1_RemoteValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6D9C0, void, LocalValidation, (TlsServerCertificate_1 * __this, ClientContext * context, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHODINFO(0x047834F8, TlsServerCertificate_1_LocalValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6E200, bool, checkServerIdentity, (TlsServerCertificate_1 * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x01F6E770, bool, checkDomainName, (TlsServerCertificate_1 * __this, String * subjectName));
IL2CPP_REGISTER_METHOD(0x01F6EAD0, bool, Match, (String * hostname, String * pattern));
}
