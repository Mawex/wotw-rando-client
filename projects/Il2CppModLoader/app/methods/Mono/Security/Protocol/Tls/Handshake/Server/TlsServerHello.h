#pragma once
#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerHello {
    IL2CPP_REGISTER_METHOD(0x01F74DC0, void, ctor, (app::TlsServerHello * this_ptr, app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F74DF0, void, Update, (app::TlsServerHello * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerHello * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F75240, void, ProcessAsTls1, (app::TlsServerHello * this_ptr))
}
