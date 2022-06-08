#include <interception_macros.h>

namespace app::methods::System::Net::Security::LocalCertSelectionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (LocalCertSelectionCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BD0F10, X509Certificate_1 *, Invoke, (LocalCertSelectionCallback * __this, String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers));
IL2CPP_REGISTER_METHOD(0x01BD1540, IAsyncResult *, BeginInvoke, (LocalCertSelectionCallback * __this, String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, X509Certificate_1 *, EndInvoke, (LocalCertSelectionCallback * __this, IAsyncResult * result));
}
