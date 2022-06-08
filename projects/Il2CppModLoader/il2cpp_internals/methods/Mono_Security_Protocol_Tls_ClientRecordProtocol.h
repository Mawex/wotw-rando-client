using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::ClientRecordProtocol {
IL2CPP_REGISTER_METHOD(0x01F66450, void, __ctor, (ClientRecordProtocol * __this, Stream * innerStream, ClientContext * context));
IL2CPP_REGISTER_METHOD(0x01F66510, HandshakeMessage *, GetMessage, (ClientRecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F66520, void, ProcessHandshakeMessage, (ClientRecordProtocol * __this, TlsStream * handMsg));
IL2CPP_REGISTER_METHOD(0x01F66760, HandshakeMessage *, createClientHandshakeMessage, (ClientRecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04764BF0, ClientRecordProtocol_createClientHandshakeMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F66CD0, HandshakeMessage *, createServerHandshakeMessage, (ClientRecordProtocol * __this, HandshakeType__Enum type, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x0473E1D8, ClientRecordProtocol_createServerHandshakeMessage__MethodInfo);
}
