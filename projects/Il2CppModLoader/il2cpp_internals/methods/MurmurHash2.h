#include <interception_macros.h>

namespace app::methods::MurmurHash2 {
IL2CPP_REGISTER_METHOD(0x027198C0, uint32_t, Hash, (BinaryReader * reader, int32_t size));
IL2CPP_REGISTER_METHOD(0x027198D0, uint32_t, Hash, (Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x027198E0, uint32_t, Hash, (BinaryReader * reader, int32_t size, uint32_t seed));
IL2CPP_REGISTER_METHOD(0x02719B00, uint32_t, Hash, (Byte__Array * data, uint32_t seed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MurmurHash2 * __this));
}
