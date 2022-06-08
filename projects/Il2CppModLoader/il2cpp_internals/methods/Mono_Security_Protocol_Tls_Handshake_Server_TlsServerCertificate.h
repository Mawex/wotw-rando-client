#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerCertificate {
IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, __ctor, (TlsServerCertificate * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsServerCertificate * __this));
IL2CPP_REGISTER_METHOD(0x01F74220, void, ProcessAsTls1, (TlsServerCertificate * __this));
}
