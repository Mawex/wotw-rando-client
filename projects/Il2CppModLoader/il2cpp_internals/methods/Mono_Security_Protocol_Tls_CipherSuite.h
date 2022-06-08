#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::CipherSuite {
IL2CPP_REGISTER_METHOD(0x002FBB60, ICryptoTransform *, get_EncryptionCipher, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, ICryptoTransform *, get_DecryptionCipher, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, KeyedHashAlgorithm *, get_ClientHMAC, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, KeyedHashAlgorithm *, get_ServerHMAC, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, CipherAlgorithmType__Enum, get_CipherAlgorithmType, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F62CE0, String *, get_HashAlgorithmName, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F62D80, HashAlgorithm *, CreateHashAlgorithm, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, HashAlgorithmType__Enum, get_HashAlgorithmType, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F62DA0, int32_t, get_HashSize, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, ExchangeAlgorithmType__Enum, get_ExchangeAlgorithmType, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x00654950, CipherMode__Enum, get_CipherMode, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01B67060, int16_t, get_Code, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsExportable, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x00446970, uint8_t, get_KeyMaterialSize, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeyBlockSize, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x004E5A00, uint8_t, get_ExpandedKeyMaterialSize, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F62DC0, int16_t, get_EffectiveKeyBits, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x00446590, uint8_t, get_IvSize, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Context_1 *, get_Context, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Context, (CipherSuite * __this, Context_1 * value));
IL2CPP_REGISTER_METHOD(0x01F62DD0, void, __ctor, (CipherSuite * __this, int16_t code, String * name, CipherAlgorithmType__Enum cipherAlgorithmType, HashAlgorithmType__Enum hashAlgorithmType, ExchangeAlgorithmType__Enum exchangeAlgorithmType, bool exportable, bool blockMode, uint8_t keyMaterialSize, uint8_t expandedKeyMaterialSize, int16_t effectiveKeyBits, uint8_t ivSize, uint8_t blockSize));
IL2CPP_REGISTER_METHOD(0x01F62E80, void, Write, (CipherSuite * __this, Byte__Array * array, int32_t offset, int16_t value));
IL2CPP_REGISTER_METHODINFO(0x04766738, CipherSuite_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F62F90, void, Write, (CipherSuite * __this, Byte__Array * array, int32_t offset, uint64_t value));
IL2CPP_REGISTER_METHODINFO(0x0476F788, CipherSuite_Write_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F631B0, void, InitializeCipher, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F631D0, Byte__Array *, EncryptRecord, (CipherSuite * __this, Byte__Array * fragment, Byte__Array * mac));
IL2CPP_REGISTER_METHOD(0x01F633A0, void, DecryptRecord, (CipherSuite * __this, Byte__Array * fragment, Byte__Array * * dcrFragment, Byte__Array * * dcrMAC));
IL2CPP_REGISTER_METHOD(0x01F635A0, Byte__Array *, CreatePremasterSecret, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F636E0, Byte__Array *, PRF, (CipherSuite * __this, Byte__Array * secret, String * label, Byte__Array * data, int32_t length));
IL2CPP_REGISTER_METHOD(0x01F63AD0, Byte__Array *, Expand, (CipherSuite * __this, HashAlgorithm * hash, Byte__Array * secret, Byte__Array * seed, int32_t length));
IL2CPP_REGISTER_METHOD(0x01F64220, void, createEncryptionCipher, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F648E0, void, createDecryptionCipher, (CipherSuite * __this));
IL2CPP_REGISTER_METHOD(0x01F64FA0, void, __cctor, ());
}
