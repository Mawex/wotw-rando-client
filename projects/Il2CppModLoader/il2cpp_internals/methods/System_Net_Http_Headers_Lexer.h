using namespace app;

namespace app::methods::System::Net::Http::Headers::Lexer {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Lexer * __this, String * stream));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Position, (Lexer * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Position, (Lexer * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02D0DA10, String *, GetStringValue, (Lexer * __this, Token token));
IL2CPP_REGISTER_METHOD(0x02D0DA40, String *, GetStringValue, (Lexer * __this, Token start, Token end));
IL2CPP_REGISTER_METHOD(0x02D0DA70, String *, GetQuotedStringValue, (Lexer * __this, Token start));
IL2CPP_REGISTER_METHOD(0x02D0DAB0, String *, GetRemainingStringValue, (Lexer * __this, int32_t position));
IL2CPP_REGISTER_METHOD(0x02D0DAF0, bool, IsStarStringValue, (Lexer * __this, Token token));
IL2CPP_REGISTER_METHOD(0x02D0DB30, bool, TryGetNumericValue, (Lexer * __this, Token token, int32_t * value));
IL2CPP_REGISTER_METHOD(0x02D0DC50, bool, TryGetNumericValue, (Lexer * __this, Token token, int64_t * value));
IL2CPP_REGISTER_METHOD(0x02D0DD70, Nullable_1_TimeSpan_, TryGetTimeSpanValue, (Lexer * __this, Token token));
IL2CPP_REGISTER_METHOD(0x02D0DE90, bool, TryGetDateValue, (Lexer * __this, Token token, DateTimeOffset * value));
IL2CPP_REGISTER_METHOD(0x02D0DFD0, bool, TryGetDateValue, (String * text, DateTimeOffset * value));
IL2CPP_REGISTER_METHOD(0x02D0E100, bool, TryGetDoubleValue, (Lexer * __this, Token token, double * value));
IL2CPP_REGISTER_METHOD(0x02D0E230, bool, IsValidToken, (String * input));
IL2CPP_REGISTER_METHOD(0x02D0E320, bool, IsValidCharacter, (uint16_t input));
IL2CPP_REGISTER_METHOD(0x00CC6360, void, EatChar, (Lexer * __this));
IL2CPP_REGISTER_METHOD(0x02D0E430, int32_t, PeekChar, (Lexer * __this));
IL2CPP_REGISTER_METHOD(0x02D0E480, bool, ScanCommentOptional, (Lexer * __this, String * * value, Token * readToken));
IL2CPP_REGISTER_METHOD(0x02D0E620, Token, Scan, (Lexer * __this, bool recognizeDash));
IL2CPP_REGISTER_METHOD(0x02D0EA20, void, __cctor, (MethodInfo * method));
}
