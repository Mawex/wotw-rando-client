#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509Certificate2 {
IL2CPP_REGISTER_METHOD(0x021C47A0, X509Certificate2Impl *, get_Impl, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4880, void, __ctor_1, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4910, void, __ctor_2, (app::X509Certificate2 * this_ptr, app::Byte__Array * raw_data));
IL2CPP_REGISTER_METHOD(0x021C49D0, void, __ctor_3, (app::X509Certificate2 * this_ptr, app::String * file_name));
IL2CPP_REGISTER_METHOD(0x021C4AA0, void, __ctor_4, (app::X509Certificate2 * this_ptr, app::X509Certificate_1 * certificate));
IL2CPP_REGISTER_METHOD(0x021C4B50, void, __ctor_5, (app::X509Certificate2 * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x021C4CF0, X509ExtensionCollection_2 *, get_Extensions, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4D20, X500DistinguishedName *, get_IssuerName, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4D50, DateTime, get_NotAfter, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4D90, DateTime, get_NotBefore, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4DD0, AsymmetricAlgorithm *, get_PrivateKey, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4E00, void, set_PrivateKey, (app::X509Certificate2 * this_ptr, app::AsymmetricAlgorithm * value));
IL2CPP_REGISTER_METHOD(0x021C4E40, PublicKey *, get_PublicKey, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4E70, String *, get_SerialNumber, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4E90, Oid *, get_SignatureAlgorithm, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4EC0, X500DistinguishedName *, get_SubjectName, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EEAF40, String *, get_Thumbprint, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4EF0, int32_t, get_Version, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C4F20, String *, GetNameInfo, (app::X509Certificate2 * this_ptr, app::X509NameType__Enum name_type, bool for_issuer));
IL2CPP_REGISTER_METHOD(0x021C4F70, void, Import_1, (app::X509Certificate2 * this_ptr, app::Byte__Array * raw_data, app::String * password, app::X509KeyStorageFlags__Enum key_storage_flags));
IL2CPP_REGISTER_METHOD(0x01E16A00, void, Import_2, (app::X509Certificate2 * this_ptr, app::String * file_name, app::String * password, app::X509KeyStorageFlags__Enum key_storage_flags));
IL2CPP_REGISTER_METHOD(0x021C4FD0, void, Reset, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C5080, String *, ToString_1, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C5190, String *, ToString_2, (app::X509Certificate2 * this_ptr, bool verbose));
IL2CPP_REGISTER_METHOD(0x021C58F0, void, AppendBuffer, (app::StringBuilder * sb, app::Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x021C5A10, bool, Verify, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C5A50, X509Certificate_2 *, get_MonoCertificate, (app::X509Certificate2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C5B90, void, __cctor, ());
}
