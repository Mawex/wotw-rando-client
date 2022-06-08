#include <interception_macros.h>

namespace app::methods::Moon::StringExtensions {
IL2CPP_REGISTER_METHOD(0x030F35E0, String *, ToCSharpStringLiteral, (String * this_1, bool omitQuotes, bool escapeAllNonAscii));
IL2CPP_REGISTER_METHODINFO(0x04791258, StringExtensions_ToCSharpStringLiteral__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030F3750, int32_t, GetCSharpLiteralLength, (String * input, bool omitQuotes, bool escapeAllNonAscii));
IL2CPP_REGISTER_METHOD(0x030F3980, void, WriteCSharpLiteral, (String * input, uint16_t * output, bool omitQuotes, bool escapeAllNonAscii));
IL2CPP_REGISTER_METHOD(0x030F3ED0, void, WriteByteAsLowercaseHex, (uint16_t * * output, uint8_t b));
}
