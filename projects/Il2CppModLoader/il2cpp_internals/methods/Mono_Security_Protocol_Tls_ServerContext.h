#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::ServerContext {
IL2CPP_REGISTER_METHOD(0x005B0220, SslServerStream *, get_SslStream, (ServerContext * __this));
IL2CPP_REGISTER_METHOD(0x0186C330, bool, get_ClientCertificateRequired, (ServerContext * __this));
IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_RequestClientCertificate, (ServerContext * __this));
IL2CPP_REGISTER_METHOD(0x01F7B580, void, __ctor, (ServerContext * __this, SslServerStream * stream, SecurityProtocolType__Enum_1 securityProtocolType, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, bool requestClientCertificate));
}
