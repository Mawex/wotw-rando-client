#include <interception_macros.h>

namespace app::methods::Mono::Security::BitConverterLE {
IL2CPP_REGISTER_METHOD(0x025C3C30, Byte__Array *, GetUIntBytes, (uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x025C3E10, Byte__Array *, GetULongBytes, (uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x025C4110, Byte__Array *, GetBytes, (int32_t value));
IL2CPP_REGISTER_METHOD(0x025C4130, Byte__Array *, GetBytes, (float value));
IL2CPP_REGISTER_METHOD(0x025C4150, Byte__Array *, GetBytes, (double value));
IL2CPP_REGISTER_METHOD(0x025C4170, void, UIntFromBytes, (uint8_t * dst, Byte__Array * src, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x025C4380, void, ULongFromBytes, (uint8_t * dst, Byte__Array * src, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x025C44C0, float, ToSingle, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x025C44F0, double, ToDouble, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x02A39820, Byte__Array *, GetUIntBytes, (uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x02A39A00, Byte__Array *, GetULongBytes, (uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x02A39D00, Byte__Array *, GetBytes, (int32_t value));
IL2CPP_REGISTER_METHOD(0x02A39D20, Byte__Array *, GetBytes, (int64_t value));
IL2CPP_REGISTER_METHOD(0x02A39D40, void, UShortFromBytes, (uint8_t * dst, Byte__Array * src, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x02A39EB0, void, UIntFromBytes, (uint8_t * dst, Byte__Array * src, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x02A3A0C0, int32_t, ToInt32, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x02A3A0F0, uint16_t, ToUInt16, (Byte__Array * value, int32_t startIndex));
IL2CPP_REGISTER_METHOD(0x02A3A0C0, uint32_t, ToUInt32, (Byte__Array * value, int32_t startIndex));
}
