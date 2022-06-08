#include <interception_macros.h>

namespace app::methods::System::BitConverter {
IL2CPP_REGISTER_METHOD(0x0229C490, bool, AmILittleEndian, ());
IL2CPP_REGISTER_METHOD(0x0229C4B0, Byte__Array *, GetBytes, (bool value));
IL2CPP_REGISTER_METHOD(0x0229C560, Byte__Array *, GetBytes, (uint16_t value));
IL2CPP_REGISTER_METHOD(0x0229C600, Byte__Array *, GetBytes, (int16_t value));
IL2CPP_REGISTER_METHOD(0x0229C6A0, Byte__Array *, GetBytes, (int32_t value));
IL2CPP_REGISTER_METHOD(0x0229C740, Byte__Array *, GetBytes, (int64_t value));
IL2CPP_REGISTER_METHOD(0x0229C7E0, Byte__Array *, GetBytes, (uint16_t value));
IL2CPP_REGISTER_METHOD(0x0229C880, Byte__Array *, GetBytes, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x0229C920, Byte__Array *, GetBytes, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x0229C9C0, Byte__Array *, GetBytes, (float value));
IL2CPP_REGISTER_METHOD(0x0229CA60, Byte__Array *, GetBytes, (double value));
IL2CPP_REGISTER_METHOD(0x0229CB00, int16_t, ToInt16, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229CC60, int32_t, ToInt32, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229CDF0, int64_t, ToInt64, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229CFE0, uint16_t, ToUInt16, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229D0D0, uint32_t, ToUInt32, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229D1C0, uint64_t, ToUInt64, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229D2B0, float, ToSingle, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x0229D3A0, uint16_t, GetHexValue, (int32_t i));
IL2CPP_REGISTER_METHOD(0x0229D3B0, String *, ToString, (Byte__Array * value, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04789CF0, BitConverter_ToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229D790, String *, ToString, (Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04779B30, BitConverter_ToString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229D870, bool, ToBoolean, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHODINFO(0x047693A8, BitConverter_ToBoolean__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01969710, int64_t, DoubleToInt64Bits, (double value));
IL2CPP_REGISTER_METHOD(0x0229D9F0, double, Int64BitsToDouble, (int64_t value));
IL2CPP_REGISTER_METHOD(0x0229DA00, void, __cctor, ());
}
