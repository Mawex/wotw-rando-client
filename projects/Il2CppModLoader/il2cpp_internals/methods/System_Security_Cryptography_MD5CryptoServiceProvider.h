using namespace app;

namespace app::methods::System::Security::Cryptography::MD5CryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x020DD610, void, __ctor, (MD5CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020DD6E0, void, Finalize, (MD5CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020DD760, void, Dispose, (MD5CryptoServiceProvider * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020DD7F0, void, HashCore, (MD5CryptoServiceProvider * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x020DD910, Byte__Array *, HashFinal, (MD5CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020DDA60, void, Initialize, (MD5CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020DDB30, void, ProcessBlock, (MD5CryptoServiceProvider * __this, Byte__Array * inputBuffer, int32_t inputOffset));
IL2CPP_REGISTER_METHOD(0x020DF460, void, ProcessFinalBlock, (MD5CryptoServiceProvider * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x020DF660, void, AddLength, (MD5CryptoServiceProvider * __this, uint64_t length, Byte__Array * buffer, int32_t position));
IL2CPP_REGISTER_METHOD(0x020DF7D0, void, __cctor, (MethodInfo * method));
}
