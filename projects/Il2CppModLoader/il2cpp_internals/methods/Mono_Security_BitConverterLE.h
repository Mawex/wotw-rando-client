#include <interception_macros.h>

namespace app::methods::Mono_Security::BitConverterLE {
IL2CPP_REGISTER_METHOD(0x025C3C30, Byte__Array *, GetUIntBytes_1, (app::uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x025C3E10, Byte__Array *, GetULongBytes_1, (app::uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x025C4110, Byte__Array *, GetBytes_1, (int32_t value));
IL2CPP_REGISTER_METHOD(0x025C4130, Byte__Array *, GetBytes_2, (float value));
IL2CPP_REGISTER_METHOD(0x025C4150, Byte__Array *, GetBytes_3, (double value));
IL2CPP_REGISTER_METHOD(0x025C4170, void, UIntFromBytes_1, (app::uint8_t * dst, app::Byte__Array * src, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x025C4380, void, ULongFromBytes, (app::uint8_t * dst, app::Byte__Array * src, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x025C44C0, float, ToSingle, (app::Byte__Array * value, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x025C44F0, double, ToDouble, (app::Byte__Array * value, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x02A39820, Byte__Array *, GetUIntBytes_2, (app::uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x02A39A00, Byte__Array *, GetULongBytes_2, (app::uint8_t * bytes));
IL2CPP_REGISTER_METHOD(0x02A39D00, Byte__Array *, GetBytes_4, (int32_t value));
IL2CPP_REGISTER_METHOD(0x02A39D20, Byte__Array *, GetBytes_5, (int64_t value));
IL2CPP_REGISTER_METHOD(0x02A39D40, void, UShortFromBytes, (app::uint8_t * dst, app::Byte__Array * src, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x02A39EB0, void, UIntFromBytes_2, (app::uint8_t * dst, app::Byte__Array * src, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x02A3A0C0, int32_t, ToInt32, (app::Byte__Array * value, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x02A3A0F0, uint16_t, ToUInt16, (app::Byte__Array * value, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x02A3A0C0, uint32_t, ToUInt32, (app::Byte__Array * value, int32_t start_index));
}
