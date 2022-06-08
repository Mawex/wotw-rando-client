#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::HttpsClientStream___c {
IL2CPP_REGISTER_METHOD(0x01F76680, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (HttpsClientStream_c * __this));
IL2CPP_REGISTER_METHOD(0x01F767C0, X509Certificate_1 *, __ctor_b__2_0, (HttpsClientStream_c * __this, X509CertificateCollection_1 * clientCerts, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates));
IL2CPP_REGISTER_METHODINFO(0x0471AAA8, HttpsClientStream_c___ctor_b__2_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F76810, AsymmetricAlgorithm *, __ctor_b__2_1, (HttpsClientStream_c * __this, X509Certificate_1 * certificate, String * targetHost));
IL2CPP_REGISTER_METHODINFO(0x04777C98, HttpsClientStream_c___ctor_b__2_1__MethodInfo);
}
