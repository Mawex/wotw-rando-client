using namespace app;

namespace app::methods::Mono::Security::Interface::CertificateValidationHelper {
IL2CPP_REGISTER_METHOD(0x02A46150, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02A46210, bool, get_SupportsX509Chain, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02A462B0, ICertificateValidator2 *, GetInternalValidator, (MonoTlsSettings * settings, MonoTlsProvider * provider));
}
