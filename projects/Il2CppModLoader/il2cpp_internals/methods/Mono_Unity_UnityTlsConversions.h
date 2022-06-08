#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTlsConversions {
IL2CPP_REGISTER_METHOD(0x02490980, UnityTls_unitytls_protocol__Enum, GetMinProtocol, (SslProtocols__Enum protocols));
IL2CPP_REGISTER_METHOD(0x02490B10, UnityTls_unitytls_protocol__Enum, GetMaxProtocol, (SslProtocols__Enum protocols));
IL2CPP_REGISTER_METHOD(0x02490CA0, TlsProtocols__Enum, ConvertProtocolVersion, (UnityTls_unitytls_protocol__Enum protocol));
IL2CPP_REGISTER_METHOD(0x02490CD0, AlertDescription__Enum, VerifyResultToAlertDescription, (UnityTls_unitytls_x509verify_result__Enum verifyResult, AlertDescription__Enum defaultAlert));
IL2CPP_REGISTER_METHOD(0x024911B0, MonoSslPolicyErrors__Enum, VerifyResultToPolicyErrror, (UnityTls_unitytls_x509verify_result__Enum verifyResult));
}
