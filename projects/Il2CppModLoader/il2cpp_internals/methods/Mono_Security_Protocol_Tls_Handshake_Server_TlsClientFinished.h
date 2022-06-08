#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientFinished {
IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, __ctor, (TlsClientFinished * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F72980, void, ProcessAsSsl3, (TlsClientFinished * __this));
IL2CPP_REGISTER_METHODINFO(0x04725240, TlsClientFinished_ProcessAsSsl3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F72D80, void, ProcessAsTls1, (TlsClientFinished * __this));
IL2CPP_REGISTER_METHODINFO(0x0476DB70, TlsClientFinished_ProcessAsTls1__MethodInfo);
}
