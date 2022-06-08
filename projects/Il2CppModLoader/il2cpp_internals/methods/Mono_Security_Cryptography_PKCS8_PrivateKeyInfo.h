using namespace app;

namespace app::methods::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo {
IL2CPP_REGISTER_METHOD(0x025D3650, void, __ctor, (PKCS8_PrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D37A0, void, __ctor, (PKCS8_PrivateKeyInfo * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x025D3900, Byte__Array *, get_PrivateKey, (PKCS8_PrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D3A50, void, Decode, (PKCS8_PrivateKeyInfo * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x047585F0, PKCS8_PrivateKeyInfo_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D3E10, Byte__Array *, RemoveLeadingZero, (Byte__Array * bigInt));
IL2CPP_REGISTER_METHOD(0x025D3F10, Byte__Array *, Normalize, (Byte__Array * bigInt, int32_t length));
IL2CPP_REGISTER_METHOD(0x025D4000, RSA *, DecodeRSA, (Byte__Array * keypair));
IL2CPP_REGISTER_METHODINFO(0x047473C8, PKCS8_PrivateKeyInfo_DecodeRSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D46B0, DSA *, DecodeDSA, (Byte__Array * privateKey, DSAParameters dsaParameters));
IL2CPP_REGISTER_METHODINFO(0x04713620, PKCS8_PrivateKeyInfo_DecodeDSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A40BB0, void, __ctor, (PKCS8_PrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A40D00, void, __ctor, (PKCS8_PrivateKeyInfo_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Algorithm, (PKCS8_PrivateKeyInfo_1 * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A40D30, Byte__Array *, get_PrivateKey, (PKCS8_PrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A40E80, void, set_PrivateKey, (PKCS8_PrivateKeyInfo_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x047374C8, PKCS8_PrivateKeyInfo_1_set_PrivateKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A41000, void, Decode, (PKCS8_PrivateKeyInfo_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04779DE0, PKCS8_PrivateKeyInfo_1_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A413C0, Byte__Array *, GetBytes, (PKCS8_PrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A41BD0, Byte__Array *, RemoveLeadingZero, (Byte__Array * bigInt));
IL2CPP_REGISTER_METHOD(0x02A41CD0, Byte__Array *, Normalize, (Byte__Array * bigInt, int32_t length));
IL2CPP_REGISTER_METHOD(0x02A41DC0, RSA *, DecodeRSA, (Byte__Array * keypair));
IL2CPP_REGISTER_METHODINFO(0x047807D8, PKCS8_PrivateKeyInfo_1_DecodeRSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A42470, Byte__Array *, Encode, (RSA * rsa));
IL2CPP_REGISTER_METHOD(0x02A427E0, DSA *, DecodeDSA, (Byte__Array * privateKey, DSAParameters dsaParameters));
IL2CPP_REGISTER_METHODINFO(0x04769708, PKCS8_PrivateKeyInfo_1_DecodeDSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A42A00, Byte__Array *, Encode, (DSA * dsa));
IL2CPP_REGISTER_METHOD(0x02A42A70, Byte__Array *, Encode, (AsymmetricAlgorithm * aa));
IL2CPP_REGISTER_METHODINFO(0x0476ED60, PKCS8_PrivateKeyInfo_1_Encode_2__MethodInfo);
}
