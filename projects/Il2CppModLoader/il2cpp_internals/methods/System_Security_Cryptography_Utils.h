#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::Utils {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01E14140, RNGCryptoServiceProvider *, get_StaticRandomNumberGenerator, ());
IL2CPP_REGISTER_METHOD(0x01E14330, Byte__Array *, GenerateRandom, (int32_t keySize));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasAlgorithm, (int32_t dwCalg, int32_t dwKeySize));
IL2CPP_REGISTER_METHOD(0x01E14400, String *, DiscardWhiteSpaces, (String * inputBuffer));
IL2CPP_REGISTER_METHOD(0x01E144C0, String *, DiscardWhiteSpaces, (String * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x01E14690, int32_t, ConvertByteArrayToInt, (Byte__Array * input));
IL2CPP_REGISTER_METHOD(0x01E146F0, Byte__Array *, ConvertIntToByteArray, (int32_t dwInput));
IL2CPP_REGISTER_METHOD(0x01E14890, void, ConvertIntToByteArray, (uint32_t dwInput, Byte__Array * * counter));
IL2CPP_REGISTER_METHOD(0x01E14910, Byte__Array *, FixupKeyParity, (Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x01E14A60, void, DWORDFromLittleEndian, (uint32_t * x, int32_t digits, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x01E14AC0, void, DWORDToLittleEndian, (Byte__Array * block, UInt32__Array * x, int32_t digits));
IL2CPP_REGISTER_METHOD(0x01E14C30, void, DWORDFromBigEndian, (uint32_t * x, int32_t digits, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x01E14C90, void, DWORDToBigEndian, (Byte__Array * block, UInt32__Array * x, int32_t digits));
IL2CPP_REGISTER_METHOD(0x01E14E00, void, QuadWordFromBigEndian, (uint64_t * x, int32_t digits, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x01E14E90, void, QuadWordToBigEndian, (Byte__Array * block, UInt64__Array * x, int32_t digits));
IL2CPP_REGISTER_METHOD(0x01E15120, Byte__Array *, Int, (uint32_t i));
IL2CPP_REGISTER_METHOD(0x01E15230, Byte__Array *, RsaOaepEncrypt, (RSA * rsa, HashAlgorithm * hash, PKCS1MaskGenerationMethod * mgf, RandomNumberGenerator * rng, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E15300, Byte__Array *, RsaOaepDecrypt, (RSA * rsa, HashAlgorithm * hash, PKCS1MaskGenerationMethod * mgf, Byte__Array * encryptedData));
IL2CPP_REGISTER_METHODINFO(0x04768AD8, Utils_RsaOaepDecrypt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E15400, Byte__Array *, RsaPkcs1Padding, (RSA * rsa, Byte__Array * oid, Byte__Array * hash));
IL2CPP_REGISTER_METHODINFO(0x047629E0, Utils_RsaPkcs1Padding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E157A0, bool, CompareBigIntArrays, (Byte__Array * lhs, Byte__Array * rhs));
IL2CPP_REGISTER_METHOD(0x01E158F0, HashAlgorithmName, OidToHashAlgorithmName, (String * oid));
IL2CPP_REGISTER_METHODINFO(0x04782120, Utils_OidToHashAlgorithmName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E15A80, bool, DoesRsaKeyOverride, (RSA * rsaKey, String * methodName, Type__Array * parameterTypes));
IL2CPP_REGISTER_METHOD(0x01E15CA0, bool, DoesRsaKeyOverrideSlowPath, (Type * t, String * methodName, Type__Array * parameterTypes));
IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProduceLegacyHmacValues, ());
}
