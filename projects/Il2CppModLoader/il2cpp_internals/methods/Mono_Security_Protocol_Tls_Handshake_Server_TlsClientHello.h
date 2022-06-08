using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello {
IL2CPP_REGISTER_METHOD(0x01F73030, void, __ctor, (TlsClientHello * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F73070, void, Update, (TlsClientHello * __this));
IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (TlsClientHello * __this));
IL2CPP_REGISTER_METHOD(0x01F730F0, void, ProcessAsTls1, (TlsClientHello * __this));
IL2CPP_REGISTER_METHOD(0x01F73590, void, processProtocol, (TlsClientHello * __this, int16_t protocol));
IL2CPP_REGISTER_METHODINFO(0x0476BD38, TlsClientHello_processProtocol__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F736D0, void, selectCipherSuite, (TlsClientHello * __this));
IL2CPP_REGISTER_METHODINFO(0x04722798, TlsClientHello_selectCipherSuite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F738C0, void, selectCompressionMethod, (TlsClientHello * __this));
}
