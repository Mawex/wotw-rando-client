#include <interception_macros.h>

namespace app::methods::System_Numerics::BigIntegerCalculator {
IL2CPP_REGISTER_METHOD(0x030FE440, UInt32__Array *, Add_1, (app::UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FE5B0, UInt32__Array *, Add_2, (app::UInt32__Array * left, app::UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FE710, void, Add_3, (app::uint32_t * left, int32_t left_length, app::uint32_t * right, int32_t right_length, app::uint32_t * bits, int32_t bits_length));
IL2CPP_REGISTER_METHOD(0x030FE7D0, void, AddSelf, (app::uint32_t * left, int32_t left_length, app::uint32_t * right, int32_t right_length));
IL2CPP_REGISTER_METHOD(0x030FE840, UInt32__Array *, Subtract_1, (app::UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FE980, UInt32__Array *, Subtract_2, (app::UInt32__Array * left, app::UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FEB30, void, Subtract_3, (app::uint32_t * left, int32_t left_length, app::uint32_t * right, int32_t right_length, app::uint32_t * bits, int32_t bits_length));
IL2CPP_REGISTER_METHOD(0x030FEBE0, int32_t, Compare, (app::UInt32__Array * left, app::UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FEC80, UInt32__Array *, Square_1, (app::UInt32__Array * value));
IL2CPP_REGISTER_METHOD(0x030FEDA0, void, Square_2, (app::uint32_t * value, int32_t value_length, app::uint32_t * bits, int32_t bits_length));
IL2CPP_REGISTER_METHODINFO(0x04751A30, BigIntegerCalculator_Square_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030FF250, UInt32__Array *, Multiply_1, (app::UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FF390, UInt32__Array *, Multiply_2, (app::UInt32__Array * left, app::UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FF4F0, void, Multiply_3, (app::uint32_t * left, int32_t left_length, app::uint32_t * right, int32_t right_length, app::uint32_t * bits, int32_t bits_length));
IL2CPP_REGISTER_METHODINFO(0x047174D8, BigIntegerCalculator_Multiply_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030FFAA0, void, SubtractCore, (app::uint32_t * left, int32_t left_length, app::uint32_t * right, int32_t right_length, app::uint32_t * core, int32_t core_length));
IL2CPP_REGISTER_METHOD(0x030FFBA0, void, __cctor, ());
}
