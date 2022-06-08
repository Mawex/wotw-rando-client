#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerHello {
IL2CPP_REGISTER_METHOD(0x01F6FBA0, void, __ctor, (TlsServerHello_1 * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F6FBE0, void, Update, (TlsServerHello_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsServerHello_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6FE90, void, ProcessAsTls1, (TlsServerHello_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0470DDC0, TlsServerHello_1_ProcessAsTls1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F70360, void, processProtocol, (TlsServerHello_1 * __this, int16_t protocol));
IL2CPP_REGISTER_METHODINFO(0x04722060, TlsServerHello_1_processProtocol__MethodInfo);
}
