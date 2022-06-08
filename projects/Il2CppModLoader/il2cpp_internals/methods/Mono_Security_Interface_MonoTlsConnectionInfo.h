#include <interception_macros.h>

namespace app::methods::Mono::Security::Interface::MonoTlsConnectionInfo {
IL2CPP_REGISTER_METHOD(0x01B67060, CipherSuiteCode__Enum, get_CipherSuiteCode, (MonoTlsConnectionInfo * __this));
IL2CPP_REGISTER_METHOD(0x02A46540, void, set_CipherSuiteCode, (MonoTlsConnectionInfo * __this, CipherSuiteCode__Enum value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, TlsProtocols__Enum, get_ProtocolVersion, (MonoTlsConnectionInfo * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ProtocolVersion, (MonoTlsConnectionInfo * __this, TlsProtocols__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_PeerDomainName, (MonoTlsConnectionInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A46550, String *, ToString, (MonoTlsConnectionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MonoTlsConnectionInfo * __this));
}
