using namespace app;

namespace app::methods::System::Security::Cryptography::RSAEncryptionPadding {
IL2CPP_REGISTER_METHOD(0x028EA3A0, RSAEncryptionPadding *, get_Pkcs1, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028EA440, RSAEncryptionPadding *, get_OaepSHA1, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028EA4E0, RSAEncryptionPadding *, get_OaepSHA256, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028EA580, RSAEncryptionPadding *, get_OaepSHA384, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028EA620, RSAEncryptionPadding *, get_OaepSHA512, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (RSAEncryptionPadding * __this, RSAEncryptionPaddingMode__Enum mode, HashAlgorithmName oaepHashAlgorithm));
IL2CPP_REGISTER_METHOD(0x028EA6C0, RSAEncryptionPadding *, CreateOaep, (HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04754788, RSAEncryptionPadding_CreateOaep__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FC6D0, RSAEncryptionPaddingMode__Enum, get_Mode, (RSAEncryptionPadding * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, HashAlgorithmName, get_OaepHashAlgorithm, (RSAEncryptionPadding * __this));
IL2CPP_REGISTER_METHOD(0x028EA860, int32_t, GetHashCode, (RSAEncryptionPadding * __this));
IL2CPP_REGISTER_METHOD(0x022916C0, int32_t, CombineHashCodes, (int32_t h1, int32_t h2));
IL2CPP_REGISTER_METHOD(0x028EA920, bool, Equals, (RSAEncryptionPadding * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x028EA9D0, bool, Equals, (RSAEncryptionPadding * __this, RSAEncryptionPadding * other));
IL2CPP_REGISTER_METHOD(0x028EAB60, bool, operator___, (RSAEncryptionPadding * left, RSAEncryptionPadding * right));
IL2CPP_REGISTER_METHOD(0x028EAB80, bool, operator___, (RSAEncryptionPadding * left, RSAEncryptionPadding * right));
IL2CPP_REGISTER_METHOD(0x028EAC50, String *, ToString, (RSAEncryptionPadding * __this));
IL2CPP_REGISTER_METHOD(0x028EAD20, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028EAF00, void, __ctor, (RSAEncryptionPadding * __this));
IL2CPP_REGISTER_METHODINFO(0x047338F0, RSAEncryptionPadding__ctor_1__MethodInfo);
}
