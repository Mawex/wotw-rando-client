#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::ServerRecordProtocol {
    IL2CPP_REGISTER_METHOD(0x01F7BD10, void, __ctor, (app::ServerRecordProtocol * this_ptr, app::Stream * inner_stream, app::ServerContext * context));
    IL2CPP_REGISTER_METHOD(0x01F7BDD0, app::HandshakeMessage *, GetMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type));
    IL2CPP_REGISTER_METHOD(0x01F7BDE0, void, ProcessHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::TlsStream * hand_msg));
    IL2CPP_REGISTER_METHOD(0x01F7C020, app::HandshakeMessage *, createClientHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type, app::Byte__Array * buffer));
    IL2CPP_REGISTER_METHODINFO(0x04730BF8, ServerRecordProtocol_createClientHandshakeMessage__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F7C720, app::HandshakeMessage *, createServerHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type));
    IL2CPP_REGISTER_METHODINFO(0x047993B8, ServerRecordProtocol_createServerHandshakeMessage__MethodInfo);
}
