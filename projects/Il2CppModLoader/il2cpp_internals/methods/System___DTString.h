#include <interception_macros.h>

namespace app::methods::System::__DTString {
IL2CPP_REGISTER_METHOD(0x00249FC0, void, __ctor, (_DTString__Boxed * __this, String * str, DateTimeFormatInfo * dtfi, bool checkDigitToken));
IL2CPP_REGISTER_METHOD(0x00249FF0, void, __ctor, (_DTString__Boxed * __this, String * str, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x00107C30, CompareInfo *, get_CompareInfo, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A000, bool, GetNext, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A040, bool, AtEnd, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A050, bool, Advance, (_DTString__Boxed * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x0024A090, void, GetRegularToken, (_DTString__Boxed * __this, TokenType__Enum * tokenType, int32_t * tokenValue, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x0024A0A0, TokenType__Enum, GetSeparatorToken, (_DTString__Boxed * __this, DateTimeFormatInfo * dtfi, int32_t * indexBeforeSeparator, uint16_t * charBeforeSeparator));
IL2CPP_REGISTER_METHOD(0x0024A0B0, bool, MatchSpecifiedWord, (_DTString__Boxed * __this, String * target));
IL2CPP_REGISTER_METHOD(0x0024A0C0, bool, MatchSpecifiedWord, (_DTString__Boxed * __this, String * target, int32_t endIndex));
IL2CPP_REGISTER_METHOD(0x0024A0D0, bool, MatchSpecifiedWords, (_DTString__Boxed * __this, String * target, bool checkWordBoundary, int32_t * matchLength));
IL2CPP_REGISTER_METHOD(0x0024A0E0, bool, Match, (_DTString__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x0024A0F0, bool, Match, (_DTString__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0024A150, int32_t, MatchLongestWords, (_DTString__Boxed * __this, String__Array * words, int32_t * maxMatchStrLen));
IL2CPP_REGISTER_METHOD(0x0024A160, int32_t, GetRepeatCount, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A170, bool, GetNextDigit, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A180, uint16_t, GetChar, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A1B0, int32_t, GetDigit, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A1E0, void, SkipWhiteSpaces, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A1F0, bool, SkipWhiteSpaceCurrent, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A200, void, TrimTail, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A210, void, RemoveTrailingInQuoteSpaces, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A220, void, RemoveLeadingInQuoteSpaces, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A230, DTSubString, GetSubString, (_DTString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A260, void, ConsumeSubString, (_DTString__Boxed * __this, DTSubString sub));
IL2CPP_REGISTER_METHOD(0x0314FD20, void, __cctor, ());
}
