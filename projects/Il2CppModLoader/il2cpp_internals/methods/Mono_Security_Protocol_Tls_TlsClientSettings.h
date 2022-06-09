#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::TlsClientSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_TargetHost, (app::TlsClientSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TargetHost, (app::TlsClientSettings * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, X509CertificateCollection_1 *, get_Certificates, (app::TlsClientSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Certificates, (app::TlsClientSettings * this_ptr, app::X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB950, X509Certificate_1 *, get_ClientCertificate, (app::TlsClientSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291B8F0, void, set_ClientCertificate, (app::TlsClientSettings * this_ptr, app::X509Certificate_1 * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, RSAManaged_1 *, get_CertificateRSA, (app::TlsClientSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291B900, void, __ctor, (app::TlsClientSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0291BA60, void, UpdateCertificateRSA, (app::TlsClientSettings * this_ptr));
}
