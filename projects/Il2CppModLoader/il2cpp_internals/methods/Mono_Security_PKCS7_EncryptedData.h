#include <interception_macros.h>

namespace app::methods::Mono::Security::PKCS7_EncryptedData {
IL2CPP_REGISTER_METHOD(0x00531660, void, __ctor, (PKCS7_EncryptedData * __this));
IL2CPP_REGISTER_METHOD(0x025DA3B0, void, __ctor, (PKCS7_EncryptedData * __this, ASN1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x0470A108, PKCS7_EncryptedData__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, PKCS7_ContentInfo *, get_EncryptionAlgorithm, (PKCS7_EncryptedData * __this));
IL2CPP_REGISTER_METHOD(0x025DA8B0, Byte__Array *, get_EncryptedContent, (PKCS7_EncryptedData * __this));
IL2CPP_REGISTER_METHOD(0x00531660, void, __ctor, (PKCS7_EncryptedData_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A47D00, void, __ctor, (PKCS7_EncryptedData_1 * __this, ASN1_1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x047046A8, PKCS7_EncryptedData_1__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, PKCS7_ContentInfo_1 *, get_EncryptionAlgorithm, (PKCS7_EncryptedData_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A48200, Byte__Array *, get_EncryptedContent, (PKCS7_EncryptedData_1 * __this));
}
