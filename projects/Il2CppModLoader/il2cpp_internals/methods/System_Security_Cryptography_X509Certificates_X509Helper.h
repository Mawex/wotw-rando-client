using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Helper {
IL2CPP_REGISTER_METHOD(0x01E178B0, void, InstallNativeHelper, (INativeCertificateHelper * helper));
IL2CPP_REGISTER_METHOD(0x01E17940, X509CertificateImpl *, Import, (Byte__Array * rawData));
IL2CPP_REGISTER_METHOD(0x01E17950, X509CertificateImpl *, InitFromCertificate, (X509Certificate_1 * cert));
IL2CPP_REGISTER_METHOD(0x01E17A80, X509CertificateImpl *, InitFromCertificate, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x01E17CF0, bool, IsValid, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x01E17D10, void, ThrowIfContextInvalid, (X509CertificateImpl * impl));
IL2CPP_REGISTER_METHODINFO(0x04726110, X509Helper_ThrowIfContextInvalid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E17DC0, Exception *, GetInvalidContextException, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E17F20, X509Certificate *, ImportPkcs12, (Byte__Array * rawData, String * password));
IL2CPP_REGISTER_METHOD(0x01E18530, Byte__Array *, PEM, (String * type, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E18730, Byte__Array *, ConvertData, (Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E18810, X509CertificateImpl *, ImportCore, (Byte__Array * rawData));
IL2CPP_REGISTER_METHODINFO(0x04733708, X509Helper_ImportCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E18A80, X509CertificateImpl *, Import, (Byte__Array * rawData, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHOD(0x01E18CD0, String *, ToHexString, (Byte__Array * data));
}
