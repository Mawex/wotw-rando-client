using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::ClientContext {
IL2CPP_REGISTER_METHOD(0x005B0220, SslClientStream *, get_SslStream, (ClientContext * __this));
IL2CPP_REGISTER_METHOD(0x01F663B0, int16_t, get_ClientHelloProtocol, (ClientContext * __this));
IL2CPP_REGISTER_METHOD(0x01F663C0, void, set_ClientHelloProtocol, (ClientContext * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01F663D0, void, __ctor, (ClientContext * __this, SslClientStream * stream, SecurityProtocolType__Enum_1 securityProtocolType, String * targetHost, X509CertificateCollection_1 * clientCertificates));
IL2CPP_REGISTER_METHOD(0x01F66440, void, Clear, (ClientContext * __this));
}
