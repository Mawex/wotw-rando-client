#include <interception_macros.h>

namespace app::methods::System_Net_Http_Headers::Lexer {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::Lexer * this_ptr, app::String * stream));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Position, (app::Lexer * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Position, (app::Lexer * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x02D0DA10, String *, GetStringValue_1, (app::Lexer * this_ptr, app::Token token));
IL2CPP_REGISTER_METHOD(0x02D0DA40, String *, GetStringValue_2, (app::Lexer * this_ptr, app::Token start, app::Token end));
IL2CPP_REGISTER_METHOD(0x02D0DA70, String *, GetQuotedStringValue, (app::Lexer * this_ptr, app::Token start));
IL2CPP_REGISTER_METHOD(0x02D0DAB0, String *, GetRemainingStringValue, (app::Lexer * this_ptr, int32_t position));
IL2CPP_REGISTER_METHOD(0x02D0DAF0, bool, IsStarStringValue, (app::Lexer * this_ptr, app::Token token));
IL2CPP_REGISTER_METHOD(0x02D0DB30, bool, TryGetNumericValue_1, (app::Lexer * this_ptr, app::Token token, app::int32_t * value));
IL2CPP_REGISTER_METHOD(0x02D0DC50, bool, TryGetNumericValue_2, (app::Lexer * this_ptr, app::Token token, app::int64_t * value));
IL2CPP_REGISTER_METHOD(0x02D0DD70, Nullable_1_TimeSpan_, TryGetTimeSpanValue, (app::Lexer * this_ptr, app::Token token));
IL2CPP_REGISTER_METHOD(0x02D0DE90, bool, TryGetDateValue_1, (app::Lexer * this_ptr, app::Token token, app::DateTimeOffset * value));
IL2CPP_REGISTER_METHOD(0x02D0DFD0, bool, TryGetDateValue_2, (app::String * text, app::DateTimeOffset * value));
IL2CPP_REGISTER_METHOD(0x02D0E100, bool, TryGetDoubleValue, (app::Lexer * this_ptr, app::Token token, app::double * value));
IL2CPP_REGISTER_METHOD(0x02D0E230, bool, IsValidToken, (app::String * input));
IL2CPP_REGISTER_METHOD(0x02D0E320, bool, IsValidCharacter, (uint16_t input));
IL2CPP_REGISTER_METHOD(0x00CC6360, void, EatChar, (app::Lexer * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D0E430, int32_t, PeekChar, (app::Lexer * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D0E480, bool, ScanCommentOptional, (app::Lexer * this_ptr, app::String * * value, app::Token * read_token));
IL2CPP_REGISTER_METHOD(0x02D0E620, Token, Scan, (app::Lexer * this_ptr, bool recognize_dash));
IL2CPP_REGISTER_METHOD(0x02D0EA20, void, __cctor, ());
}
