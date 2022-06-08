using namespace app;

namespace app::methods::System::Security::Cryptography::SHA384Managed {
IL2CPP_REGISTER_METHOD(0x028F9440, void, __ctor, (SHA384Managed * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D500, SHA384Managed__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F9500, void, Initialize, (SHA384Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F9550, void, HashCore, (SHA384Managed * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F9560, Byte__Array *, HashFinal, (SHA384Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F9570, void, InitializeState, (SHA384Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F9770, void, _HashData, (SHA384Managed * __this, Byte__Array * partIn, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F99A0, Byte__Array *, _EndHash, (SHA384Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F9C40, void, SHATransform, (uint64_t * expandedBuffer, uint64_t * state, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x01E0F690, uint64_t, RotateRight, (uint64_t x, int32_t n));
IL2CPP_REGISTER_METHOD(0x01E0F6B0, uint64_t, Ch, (uint64_t x, uint64_t y, uint64_t z));
IL2CPP_REGISTER_METHOD(0x01E0F6C0, uint64_t, Maj, (uint64_t x, uint64_t y, uint64_t z));
IL2CPP_REGISTER_METHOD(0x028FA4E0, uint64_t, Sigma_0, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x028FA5B0, uint64_t, Sigma_1, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x028FA680, uint64_t, sigma_0, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x028FA740, uint64_t, sigma_1, (uint64_t x));
IL2CPP_REGISTER_METHOD(0x028FA800, void, SHA384Expand, (uint64_t * x));
IL2CPP_REGISTER_METHOD(0x028FA8F0, void, __cctor, (MethodInfo * method));
}
