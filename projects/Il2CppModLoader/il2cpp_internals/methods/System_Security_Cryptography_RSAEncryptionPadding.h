#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::RSAEncryptionPadding {
IL2CPP_REGISTER_METHOD(0x028EA3A0, RSAEncryptionPadding *, get_Pkcs1, ());
IL2CPP_REGISTER_METHOD(0x028EA440, RSAEncryptionPadding *, get_OaepSHA1, ());
IL2CPP_REGISTER_METHOD(0x028EA4E0, RSAEncryptionPadding *, get_OaepSHA256, ());
IL2CPP_REGISTER_METHOD(0x028EA580, RSAEncryptionPadding *, get_OaepSHA384, ());
IL2CPP_REGISTER_METHOD(0x028EA620, RSAEncryptionPadding *, get_OaepSHA512, ());
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor_1, (app::RSAEncryptionPadding * this_ptr, app::RSAEncryptionPaddingMode__Enum mode, app::HashAlgorithmName oaep_hash_algorithm));
IL2CPP_REGISTER_METHOD(0x028EA6C0, RSAEncryptionPadding *, CreateOaep, (app::HashAlgorithmName hash_algorithm));
IL2CPP_REGISTER_METHODINFO(0x04754788, RSAEncryptionPadding_CreateOaep__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FC6D0, RSAEncryptionPaddingMode__Enum, get_Mode, (app::RSAEncryptionPadding * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, HashAlgorithmName, get_OaepHashAlgorithm, (app::RSAEncryptionPadding * this_ptr));
IL2CPP_REGISTER_METHOD(0x028EA860, int32_t, GetHashCode, (app::RSAEncryptionPadding * this_ptr));
IL2CPP_REGISTER_METHOD(0x022916C0, int32_t, CombineHashCodes, (int32_t h1, int32_t h2));
IL2CPP_REGISTER_METHOD(0x028EA920, bool, Equals_1, (app::RSAEncryptionPadding * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x028EA9D0, bool, Equals_2, (app::RSAEncryptionPadding * this_ptr, app::RSAEncryptionPadding * other));
IL2CPP_REGISTER_METHOD(0x028EAB60, bool, operator____1, (app::RSAEncryptionPadding * left, app::RSAEncryptionPadding * right));
IL2CPP_REGISTER_METHOD(0x028EAB80, bool, operator____2, (app::RSAEncryptionPadding * left, app::RSAEncryptionPadding * right));
IL2CPP_REGISTER_METHOD(0x028EAC50, String *, ToString, (app::RSAEncryptionPadding * this_ptr));
IL2CPP_REGISTER_METHOD(0x028EAD20, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x028EAF00, void, __ctor_2, (app::RSAEncryptionPadding * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047338F0, RSAEncryptionPadding__ctor_1__MethodInfo);
}
