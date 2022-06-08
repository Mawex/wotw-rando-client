#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::CertificateValidationCallback2 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CertificateValidationCallback2 * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, ValidationResult *, Invoke, (CertificateValidationCallback2 * __this, X509CertificateCollection_2 * collection));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (CertificateValidationCallback2 * __this, X509CertificateCollection_2 * collection, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, ValidationResult *, EndInvoke, (CertificateValidationCallback2 * __this, IAsyncResult * result));
}
