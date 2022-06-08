#include <interception_macros.h>

namespace app::methods::Mono::Unity::CertHelper {
IL2CPP_REGISTER_METHOD(0x02186110, void, AddCertificatesToNativeChain, (UnityTls_unitytls_x509list * nativeCertificateChain, X509CertificateCollection_1 * certificates, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x02186280, void, AddCertificateToNativeChain, (UnityTls_unitytls_x509list * nativeCertificateChain, X509Certificate_1 * certificate, UnityTls_unitytls_errorstate * errorState));
IL2CPP_REGISTER_METHOD(0x021865F0, X509CertificateCollection_1 *, NativeChainToManagedCollection, (UnityTls_unitytls_x509list_ref nativeCertificateChain, UnityTls_unitytls_errorstate * errorState));
}
