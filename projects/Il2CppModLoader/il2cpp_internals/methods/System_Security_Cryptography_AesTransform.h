#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::AesTransform {
IL2CPP_REGISTER_METHOD(0x02FC9430, void, __ctor, (AesTransform * __this, Aes * algo, bool encryption, Byte__Array * key, Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x0472C1F0, AesTransform__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC9D60, void, ECB, (AesTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x02FC9D90, uint32_t, SubByte, (AesTransform * __this, uint32_t a));
IL2CPP_REGISTER_METHOD(0x02FC9F30, void, Encrypt128, (AesTransform * __this, Byte__Array * indata, Byte__Array * outdata, UInt32__Array * ekey));
IL2CPP_REGISTER_METHOD(0x02FCDF70, void, Decrypt128, (AesTransform * __this, Byte__Array * indata, Byte__Array * outdata, UInt32__Array * ekey));
IL2CPP_REGISTER_METHOD(0x02FD1FB0, void, __cctor, ());
}
