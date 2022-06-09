#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Client::TlsServerCertificateRequest {
    IL2CPP_REGISTER_METHOD(0x01F6ED80, void, __ctor, (app::TlsServerCertificateRequest_1 * this_ptr, app::Context_1 * context, app::Byte__Array * buffer));
    IL2CPP_REGISTER_METHOD(0x01F6EDC0, void, Update, (app::TlsServerCertificateRequest_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificateRequest_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F6EE50, void, ProcessAsTls1, (app::TlsServerCertificateRequest_1 * this_ptr));
}
