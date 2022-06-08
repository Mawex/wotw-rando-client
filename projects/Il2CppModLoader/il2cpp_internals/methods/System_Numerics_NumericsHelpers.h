#include <interception_macros.h>

namespace app::methods::System::Numerics::NumericsHelpers {
IL2CPP_REGISTER_METHOD(0x03101C80, void, GetDoubleParts, (double dbl, int32_t * sign, int32_t * exp, uint64_t * man, bool * fFinite));
IL2CPP_REGISTER_METHOD(0x03101D10, double, GetDoubleFromParts, (int32_t sign, int32_t exp, uint64_t man));
IL2CPP_REGISTER_METHOD(0x03101E80, void, DangerousMakeTwosComplement, (UInt32__Array * d));
IL2CPP_REGISTER_METHOD(0x03101F40, uint64_t, MakeUlong, (uint32_t uHi, uint32_t uLo));
IL2CPP_REGISTER_METHOD(0x03101F50, uint32_t, Abs, (int32_t a));
IL2CPP_REGISTER_METHOD(0x03101F60, uint32_t, CombineHash, (uint32_t u1, uint32_t u2));
IL2CPP_REGISTER_METHOD(0x03101F60, int32_t, CombineHash, (int32_t n1, int32_t n2));
IL2CPP_REGISTER_METHOD(0x03101F70, int32_t, CbitHighZero, (uint32_t u));
IL2CPP_REGISTER_METHOD(0x03101FE0, int32_t, CbitHighZero, (uint64_t uu));
}
