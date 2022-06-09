#include <interception_macros.h>

namespace app::methods::Mono_Net_Security_Private::CallbackHelpers {
IL2CPP_REGISTER_METHOD(0x02185570, MonoRemoteCertificateValidationCallback *, PublicToMono, (app::RemoteCertificateValidationCallback * callback));
IL2CPP_REGISTER_METHOD(0x021857B0, RemoteCertificateValidationCallback *, MonoToPublic, (app::MonoRemoteCertificateValidationCallback * callback));
IL2CPP_REGISTER_METHOD(0x021859F0, LocalCertSelectionCallback *, MonoToInternal, (app::MonoLocalCertificateSelectionCallback * callback));
}
