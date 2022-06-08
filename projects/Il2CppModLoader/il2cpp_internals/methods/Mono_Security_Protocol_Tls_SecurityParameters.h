using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::SecurityParameters {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SecurityParameters * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, CipherSuite *, get_Cipher, (SecurityParameters * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Cipher, (SecurityParameters * __this, CipherSuite * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Byte__Array *, get_ClientWriteMAC, (SecurityParameters * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientWriteMAC, (SecurityParameters * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Byte__Array *, get_ServerWriteMAC, (SecurityParameters * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ServerWriteMAC, (SecurityParameters * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x0063D180, void, Clear, (SecurityParameters * __this));
}
