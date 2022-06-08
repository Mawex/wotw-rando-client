using namespace app;

namespace app::methods::System::Security::Cryptography::SHA1Managed {
IL2CPP_REGISTER_METHOD(0x028F6F80, void, __ctor, (SHA1Managed * __this));
IL2CPP_REGISTER_METHODINFO(0x04752B98, SHA1Managed__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F7040, void, Initialize, (SHA1Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F7090, void, HashCore, (SHA1Managed * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F70A0, Byte__Array *, HashFinal, (SHA1Managed * __this));
IL2CPP_REGISTER_METHOD(0x028E0BA0, void, InitializeState, (SHA1Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F70B0, void, _HashData, (SHA1Managed * __this, Byte__Array * partIn, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F7250, Byte__Array *, _EndHash, (SHA1Managed * __this));
IL2CPP_REGISTER_METHOD(0x028F74F0, void, SHATransform, (uint32_t * expandedBuffer, uint32_t * state, uint8_t * block));
IL2CPP_REGISTER_METHOD(0x028F7B30, void, SHAExpand, (uint32_t * x));
}
