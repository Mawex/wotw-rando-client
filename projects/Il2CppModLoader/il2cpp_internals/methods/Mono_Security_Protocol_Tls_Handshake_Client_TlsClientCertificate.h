#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Client::TlsClientCertificate {
IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, __ctor, (app::TlsClientCertificate_1 * this_ptr, app::Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F6A300, X509Certificate_1 *, get_ClientCertificate, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A390, void, GetClientCertificate, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A6D0, void, SendCertificates, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A940, void, ProcessAsSsl3, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A980, void, ProcessAsTls1, (app::TlsClientCertificate_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F6A9C0, X509Certificate_1 *, FindParentCertificate, (app::TlsClientCertificate_1 * this_ptr, app::X509Certificate_1 * cert));
}
