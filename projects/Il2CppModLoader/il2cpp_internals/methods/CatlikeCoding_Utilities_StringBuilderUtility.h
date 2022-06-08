#include <interception_macros.h>

namespace app::methods::CatlikeCoding::Utilities::StringBuilderUtility {
IL2CPP_REGISTER_METHOD(0x010399A0, void, AppendInt, (StringBuilder * s, int32_t number));
IL2CPP_REGISTER_METHOD(0x01039C50, void, AppendInt, (StringBuilder * s, int32_t number, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0103A060, void, AppendIntGrouped, (StringBuilder * s, int32_t number));
IL2CPP_REGISTER_METHOD(0x0103A4A0, void, AppendIntGrouped, (StringBuilder * s, int32_t number, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0103A910, void, AppendFloat, (StringBuilder * s, float number, int32_t decimalCount));
IL2CPP_REGISTER_METHOD(0x0103AB00, void, AppendFloat, (StringBuilder * s, float number, int32_t decimalCount, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0103ACF0, void, AppendFloatGrouped, (StringBuilder * s, float number, int32_t decimalCount));
IL2CPP_REGISTER_METHOD(0x0103AEE0, void, AppendFloatGrouped, (StringBuilder * s, float number, int32_t decimalCount, int32_t digitCount));
IL2CPP_REGISTER_METHOD(0x0103B0D0, void, Reverse, (StringBuilder * s, int32_t firstIndex, int32_t lastIndex));
IL2CPP_REGISTER_METHOD(0x0103B180, void, __cctor, ());
}
