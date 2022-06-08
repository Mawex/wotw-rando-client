#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Certificate2 {
IL2CPP_REGISTER_METHOD(0x021C47A0, X509Certificate2Impl *, get_Impl, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4880, void, __ctor, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4910, void, __ctor, (X509Certificate2 * __this, Byte__Array * rawData));
IL2CPP_REGISTER_METHOD(0x021C49D0, void, __ctor, (X509Certificate2 * __this, String * fileName));
IL2CPP_REGISTER_METHOD(0x021C4AA0, void, __ctor, (X509Certificate2 * __this, X509Certificate_1 * certificate));
IL2CPP_REGISTER_METHOD(0x021C4B50, void, __ctor, (X509Certificate2 * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x021C4CF0, X509ExtensionCollection_2 *, get_Extensions, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4D20, X500DistinguishedName *, get_IssuerName, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4D50, DateTime, get_NotAfter, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4D90, DateTime, get_NotBefore, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4DD0, AsymmetricAlgorithm *, get_PrivateKey, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4E00, void, set_PrivateKey, (X509Certificate2 * __this, AsymmetricAlgorithm * value));
IL2CPP_REGISTER_METHOD(0x021C4E40, PublicKey *, get_PublicKey, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4E70, String *, get_SerialNumber, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4E90, Oid *, get_SignatureAlgorithm, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4EC0, X500DistinguishedName *, get_SubjectName, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x01EEAF40, String *, get_Thumbprint, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4EF0, int32_t, get_Version, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C4F20, String *, GetNameInfo, (X509Certificate2 * __this, X509NameType__Enum nameType, bool forIssuer));
IL2CPP_REGISTER_METHOD(0x021C4F70, void, Import, (X509Certificate2 * __this, Byte__Array * rawData, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHOD(0x01E16A00, void, Import, (X509Certificate2 * __this, String * fileName, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHOD(0x021C4FD0, void, Reset, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C5080, String *, ToString, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C5190, String *, ToString, (X509Certificate2 * __this, bool verbose));
IL2CPP_REGISTER_METHOD(0x021C58F0, void, AppendBuffer, (StringBuilder * sb, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x021C5A10, bool, Verify, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C5A50, X509Certificate_2 *, get_MonoCertificate, (X509Certificate2 * __this));
IL2CPP_REGISTER_METHOD(0x021C5B90, void, __cctor, ());
}
