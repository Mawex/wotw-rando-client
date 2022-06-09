#include <interception_macros.h>

namespace app::methods::Ionic::Crc::CRC32 {
    IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_TotalBytesRead, (app::CRC32 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03064AD0, int32_t, get_Crc32Result, (app::CRC32 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03064AE0, void, SlurpBlock, (app::CRC32 * this_ptr, app::Byte__Array * block, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04794F10, CRC32_SlurpBlock__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03064C90, uint32_t, ReverseBits_1, (uint32_t data));
    IL2CPP_REGISTER_METHOD(0x03064CF0, uint8_t, ReverseBits_2, (uint8_t data));
    IL2CPP_REGISTER_METHOD(0x03064D20, void, GenerateLookupTable, (app::CRC32 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03064EB0, void, __ctor_1, (app::CRC32 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03064ED0, void, __ctor_2, (app::CRC32 * this_ptr, bool reverse_bits));
    IL2CPP_REGISTER_METHOD(0x03064EF0, void, __ctor_3, (app::CRC32 * this_ptr, int32_t polynomial, bool reverse_bits));
}
