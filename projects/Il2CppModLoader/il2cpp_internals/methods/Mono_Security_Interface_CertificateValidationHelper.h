#include <interception_macros.h>

namespace app::methods::Mono_Security_Interface::CertificateValidationHelper {
IL2CPP_REGISTER_METHOD(0x02A46150, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02A46210, bool, get_SupportsX509Chain, ());
IL2CPP_REGISTER_METHOD(0x02A462B0, ICertificateValidator2 *, GetInternalValidator, (app::MonoTlsSettings * settings, app::MonoTlsProvider * provider));
}
