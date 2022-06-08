using namespace app;

namespace app::methods::System::Security::Cryptography::RIPEMD160Managed {
IL2CPP_REGISTER_METHOD(0x028E0A70, void, __ctor, (RIPEMD160Managed * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A6C8, RIPEMD160Managed__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E0B30, void, Initialize, (RIPEMD160Managed * __this));
IL2CPP_REGISTER_METHOD(0x028E0B80, void, HashCore, (RIPEMD160Managed * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028E0B90, Byte__Array *, HashFinal, (RIPEMD160Managed * __this));
IL2CPP_REGISTER_METHOD(0x028E0BA0, void, InitializeState, (RIPEMD160Managed * __this));
IL2CPP_REGISTER_METHOD(0x028E0CA0, void, _HashData, (RIPEMD160Managed * __this, Byte__Array * partIn, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028E0E40, Byte__Array *, _EndHash, (RIPEMD160Managed * __this));
IL2CPP_REGISTER_METHOD(0x028E10E0, void, MDTransform, (uint32_t * blockDWords, uint32_t * state, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x028E3D60, uint32_t, F, (uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x028E3D70, uint32_t, G, (uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x028E3D80, uint32_t, H, (uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x028E3D90, uint32_t, I, (uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x028E3DA0, uint32_t, J, (uint32_t x, uint32_t y, uint32_t z));
}
