using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientKeyExchange {
IL2CPP_REGISTER_METHOD(0x01F6C890, void, __ctor, (TlsClientKeyExchange_1 * __this, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F6C8C0, void, ProcessAsSsl3, (TlsClientKeyExchange_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6C8D0, void, ProcessAsTls1, (TlsClientKeyExchange_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6C8E0, void, ProcessCommon, (TlsClientKeyExchange_1 * __this, bool sendLength));
}
