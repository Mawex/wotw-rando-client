#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Helper2 {
IL2CPP_REGISTER_METHOD(0x0257BC80, int64_t, GetSubjectNameHash, (X509Certificate_1 * certificate));
IL2CPP_REGISTER_METHOD(0x0257BCB0, int64_t, GetSubjectNameHash, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x0257BD00, void, ExportAsPEM, (X509Certificate_1 * certificate, Stream * stream, bool includeHumanReadableForm));
IL2CPP_REGISTER_METHOD(0x0257BD40, void, ExportAsPEM, (X509CertificateImpl * impl, Stream * stream, bool includeHumanReadableForm));
IL2CPP_REGISTER_METHOD(0x0257BD90, void, Initialize, ());
IL2CPP_REGISTER_METHOD(0x0257BF40, void, ThrowIfContextInvalid, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x0257BF50, X509Certificate_1 *, GetNativeInstance, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHODINFO(0x04729EF8, X509Helper2_GetNativeInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257BFA0, X509Certificate2Impl *, Import, (Byte__Array * rawData, String * password, X509KeyStorageFlags__Enum keyStorageFlags, bool disableProvider));
IL2CPP_REGISTER_METHOD(0x0257C120, X509Certificate2Impl *, Import, (X509Certificate_1 * cert, bool disableProvider));
IL2CPP_REGISTER_METHOD(0x021C5A50, X509Certificate_2 *, GetMonoCertificate, (X509Certificate2 * certificate));
IL2CPP_REGISTER_METHODINFO(0x04780110, X509Helper2_GetMonoCertificate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257C2A0, X509ChainImpl *, CreateChainImpl, (bool useMachineContext));
IL2CPP_REGISTER_METHOD(0x01E17CF0, bool, IsValid, (X509ChainImpl * impl));
IL2CPP_REGISTER_METHOD(0x0257C3F0, void, ThrowIfContextInvalid, (X509ChainImpl * impl));
IL2CPP_REGISTER_METHODINFO(0x0478D5B8, X509Helper2_ThrowIfContextInvalid_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257C4A0, Exception *, GetInvalidChainContextException, ());
}
