using namespace app;

namespace app::methods::System::Security::Cryptography::SHA512Managed {
IL2CPP_REGISTER_METHOD(0x01E0E5F0, void, __ctor, (SHA512Managed * __this));
IL2CPP_REGISTER_METHODINFO(0x04759610, SHA512Managed__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E0E6B0, void, Initialize, (SHA512Managed * __this));
IL2CPP_REGISTER_METHOD(0x01E0E700, void, HashCore, (SHA512Managed * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x01E0E710, Byte__Array *, HashFinal, (SHA512Managed * __this));
IL2CPP_REGISTER_METHOD(0x01E0E720, void, InitializeState, (SHA512Managed * __this));
IL2CPP_REGISTER_METHOD(0x01E0E920, void, _HashData, (SHA512Managed * __this, Byte__Array * partIn, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x01E0EB50, Byte__Array *, _EndHash, (SHA512Managed * __this));
IL2CPP_REGISTER_METHOD(0x01E0EDF0, void, SHATransform, (uint64_t * expandedBuffer, uint64_t * state, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x01E0F690, uint64_t, RotateRight, (uint64_t x, int32_t n));
IL2CPP_REGISTER_METHOD(0x01E0F6B0, uint64_t, Ch, (uint64_t x, uint64_t y, uint64_t z));
IL2CPP_REGISTER_METHOD(0x01E0F6C0, uint64_t, Maj, (uint64_t x, uint64_t y, uint64_t z));
IL2CPP_REGISTER_METHOD(0x01E0F6D0, uint64_t, Sigma_0, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x01E0F7A0, uint64_t, Sigma_1, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x01E0F870, uint64_t, sigma_0, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x01E0F930, uint64_t, sigma_1, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x01E0F9F0, void, SHA512Expand, (uint64_t * x));
IL2CPP_REGISTER_METHOD(0x01E0FAE0, void, __cctor, (MethodInfo * method));
}
