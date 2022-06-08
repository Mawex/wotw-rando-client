#include <interception_macros.h>

namespace app::methods::UnityEngine::WWWTranscoder {
IL2CPP_REGISTER_METHOD(0x03181410, uint8_t, Hex2Byte, (Byte__Array * b, int32_t offset));
IL2CPP_REGISTER_METHOD(0x031814A0, Byte__Array *, URLDecode, (Byte__Array * toEncode));
IL2CPP_REGISTER_METHOD(0x03181560, bool, ByteSubArrayEquals, (Byte__Array * array, int32_t index, Byte__Array * comperand));
IL2CPP_REGISTER_METHOD(0x03181610, Byte__Array *, Decode, (Byte__Array * input, uint8_t escapeChar, Byte__Array * space));
IL2CPP_REGISTER_METHOD(0x03181980, void, __cctor, ());
}
