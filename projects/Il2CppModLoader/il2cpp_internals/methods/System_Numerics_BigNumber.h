#include <interception_macros.h>

namespace app::methods::System::Numerics::BigNumber {
IL2CPP_REGISTER_METHOD(0x030FFC60, bool, TryValidateParseStyleInteger, (NumberStyles__Enum style, ArgumentException * * e));
IL2CPP_REGISTER_METHOD(0x030FFFA0, bool, TryParseBigInteger, (ReadOnlySpan_1_Char_ value, NumberStyles__Enum style, NumberFormatInfo * info, BigInteger_2 * result));
IL2CPP_REGISTER_METHODINFO(0x047413B0, BigNumber_TryParseBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031002E0, BigInteger_2, ParseBigInteger, (String * value, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04720930, BigNumber_ParseBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03100550, ReadOnlySpan_1_Char_, AsReadOnlySpan, (String * s));
IL2CPP_REGISTER_METHOD(0x03100610, BigInteger_2, ParseBigInteger, (ReadOnlySpan_1_Char_ value, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0475A720, BigNumber_ParseBigInteger_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03100780, bool, HexNumberToBigInteger, (BigNumber_BigNumberBuffer * number, BigInteger_2 * value));
IL2CPP_REGISTER_METHOD(0x03100970, bool, NumberToBigInteger, (BigNumber_BigNumberBuffer * number, BigInteger_2 * value));
IL2CPP_REGISTER_METHOD(0x03100C20, uint16_t, ParseFormatSpecifier, (String * format, int32_t * digits));
IL2CPP_REGISTER_METHOD(0x03100D70, String *, FormatBigIntegerToHexString, (BigInteger_2 value, uint16_t format, int32_t digits, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x031011A0, String *, FormatBigInteger, (BigInteger_2 value, String * format, NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0470BF60, BigNumber_FormatBigInteger__MethodInfo);
}
