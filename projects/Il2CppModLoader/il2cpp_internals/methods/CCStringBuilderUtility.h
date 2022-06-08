#include <interception_macros.h>

namespace app::methods::CCStringBuilderUtility {
IL2CPP_REGISTER_METHOD(0x0315BD50, void, AppendInt, (StringBuilder * s, int32_t number));
IL2CPP_REGISTER_METHOD(0x0315C000, void, AppendInt, (StringBuilder * s, int32_t number, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0315C410, void, AppendIntGrouped, (StringBuilder * s, int32_t number));
IL2CPP_REGISTER_METHOD(0x0315C850, void, AppendIntGrouped, (StringBuilder * s, int32_t number, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0315CCC0, void, AppendFloat, (StringBuilder * s, float number, int32_t decimalCount));
IL2CPP_REGISTER_METHOD(0x0315CEB0, void, AppendFloat, (StringBuilder * s, float number, int32_t decimalCount, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0315D0A0, void, AppendFloatGrouped, (StringBuilder * s, float number, int32_t decimalCount));
IL2CPP_REGISTER_METHOD(0x0315D290, void, AppendFloatGrouped, (StringBuilder * s, float number, int32_t decimalCount, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0103B0D0, void, Reverse, (StringBuilder * s, int32_t firstIndex, int32_t lastIndex));
IL2CPP_REGISTER_METHOD(0x0315D480, void, __cctor, ());
}
