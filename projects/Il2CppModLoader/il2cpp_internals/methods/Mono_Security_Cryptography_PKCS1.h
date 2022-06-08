#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::PKCS1 {
IL2CPP_REGISTER_METHOD(0x025D0AD0, bool, Compare, (Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x025D0B70, Byte__Array *, xor, (Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x025D0C90, Byte__Array *, GetEmptyHash, (HashAlgorithm * hash));
IL2CPP_REGISTER_METHOD(0x025D0EF0, Byte__Array *, I2OSP, (int32_t x, int32_t size));
IL2CPP_REGISTER_METHOD(0x025D0FD0, Byte__Array *, I2OSP, (Byte__Array * x, int32_t size));
IL2CPP_REGISTER_METHOD(0x025D10A0, Byte__Array *, OS2IP, (Byte__Array * x));
IL2CPP_REGISTER_METHOD(0x025D11C0, Byte__Array *, RSAEP, (RSA * rsa, Byte__Array * m));
IL2CPP_REGISTER_METHOD(0x025D11F0, Byte__Array *, RSADP, (RSA * rsa, Byte__Array * c));
IL2CPP_REGISTER_METHOD(0x025D11F0, Byte__Array *, RSASP1, (RSA * rsa, Byte__Array * m));
IL2CPP_REGISTER_METHOD(0x025D11C0, Byte__Array *, RSAVP1, (RSA * rsa, Byte__Array * s));
IL2CPP_REGISTER_METHOD(0x025D1220, Byte__Array *, Encrypt_OAEP, (RSA * rsa, HashAlgorithm * hash, RandomNumberGenerator * rng, Byte__Array * M));
IL2CPP_REGISTER_METHODINFO(0x047853D0, PKCS1_Encrypt_OAEP__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D1580, Byte__Array *, Decrypt_OAEP, (RSA * rsa, HashAlgorithm * hash, Byte__Array * C));
IL2CPP_REGISTER_METHODINFO(0x0471B2A8, PKCS1_Decrypt_OAEP__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D1920, Byte__Array *, Sign_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue));
IL2CPP_REGISTER_METHOD(0x025D1A40, Byte__Array *, Sign_v15, (RSA * rsa, String * hashName, Byte__Array * hashValue));
IL2CPP_REGISTER_METHOD(0x025D1BC0, bool, Verify_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue, Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x025D1CA0, bool, Verify_v15, (RSA * rsa, String * hashName, Byte__Array * hashValue, Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x025D1E40, bool, Verify_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue, Byte__Array * signature, bool tryNonStandardEncoding));
IL2CPP_REGISTER_METHOD(0x025D20D0, Byte__Array *, Encode_v15, (HashAlgorithm * hash, Byte__Array * hashValue, int32_t emLength));
IL2CPP_REGISTER_METHODINFO(0x04741A90, PKCS1_Encode_v15__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D2750, Byte__Array *, MGF1, (HashAlgorithm * hash, Byte__Array * mgfSeed, int32_t maskLen));
IL2CPP_REGISTER_METHODINFO(0x047697A0, PKCS1_MGF1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D29A0, HashAlgorithm *, CreateFromName, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04743FD8, PKCS1_CreateFromName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D2E00, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x025D0AD0, bool, Compare, (Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x02A3E610, Byte__Array *, I2OSP, (Byte__Array * x, int32_t size));
IL2CPP_REGISTER_METHOD(0x02A3E6E0, Byte__Array *, OS2IP, (Byte__Array * x));
IL2CPP_REGISTER_METHOD(0x025D11F0, Byte__Array *, RSASP1, (RSA * rsa, Byte__Array * m));
IL2CPP_REGISTER_METHOD(0x025D11C0, Byte__Array *, RSAVP1, (RSA * rsa, Byte__Array * s));
IL2CPP_REGISTER_METHOD(0x02A3E800, Byte__Array *, Sign_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue));
IL2CPP_REGISTER_METHOD(0x02A3E920, bool, Verify_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue, Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x02A3EA00, bool, Verify_v15, (RSA * rsa, HashAlgorithm * hash, Byte__Array * hashValue, Byte__Array * signature, bool tryNonStandardEncoding));
IL2CPP_REGISTER_METHOD(0x02A3EC90, Byte__Array *, Encode_v15, (HashAlgorithm * hash, Byte__Array * hashValue, int32_t emLength));
IL2CPP_REGISTER_METHODINFO(0x04763D08, PKCS1_1_Encode_v15__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3F310, String *, HashNameFromOid, (String * oid, bool throwOnError));
IL2CPP_REGISTER_METHODINFO(0x0474C4C8, PKCS1_1_HashNameFromOid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3F6F0, HashAlgorithm *, CreateFromOid, (String * oid));
IL2CPP_REGISTER_METHOD(0x02A3F7A0, HashAlgorithm *, CreateFromName, (String * name));
IL2CPP_REGISTER_METHODINFO(0x0475C1B0, PKCS1_1_CreateFromName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3FC00, void, __cctor, ());
}
