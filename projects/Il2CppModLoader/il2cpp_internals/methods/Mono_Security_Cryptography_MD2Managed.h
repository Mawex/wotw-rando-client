using namespace app;

namespace app::methods::Mono::Security::Cryptography::MD2Managed {
IL2CPP_REGISTER_METHOD(0x025CE830, Byte__Array *, Padding, (MD2Managed * __this, int32_t nLength));
IL2CPP_REGISTER_METHOD(0x025CE910, void, __ctor, (MD2Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CE9F0, void, Initialize, (MD2Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CEA50, void, HashCore, (MD2Managed * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x025CEB50, Byte__Array *, HashFinal, (MD2Managed * __this));
IL2CPP_REGISTER_METHOD(0x025CEDC0, void, MD2Transform, (MD2Managed * __this, Byte__Array * state, Byte__Array * checksum, Byte__Array * block, int32_t index));
IL2CPP_REGISTER_METHOD(0x025CF150, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02A3D060, Byte__Array *, Padding, (MD2Managed_1 * __this, int32_t nLength));
IL2CPP_REGISTER_METHOD(0x02A3D140, void, __ctor, (MD2Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x025CE9F0, void, Initialize, (MD2Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3D220, void, HashCore, (MD2Managed_1 * __this, Byte__Array * array, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x02A3D320, Byte__Array *, HashFinal, (MD2Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3D590, void, MD2Transform, (MD2Managed_1 * __this, Byte__Array * state, Byte__Array * checksum, Byte__Array * block, int32_t index));
IL2CPP_REGISTER_METHOD(0x02A3D920, void, __cctor, (MethodInfo * method));
}
