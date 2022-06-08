#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::ServerRecordProtocol {
IL2CPP_REGISTER_METHOD(0x01F7BD10, void, __ctor, (ServerRecordProtocol * __this, Stream * innerStream, ServerContext * context));
IL2CPP_REGISTER_METHOD(0x01F7BDD0, HandshakeMessage *, GetMessage, (ServerRecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F7BDE0, void, ProcessHandshakeMessage, (ServerRecordProtocol * __this, TlsStream * handMsg));
IL2CPP_REGISTER_METHOD(0x01F7C020, HandshakeMessage *, createClientHandshakeMessage, (ServerRecordProtocol * __this, HandshakeType__Enum type, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x04730BF8, ServerRecordProtocol_createClientHandshakeMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7C720, HandshakeMessage *, createServerHandshakeMessage, (ServerRecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x047993B8, ServerRecordProtocol_createServerHandshakeMessage__MethodInfo);
}
