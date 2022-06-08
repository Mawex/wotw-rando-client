#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::CertificateSelectionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CertificateSelectionCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD0F10, X509Certificate_1 *, Invoke, (CertificateSelectionCallback * __this, X509CertificateCollection_1 * clientCertificates, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates));
IL2CPP_REGISTER_METHOD(0x01BD1540, IAsyncResult *, BeginInvoke, (CertificateSelectionCallback * __this, X509CertificateCollection_1 * clientCertificates, X509Certificate_1 * serverCertificate, String * targetHost, X509CertificateCollection_1 * serverRequestedCertificates, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, X509Certificate_1 *, EndInvoke, (CertificateSelectionCallback * __this, IAsyncResult * result));
}
