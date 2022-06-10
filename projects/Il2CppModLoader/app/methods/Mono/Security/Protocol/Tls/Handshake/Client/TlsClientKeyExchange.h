#pragma once
#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientKeyExchange {
    IL2CPP_REGISTER_METHOD(0x01F6C890, void, ctor, (app::TlsClientKeyExchange_1 * this_ptr, app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F6C8C0, void, ProcessAsSsl3, (app::TlsClientKeyExchange_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6C8D0, void, ProcessAsTls1, (app::TlsClientKeyExchange_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6C8E0, void, ProcessCommon, (app::TlsClientKeyExchange_1 * this_ptr, bool send_length))
}
