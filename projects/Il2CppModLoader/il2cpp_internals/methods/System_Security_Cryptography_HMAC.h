using namespace app;

namespace app::methods::System::Security::Cryptography::HMAC {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_BlockSizeValue, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_BlockSizeValue, (HMAC * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x020D8AC0, void, UpdateIOPadBuffers, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x020D8CE0, void, InitializeKey, (HMAC * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x020D8E70, Byte__Array *, get_Key, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x020D8FB0, void, set_Key, (HMAC * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04707C80, HMAC_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_HashName, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x020D9080, void, set_HashName, (HMAC * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04765B30, HMAC_set_HashName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D9170, HMAC *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020D92B0, HMAC *, Create, (String * algorithmName));
IL2CPP_REGISTER_METHOD(0x020D9390, void, Initialize, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x020D93F0, void, HashCore, (HMAC * __this, Byte__Array * rgb, int32_t ib, int32_t cb));
IL2CPP_REGISTER_METHOD(0x020D94A0, Byte__Array *, HashFinal, (HMAC * __this));
IL2CPP_REGISTER_METHOD(0x020D96A0, void, Dispose, (HMAC * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020D97D0, HashAlgorithm *, GetHashAlgorithmWithFipsFallback, (Func_1_System_Security_Cryptography_HashAlgorithm_ * createStandardHashAlgorithmCallback, Func_1_System_Security_Cryptography_HashAlgorithm_ * createFipsHashAlgorithmCallback));
IL2CPP_REGISTER_METHODINFO(0x04771628, HMAC_GetHashAlgorithmWithFipsFallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D9870, void, __ctor, (HMAC * __this));
}
