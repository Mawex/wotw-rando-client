#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::OutputBuffer {
IL2CPP_REGISTER_METHOD(0x00E464D0, void, UpdateBuffer, (OutputBuffer * __this, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_BytesWritten, (OutputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D1D0, int32_t, get_FreeBytes, (OutputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D1F0, void, WriteUInt16, (OutputBuffer * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02B7D270, void, WriteBits, (OutputBuffer * __this, int32_t n, uint32_t bits));
IL2CPP_REGISTER_METHOD(0x02B7D320, void, FlushBits, (OutputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D3D0, void, WriteBytes, (OutputBuffer * __this, Byte__Array * byteArray, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B7D490, void, WriteBytesUnaligned, (OutputBuffer * __this, Byte__Array * byteArray, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B7D520, void, WriteByteUnaligned, (OutputBuffer * __this, uint8_t b));
IL2CPP_REGISTER_METHOD(0x02B7D530, int32_t, get_BitsInBuffer, (OutputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D540, OutputBuffer_BufferState, DumpState, (OutputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D570, void, RestoreState, (OutputBuffer * __this, OutputBuffer_BufferState state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OutputBuffer * __this));
}
