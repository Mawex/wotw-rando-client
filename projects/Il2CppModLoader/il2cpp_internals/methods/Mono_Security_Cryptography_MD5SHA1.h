using namespace app;

namespace app::methods::Mono::Security::Cryptography::MD5SHA1 {
IL2CPP_REGISTER_METHOD(0x02A3DFA0, void, __ctor, (MD5SHA1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3E020, void, Initialize, (MD5SHA1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3E080, Byte__Array *, HashFinal, (MD5SHA1 * __this));
IL2CPP_REGISTER_METHOD(0x01F81D40, void, HashCore, (MD5SHA1 * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x02A3E210, Byte__Array *, CreateSignature, (MD5SHA1 * __this, RSA * rsa));
IL2CPP_REGISTER_METHODINFO(0x047025C8, MD5SHA1_CreateSignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3E3F0, bool, VerifySignature, (MD5SHA1 * __this, RSA * rsa, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x04784B28, MD5SHA1_VerifySignature__MethodInfo);
}
