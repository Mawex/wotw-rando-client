#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::MathUtils {
    IL2CPP_REGISTER_METHOD(0x0301DFA0, int32_t, IntLength, (uint64_t i))
    IL2CPP_REGISTER_METHOD(0x020B6310, uint16_t, IntToHex, (int32_t n))
    IL2CPP_REGISTER_METHOD(0x0301E100, bool, ApproxEquals, (double d1, double d2))
}
