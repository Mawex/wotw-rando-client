#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Certificate {
IL2CPP_REGISTER_METHOD(0x01E15DC0, void, __ctor, (X509Certificate_1 * __this, Byte__Array * data, bool dates));
IL2CPP_REGISTER_METHOD(0x01E15E10, void, __ctor, (X509Certificate_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E15E50, void, __ctor, (X509Certificate_1 * __this, X509CertificateImpl * impl));
IL2CPP_REGISTER_METHODINFO(0x0478C6D0, X509Certificate_1__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E15F20, void, __ctor, (X509Certificate_1 * __this, X509Certificate_1 * cert));
IL2CPP_REGISTER_METHODINFO(0x04773EB8, X509Certificate_1__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E160E0, void, ImportHandle, (X509Certificate_1 * __this, X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x01E16110, X509CertificateImpl *, get_Impl, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16130, bool, get_IsValid, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16150, bool, Equals, (X509Certificate_1 * __this, X509Certificate_1 * other));
IL2CPP_REGISTER_METHODINFO(0x047745B8, X509Certificate_1_Equals__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E16290, Byte__Array *, GetCertHash, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E162F0, String *, GetCertHashString, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16320, int32_t, GetHashCode, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16380, String *, GetIssuerName, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E163C0, String *, GetName, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16400, Byte__Array *, GetPublicKey, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16440, Byte__Array *, GetRawCertData, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16480, Byte__Array *, GetSerialNumber, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E164C0, String *, GetSerialNumberString, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16610, String *, ToString, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16650, String *, ToString, (X509Certificate_1 * __this, bool fVerbose));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E166E0, void, __ctor, (X509Certificate_1 * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E16810, String *, get_Issuer, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16860, String *, get_Subject, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E168B0, bool, Equals, (X509Certificate_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01E169A0, void, Import, (X509Certificate_1 * __this, Byte__Array * rawData, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHOD(0x01E16A00, void, Import, (X509Certificate_1 * __this, String * fileName, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (X509Certificate_1 * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x01E16A60, void, ISerializable_GetObjectData, (X509Certificate_1 * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04735AF0, X509Certificate_1_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CEB0, void, Dispose, (X509Certificate_1 * __this));
IL2CPP_REGISTER_METHOD(0x01E16B70, void, Dispose, (X509Certificate_1 * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01E16B90, void, Reset, (X509Certificate_1 * __this));
}
