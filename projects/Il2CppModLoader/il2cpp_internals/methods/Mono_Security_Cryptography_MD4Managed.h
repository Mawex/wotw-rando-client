using namespace app;

namespace app::methods::Mono::Security::Cryptography::MD4Managed {
IL2CPP_REGISTER_METHOD(0x025CF410, void, __ctor, (MD4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CF510, void, Initialize, (MD4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CF680, void, HashCore, (MD4Managed * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x025CF870, Byte__Array *, HashFinal, (MD4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CFA80, Byte__Array *, Padding, (MD4Managed * __this, int32_t nLength));
IL2CPP_REGISTER_METHOD(0x025CFB30, uint32_t, F, (MD4Managed * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB40, uint32_t, G, (MD4Managed * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB50, uint32_t, H, (MD4Managed * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB60, uint32_t, ROL, (MD4Managed * __this, uint32_t x, uint8_t n));
IL2CPP_REGISTER_METHOD(0x025CFB80, void, FF, (MD4Managed * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFBC0, void, GG, (MD4Managed * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFC10, void, HH, (MD4Managed * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFC60, void, Encode, (MD4Managed * __this, Byte__Array * output, UInt32__Array * input));
IL2CPP_REGISTER_METHOD(0x025CFDC0, void, Decode, (MD4Managed * __this, UInt32__Array * output, Byte__Array * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x025CFED0, void, MD4Transform, (MD4Managed * __this, UInt32__Array * state, Byte__Array * block, int32_t index));
IL2CPP_REGISTER_METHOD(0x02A3DBE0, void, __ctor, (MD4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x025CF510, void, Initialize, (MD4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x025CF680, void, HashCore, (MD4Managed_1 * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x02A3DCE0, Byte__Array *, HashFinal, (MD4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3DEF0, Byte__Array *, Padding, (MD4Managed_1 * __this, int32_t nLength));
IL2CPP_REGISTER_METHOD(0x025CFB30, uint32_t, F, (MD4Managed_1 * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB40, uint32_t, G, (MD4Managed_1 * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB50, uint32_t, H, (MD4Managed_1 * __this, uint32_t x, uint32_t y, uint32_t z));
IL2CPP_REGISTER_METHOD(0x025CFB60, uint32_t, ROL, (MD4Managed_1 * __this, uint32_t x, uint8_t n));
IL2CPP_REGISTER_METHOD(0x025CFB80, void, FF, (MD4Managed_1 * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFBC0, void, GG, (MD4Managed_1 * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFC10, void, HH, (MD4Managed_1 * __this, uint32_t * a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s));
IL2CPP_REGISTER_METHOD(0x025CFC60, void, Encode, (MD4Managed_1 * __this, Byte__Array * output, UInt32__Array * input));
IL2CPP_REGISTER_METHOD(0x025CFDC0, void, Decode, (MD4Managed_1 * __this, UInt32__Array * output, Byte__Array * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x025CFED0, void, MD4Transform, (MD4Managed_1 * __this, UInt32__Array * state, Byte__Array * block, int32_t index));
}
