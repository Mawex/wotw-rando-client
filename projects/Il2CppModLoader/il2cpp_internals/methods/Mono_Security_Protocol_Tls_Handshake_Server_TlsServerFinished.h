#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerFinished {
IL2CPP_REGISTER_METHOD(0x01F6B960, void, __ctor, (TlsServerFinished * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F747D0, void, ProcessAsSsl3, (TlsServerFinished * __this));
IL2CPP_REGISTER_METHOD(0x01F74AB0, void, ProcessAsTls1, (TlsServerFinished * __this));
IL2CPP_REGISTER_METHOD(0x01F74D10, void, __cctor, ());
}
