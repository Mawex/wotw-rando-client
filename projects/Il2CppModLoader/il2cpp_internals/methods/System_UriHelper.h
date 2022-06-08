#include <interception_macros.h>

namespace app::methods::System::UriHelper {
IL2CPP_REGISTER_METHOD(0x02A8F680, Char__Array *, EscapeString, (String * input, int32_t start, int32_t end, Char__Array * dest, int32_t * destPos, bool isUriString, uint16_t force1, uint16_t force2, uint16_t rsvd));
IL2CPP_REGISTER_METHODINFO(0x047501F8, UriHelper_EscapeString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A8FE30, Char__Array *, EnsureDestinationSize, (uint16_t * pStr, Char__Array * dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int32_t * destPos, int32_t prevInputPos));
IL2CPP_REGISTER_METHOD(0x02A8FFA0, Char__Array *, UnescapeString, (String * input, int32_t start, int32_t end, Char__Array * dest, int32_t * destPosition, uint16_t rsvd1, uint16_t rsvd2, uint16_t rsvd3, UnescapeMode__Enum unescapeMode, UriParser * syntax, bool isQuery));
IL2CPP_REGISTER_METHOD(0x02A900D0, Char__Array *, UnescapeString, (uint16_t * pStr, int32_t start, int32_t end, Char__Array * dest, int32_t * destPosition, uint16_t rsvd1, uint16_t rsvd2, uint16_t rsvd3, UnescapeMode__Enum unescapeMode, UriParser * syntax, bool isQuery));
IL2CPP_REGISTER_METHODINFO(0x0474E138, UriHelper_UnescapeString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A90CD0, void, MatchUTF8Sequence, (uint16_t * pDest, Char__Array * dest, int32_t * destOffset, Char__Array * unescapedChars, int32_t charCount, Byte__Array * bytes, int32_t byteCount, bool isQuery, bool iriParsing));
IL2CPP_REGISTER_METHOD(0x02A91290, void, EscapeAsciiChar, (uint16_t ch, Char__Array * to, int32_t * pos));
IL2CPP_REGISTER_METHOD(0x02A91460, uint16_t, EscapedAscii, (uint16_t digit, uint16_t next));
IL2CPP_REGISTER_METHOD(0x02A91500, bool, IsNotSafeForUnescape, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x02A91550, bool, IsReservedUnreservedOrHash, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02A916A0, bool, IsUnreserved, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02A917C0, bool, Is3986Unreserved, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02A918A0, void, __cctor, ());
}
