#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::CryptoConvert {
IL2CPP_REGISTER_METHOD(0x025C5550, int32_t, ToInt32LE, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x025C5550, uint32_t, ToUInt32LE, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x025C5610, Byte__Array *, GetBytesLE, (int32_t val));
IL2CPP_REGISTER_METHOD(0x025C5720, Byte__Array *, Trim, (Byte__Array * array));
IL2CPP_REGISTER_METHOD(0x025C5830, RSA *, FromCapiPrivateKeyBlob, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04756FA8, CryptoConvert_FromCapiPrivateKeyBlob__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C6360, DSA *, FromCapiPrivateKeyBlobDSA, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x047784D0, CryptoConvert_FromCapiPrivateKeyBlobDSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C6AE0, Byte__Array *, ToCapiPrivateKeyBlob, (RSA * rsa));
IL2CPP_REGISTER_METHOD(0x025C7070, Byte__Array *, ToCapiPrivateKeyBlob, (DSA * dsa));
IL2CPP_REGISTER_METHOD(0x025C7770, RSA *, FromCapiPublicKeyBlob, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04793458, CryptoConvert_FromCapiPublicKeyBlob__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C7C10, DSA *, FromCapiPublicKeyBlobDSA, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04708600, CryptoConvert_FromCapiPublicKeyBlobDSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C8390, Byte__Array *, ToCapiPublicKeyBlob, (RSA * rsa));
IL2CPP_REGISTER_METHOD(0x025C8750, Byte__Array *, ToCapiPublicKeyBlob, (DSA * dsa));
IL2CPP_REGISTER_METHOD(0x025C8E40, RSA *, FromCapiKeyBlob, (Byte__Array * blob));
IL2CPP_REGISTER_METHOD(0x025C8E50, RSA *, FromCapiKeyBlob, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0472EB00, CryptoConvert_FromCapiKeyBlob_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C9010, DSA *, FromCapiKeyBlobDSA, (Byte__Array * blob));
IL2CPP_REGISTER_METHOD(0x025C9170, DSA *, FromCapiKeyBlobDSA, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04754528, CryptoConvert_FromCapiKeyBlobDSA_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C5550, int32_t, ToInt32LE, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x025C5550, uint32_t, ToUInt32LE, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02A3AE60, Byte__Array *, Trim, (Byte__Array * array));
IL2CPP_REGISTER_METHOD(0x02A3AF70, RSA *, FromCapiPrivateKeyBlob, (Byte__Array * blob));
IL2CPP_REGISTER_METHOD(0x02A3AF80, RSA *, FromCapiPrivateKeyBlob, (Byte__Array * blob, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0472BD18, CryptoConvert_1_FromCapiPrivateKeyBlob_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3BE00, String *, ToHex, (Byte__Array * input));
IL2CPP_REGISTER_METHOD(0x02A3C010, uint8_t, FromHexChar, (uint16_t c));
IL2CPP_REGISTER_METHODINFO(0x0471A5D8, CryptoConvert_1_FromHexChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3C0F0, Byte__Array *, FromHex, (String * hex));
IL2CPP_REGISTER_METHODINFO(0x04759688, CryptoConvert_1_FromHex__MethodInfo);
}
