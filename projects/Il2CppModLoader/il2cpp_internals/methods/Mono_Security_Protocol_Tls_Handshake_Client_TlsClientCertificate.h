#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificate {
IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, __ctor, (TlsClientCertificate_1 * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F6A300, X509Certificate_1 *, get_ClientCertificate, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A390, void, GetClientCertificate, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A6D0, void, SendCertificates, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A940, void, ProcessAsSsl3, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A980, void, ProcessAsTls1, (TlsClientCertificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6A9C0, X509Certificate_1 *, FindParentCertificate, (TlsClientCertificate_1 * __this, X509Certificate_1 * cert));
}
