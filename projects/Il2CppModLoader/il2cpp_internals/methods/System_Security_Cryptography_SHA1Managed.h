#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::SHA1Managed {
IL2CPP_REGISTER_METHOD(0x028F6F80, void, __ctor, (app::SHA1Managed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04752B98, SHA1Managed__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F7040, void, Initialize, (app::SHA1Managed * this_ptr));
IL2CPP_REGISTER_METHOD(0x028F7090, void, HashCore, (app::SHA1Managed * this_ptr, app::Byte__Array * rgb, int32_t ib_start, int32_t cb_size));
IL2CPP_REGISTER_METHOD(0x028F70A0, Byte__Array *, HashFinal, (app::SHA1Managed * this_ptr));
IL2CPP_REGISTER_METHOD(0x028E0BA0, void, InitializeState, (app::SHA1Managed * this_ptr));
IL2CPP_REGISTER_METHOD(0x028F70B0, void, _HashData, (app::SHA1Managed * this_ptr, app::Byte__Array * part_in, int32_t ib_start, int32_t cb_size));
IL2CPP_REGISTER_METHOD(0x028F7250, Byte__Array *, _EndHash, (app::SHA1Managed * this_ptr));
IL2CPP_REGISTER_METHOD(0x028F74F0, void, SHATransform, (app::uint32_t * expanded_buffer, app::uint32_t * state, app::uint8_t * block));
IL2CPP_REGISTER_METHOD(0x028F7B30, void, SHAExpand, (app::uint32_t * x));
}
