#pragma once
#include <interception_macros.h>

namespace app::methods::System::Math {
    IL2CPP_REGISTER_METHOD(0x02268030, double, Acos, (double d))
    IL2CPP_REGISTER_METHOD(0x02268040, double, Asin, (double d))
    IL2CPP_REGISTER_METHOD(0x02268050, double, Atan, (double d))
    IL2CPP_REGISTER_METHOD(0x02268060, double, Atan2, (double y, double x))
    IL2CPP_REGISTER_METHOD(0x02268070, double, Ceiling, (double a))
    IL2CPP_REGISTER_METHOD(0x02268080, double, Cos, (double d))
    IL2CPP_REGISTER_METHOD(0x02268090, double, Floor, (double d))
    IL2CPP_REGISTER_METHOD(0x022680A0, double, InternalRound, (double value, int32_t digits, app::MidpointRounding__Enum mode))
    IL2CPP_REGISTER_METHOD(0x022682E0, double, InternalTruncate, (double d))
    IL2CPP_REGISTER_METHOD(0x02268390, double, Sin, (double a))
    IL2CPP_REGISTER_METHOD(0x022683A0, double, Tan, (double a))
    IL2CPP_REGISTER_METHOD(0x022683B0, double, Round_1, (double a))
    IL2CPP_REGISTER_METHOD(0x022683C0, double, Round_2, (double value, int32_t digits))
    IL2CPP_REGISTER_METHODINFO(0x04775430, Math_Round_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022684C0, double, Round_3, (double value, app::MidpointRounding__Enum mode))
    IL2CPP_REGISTER_METHOD(0x02268570, double, Round_4, (double value, int32_t digits, app::MidpointRounding__Enum mode))
    IL2CPP_REGISTER_METHODINFO(0x04701850, Math_Round_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02268740, app::Decimal, Round_5, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x022688B0, double, SplitFractionDouble, (double * value))
    IL2CPP_REGISTER_METHOD(0x022688C0, app::Decimal, Truncate_1, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x02268A30, double, Truncate_2, (double d))
    IL2CPP_REGISTER_METHOD(0x02268B60, double, Sqrt, (double d))
    IL2CPP_REGISTER_METHOD(0x02268B70, double, Log_1, (double d))
    IL2CPP_REGISTER_METHOD(0x02268B80, double, Log10, (double d))
    IL2CPP_REGISTER_METHOD(0x02268B90, double, Exp, (double d))
    IL2CPP_REGISTER_METHOD(0x02268BA0, double, Pow, (double x, double y))
    IL2CPP_REGISTER_METHOD(0x02268BB0, double, IEEERemainder, (double x, double y))
    IL2CPP_REGISTER_METHOD(0x02268ED0, int32_t, Abs_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x02269010, int32_t, AbsHelper_1, (int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04799DF8, Math_AbsHelper__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022690E0, int64_t, Abs_2, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x02269230, int64_t, AbsHelper_2, (int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x047908E0, Math_AbsHelper_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02269300, float, Abs_3, (float value))
    IL2CPP_REGISTER_METHOD(0x02269320, double, Abs_4, (double value))
    IL2CPP_REGISTER_METHOD(0x02269330, app::Decimal, Abs_5, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x02269420, int8_t, Max_1, (int8_t val1, int8_t val2))
    IL2CPP_REGISTER_METHOD(0x02269430, uint8_t, Max_2, (uint8_t val1, uint8_t val2))
    IL2CPP_REGISTER_METHOD(0x02269440, int16_t, Max_3, (int16_t val1, int16_t val2))
    IL2CPP_REGISTER_METHOD(0x02269450, uint16_t, Max_4, (uint16_t val1, uint16_t val2))
    IL2CPP_REGISTER_METHOD(0x02269460, int32_t, Max_5, (int32_t val1, int32_t val2))
    IL2CPP_REGISTER_METHOD(0x02269470, uint32_t, Max_6, (uint32_t val1, uint32_t val2))
    IL2CPP_REGISTER_METHOD(0x02269480, int64_t, Max_7, (int64_t val1, int64_t val2))
    IL2CPP_REGISTER_METHOD(0x02269490, uint64_t, Max_8, (uint64_t val1, uint64_t val2))
    IL2CPP_REGISTER_METHOD(0x022694A0, float, Max_9, (float val1, float val2))
    IL2CPP_REGISTER_METHOD(0x022694C0, double, Max_10, (double val1, double val2))
    IL2CPP_REGISTER_METHOD(0x022695B0, app::Decimal, Max_11, (app::Decimal val1, app::Decimal val2))
    IL2CPP_REGISTER_METHOD(0x02269770, int8_t, Min_1, (int8_t val1, int8_t val2))
    IL2CPP_REGISTER_METHOD(0x02269780, uint8_t, Min_2, (uint8_t val1, uint8_t val2))
    IL2CPP_REGISTER_METHOD(0x02269790, int16_t, Min_3, (int16_t val1, int16_t val2))
    IL2CPP_REGISTER_METHOD(0x022697A0, uint16_t, Min_4, (uint16_t val1, uint16_t val2))
    IL2CPP_REGISTER_METHOD(0x022697B0, int32_t, Min_5, (int32_t val1, int32_t val2))
    IL2CPP_REGISTER_METHOD(0x022697C0, uint32_t, Min_6, (uint32_t val1, uint32_t val2))
    IL2CPP_REGISTER_METHOD(0x022697D0, int64_t, Min_7, (int64_t val1, int64_t val2))
    IL2CPP_REGISTER_METHOD(0x022697E0, uint64_t, Min_8, (uint64_t val1, uint64_t val2))
    IL2CPP_REGISTER_METHOD(0x022697F0, float, Min_9, (float val1, float val2))
    IL2CPP_REGISTER_METHOD(0x02269810, double, Min_10, (double val1, double val2))
    IL2CPP_REGISTER_METHOD(0x02269900, app::Decimal, Min_11, (app::Decimal val1, app::Decimal val2))
    IL2CPP_REGISTER_METHOD(0x02269AC0, double, Log_2, (double a, double new_base))
    IL2CPP_REGISTER_METHOD(0x02269C70, int32_t, Sign_1, (float value))
    IL2CPP_REGISTER_METHODINFO(0x04783928, Math_Sign__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02269D80, int32_t, Sign_2, (double value))
    IL2CPP_REGISTER_METHODINFO(0x04718F00, Math_Sign_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02269E90, void, cctor, ())
}
