#include <interception_macros.h>

namespace app::methods::Endian {
IL2CPP_REGISTER_METHOD(0x01B5A600, void, PutBytes2, (Byte__Array * bytes, int32_t offset, int16_t value));
IL2CPP_REGISTER_METHOD(0x01B5A600, void, PutBytes2, (Byte__Array * bytes, int32_t offset, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01B5A660, void, PutBytes4, (Byte__Array * bytes, int32_t offset, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B5A660, void, PutBytes4, (Byte__Array * bytes, int32_t offset, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01B5A670, void, PutBytes8, (Byte__Array * bytes, int32_t offset, int64_t value));
IL2CPP_REGISTER_METHOD(0x01B5A670, void, PutBytes8, (Byte__Array * bytes, int32_t offset, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01B5A680, int16_t, GetShort, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A680, uint16_t, GetUShort, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A6E0, int32_t, GetInt, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A6E0, uint32_t, GetUInt, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A6F0, int64_t, GetLong, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A6F0, uint64_t, GetULong, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A700, void, WriteEndian, (Byte__Array * bytes, int32_t offset, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01B5A870, uint64_t, ReadEndian8, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5AA20, void, WriteEndian, (Byte__Array * bytes, int32_t offset, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01B5AAD0, uint32_t, ReadEndian4, (Byte__Array * bytes, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01B5A600, void, WriteEndian, (Byte__Array * bytes, int32_t offset, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01B5A680, uint16_t, ReadEndian2, (Byte__Array * bytes, int32_t offset));
}
