using namespace app;

namespace app::methods::Mono::Net::Security::ChainValidationHelper {
IL2CPP_REGISTER_METHOD(0x0217CCD0, ICertificateValidator *, GetInternalValidator, (MonoTlsProvider * provider, MonoTlsSettings * settings));
IL2CPP_REGISTER_METHOD(0x0217CF20, ChainValidationHelper *, Create, (MonoTlsProvider * provider, MonoTlsSettings * * settings, MonoTlsStream * stream));
IL2CPP_REGISTER_METHOD(0x0217D0B0, void, __ctor, (ChainValidationHelper * __this, MonoTlsProvider * provider, MonoTlsSettings * settings, bool cloneSettings, MonoTlsStream * stream, ServerCertValidationCallbackWrapper * callbackWrapper));
IL2CPP_REGISTER_METHOD(0x01F767C0, X509Certificate_1 *, DefaultSelectionCallback, (String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers));
IL2CPP_REGISTER_METHODINFO(0x04748FE8, ChainValidationHelper_DefaultSelectionCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, MonoTlsSettings *, get_Settings, (ChainValidationHelper * __this));
IL2CPP_REGISTER_METHOD(0x0217D630, bool, SelectClientCertificate, (ChainValidationHelper * __this, String * targetHost, X509CertificateCollection_1 * localCertificates, X509Certificate_1 * remoteCertificate, String__Array * acceptableIssuers, X509Certificate_1 * * clientCertificate));
IL2CPP_REGISTER_METHOD(0x0217D680, ValidationResult *, ValidateCertificate, (ChainValidationHelper * __this, String * host, bool serverMode, X509CertificateCollection_1 * certs));
IL2CPP_REGISTER_METHODINFO(0x047097C0, ChainValidationHelper_ValidateCertificate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0217D7E0, ValidationResult *, ValidateCertificate, (ChainValidationHelper * __this, String * host, bool serverMode, X509Certificate_1 * leaf, X509Chain * chain));
IL2CPP_REGISTER_METHODINFO(0x04776120, ChainValidationHelper_ValidateCertificate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0217D920, ValidationResult *, ValidateChain, (ChainValidationHelper * __this, String * host, bool server, X509Certificate_1 * leaf, X509Chain * chain, X509CertificateCollection_1 * certs, SslPolicyErrors__Enum errors));
IL2CPP_REGISTER_METHOD(0x0217DAD0, ValidationResult *, ValidateChain, (ChainValidationHelper * __this, String * host, bool server, X509Certificate_1 * leaf, X509Chain * * chain, X509CertificateCollection_1 * certs, SslPolicyErrors__Enum errors));
}
