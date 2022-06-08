#include <interception_macros.h>

namespace app::methods::System::Numerics::BigIntegerCalculator {
IL2CPP_REGISTER_METHOD(0x030FE440, UInt32__Array *, Add, (UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FE5B0, UInt32__Array *, Add, (UInt32__Array * left, UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FE710, void, Add, (uint32_t * left, int32_t leftLength, uint32_t * right, int32_t rightLength, uint32_t * bits, int32_t bitsLength));
IL2CPP_REGISTER_METHOD(0x030FE7D0, void, AddSelf, (uint32_t * left, int32_t leftLength, uint32_t * right, int32_t rightLength));
IL2CPP_REGISTER_METHOD(0x030FE840, UInt32__Array *, Subtract, (UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FE980, UInt32__Array *, Subtract, (UInt32__Array * left, UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FEB30, void, Subtract, (uint32_t * left, int32_t leftLength, uint32_t * right, int32_t rightLength, uint32_t * bits, int32_t bitsLength));
IL2CPP_REGISTER_METHOD(0x030FEBE0, int32_t, Compare, (UInt32__Array * left, UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FEC80, UInt32__Array *, Square, (UInt32__Array * value));
IL2CPP_REGISTER_METHOD(0x030FEDA0, void, Square, (uint32_t * value, int32_t valueLength, uint32_t * bits, int32_t bitsLength));
IL2CPP_REGISTER_METHODINFO(0x04751A30, BigIntegerCalculator_Square_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030FF250, UInt32__Array *, Multiply, (UInt32__Array * left, uint32_t right));
IL2CPP_REGISTER_METHOD(0x030FF390, UInt32__Array *, Multiply, (UInt32__Array * left, UInt32__Array * right));
IL2CPP_REGISTER_METHOD(0x030FF4F0, void, Multiply, (uint32_t * left, int32_t leftLength, uint32_t * right, int32_t rightLength, uint32_t * bits, int32_t bitsLength));
IL2CPP_REGISTER_METHODINFO(0x047174D8, BigIntegerCalculator_Multiply_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030FFAA0, void, SubtractCore, (uint32_t * left, int32_t leftLength, uint32_t * right, int32_t rightLength, uint32_t * core, int32_t coreLength));
IL2CPP_REGISTER_METHOD(0x030FFBA0, void, __cctor, ());
}
