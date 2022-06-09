#include <interception_macros.h>

namespace app::methods::Mono_Net_Security::SystemCertificateValidator {
IL2CPP_REGISTER_METHOD(0x02185DB0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02185E70, X509Chain *, CreateX509Chain, (app::X509CertificateCollection_1 * certs));
IL2CPP_REGISTER_METHOD(0x00417870, bool, NeedsChain, (app::MonoTlsSettings * settings));
}
