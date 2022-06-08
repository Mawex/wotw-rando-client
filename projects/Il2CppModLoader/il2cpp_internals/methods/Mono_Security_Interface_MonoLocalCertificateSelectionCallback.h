using namespace app;

namespace app::methods::Mono::Security::Interface::MonoLocalCertificateSelectionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MonoLocalCertificateSelectionCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD0F10, X509Certificate_1 *, Invoke, (MonoLocalCertificateSelectionCallback * __this, String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers));
IL2CPP_REGISTER_METHOD(0x01BD1540, IAsyncResult *, BeginInvoke, (MonoLocalCertificateSelectionCallback * __this, String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, X509Certificate_1 *, EndInvoke, (MonoLocalCertificateSelectionCallback * __this, IAsyncResult * result));
}
