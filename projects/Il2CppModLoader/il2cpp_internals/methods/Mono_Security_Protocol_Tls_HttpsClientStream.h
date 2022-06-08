#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::HttpsClientStream {
IL2CPP_REGISTER_METHOD(0x01F75C00, void, __ctor, (HttpsClientStream * __this, Stream * stream, X509CertificateCollection_1 * clientCertificates, HttpWebRequest * request, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F76170, bool, get_TrustFailure, (HttpsClientStream * __this));
IL2CPP_REGISTER_METHOD(0x01F76190, bool, RaiseServerCertificateValidation, (HttpsClientStream * __this, X509Certificate_1 * certificate, Int32__Array * certificateErrors));
}
