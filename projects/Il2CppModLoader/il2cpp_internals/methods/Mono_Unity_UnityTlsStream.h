#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTlsStream {
IL2CPP_REGISTER_METHOD(0x02491D80, void, __ctor, (UnityTlsStream * __this, Stream * innerStream, bool leaveInnerStreamOpen, SslStream * owner, MonoTlsSettings * settings, MonoTlsProvider * provider));
IL2CPP_REGISTER_METHOD(0x02491E60, MobileTlsContext *, CreateContext, (UnityTlsStream * __this, bool serverMode, String * targetHost, SslProtocols__Enum enabledProtocols, X509Certificate_1 * serverCertificate, X509CertificateCollection_1 * clientCertificates, bool askForClientCert));
}
