#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTlsProvider {
IL2CPP_REGISTER_METHOD(0x024912D0, String *, get_Name, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x02491350, Guid, get_ID, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsSslStream, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsMonoExtensions, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsConnectionInfo, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsCleanShutdown, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x02491400, SslProtocols__Enum, get_SupportedProtocols, (UnityTlsProvider * __this));
IL2CPP_REGISTER_METHOD(0x02491410, IMonoSslStream *, CreateSslStream, (UnityTlsProvider * __this, Stream * innerStream, bool leaveInnerStreamOpen, MonoTlsSettings * settings));
IL2CPP_REGISTER_METHOD(0x02491430, IMonoSslStream *, CreateSslStreamInternal, (UnityTlsProvider * __this, SslStream * sslStream, Stream * innerStream, bool leaveInnerStreamOpen, MonoTlsSettings * settings));
IL2CPP_REGISTER_METHOD(0x02491630, bool, ValidateCertificate, (UnityTlsProvider * __this, ICertificateValidator2 * validator, String * targetHost, bool serverMode, X509CertificateCollection_1 * certificates, bool wantsChain, X509Chain * * chain, MonoSslPolicyErrors__Enum * errors, int32_t * status11));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UnityTlsProvider * __this));
}
