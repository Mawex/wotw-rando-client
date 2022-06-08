using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::PublicKey {
IL2CPP_REGISTER_METHOD(0x021C10B0, void, __ctor, (PublicKey * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x002FB930, AsnEncodedData *, get_EncodedKeyValue, (PublicKey * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, AsnEncodedData *, get_EncodedParameters, (PublicKey * __this));
IL2CPP_REGISTER_METHOD(0x021C1850, AsymmetricAlgorithm *, get_Key, (PublicKey * __this));
IL2CPP_REGISTER_METHODINFO(0x04777168, PublicKey_get_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, Oid *, get_Oid, (PublicKey * __this));
IL2CPP_REGISTER_METHOD(0x021C1AA0, Byte__Array *, GetUnsignedBigInteger, (Byte__Array * integer));
IL2CPP_REGISTER_METHOD(0x021C1B90, DSA *, DecodeDSA, (Byte__Array * rawPublicKey, Byte__Array * rawParameters));
IL2CPP_REGISTER_METHODINFO(0x0477CFC8, PublicKey_DecodeDSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C21E0, RSA *, DecodeRSA, (Byte__Array * rawPublicKey));
IL2CPP_REGISTER_METHODINFO(0x04713D58, PublicKey_DecodeRSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C2650, void, __cctor, (MethodInfo * method));
}
