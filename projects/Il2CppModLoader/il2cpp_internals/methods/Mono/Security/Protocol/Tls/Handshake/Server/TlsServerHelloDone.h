#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerHelloDone {
    IL2CPP_REGISTER_METHOD(0x01F75400, void, __ctor, (app::TlsServerHelloDone * this_ptr, app::Context_1 * context));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessAsSsl3, (app::TlsServerHelloDone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessAsTls1, (app::TlsServerHelloDone * this_ptr));
}
