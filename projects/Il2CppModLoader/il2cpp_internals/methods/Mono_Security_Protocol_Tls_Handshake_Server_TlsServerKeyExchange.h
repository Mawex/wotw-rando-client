#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerKeyExchange {
IL2CPP_REGISTER_METHOD(0x01F75430, void, __ctor, (TlsServerKeyExchange * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F75460, void, Update, (TlsServerKeyExchange * __this));
IL2CPP_REGISTER_METHODINFO(0x04795838, TlsServerKeyExchange_Update__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsServerKeyExchange * __this));
IL2CPP_REGISTER_METHOD(0x01F754B0, void, ProcessAsTls1, (TlsServerKeyExchange * __this));
IL2CPP_REGISTER_METHOD(0x01F758C0, Byte__Array *, createSignature, (TlsServerKeyExchange * __this, RSA * rsa, Byte__Array * buffer));
}
