using namespace app;

namespace app::methods::Ionic::Crc::CRC32 {
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_TotalBytesRead, (CRC32 * __this));
IL2CPP_REGISTER_METHOD(0x03064AD0, int32_t, get_Crc32Result, (CRC32 * __this));
IL2CPP_REGISTER_METHOD(0x03064AE0, void, SlurpBlock, (CRC32 * __this, Byte__Array * block, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04794F10, CRC32_SlurpBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03064C90, uint32_t, ReverseBits, (uint32_t data));
IL2CPP_REGISTER_METHOD(0x03064CF0, uint8_t, ReverseBits, (uint8_t data));
IL2CPP_REGISTER_METHOD(0x03064D20, void, GenerateLookupTable, (CRC32 * __this));
IL2CPP_REGISTER_METHOD(0x03064EB0, void, __ctor, (CRC32 * __this));
IL2CPP_REGISTER_METHOD(0x03064ED0, void, __ctor, (CRC32 * __this, bool reverseBits));
IL2CPP_REGISTER_METHOD(0x03064EF0, void, __ctor, (CRC32 * __this, int32_t polynomial, bool reverseBits));
}
