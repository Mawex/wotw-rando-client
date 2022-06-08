#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::Json_Parser {
IL2CPP_REGISTER_METHOD(0x02E92E80, bool, IsWordBreak, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x02E92F60, void, __ctor, (Json_Parser * __this, String * jsonString));
IL2CPP_REGISTER_METHOD(0x02E930B0, Object *, Parse, (String * jsonString));
IL2CPP_REGISTER_METHOD(0x02E933B0, void, Dispose, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E933E0, Dictionary_2_System_String_System_Object_ *, ParseObject, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E93640, List_1_System_Object_ *, ParseArray, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E93800, Object *, ParseValue, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E93830, Object *, ParseByToken, (Json_Parser * __this, Json_Parser_TOKEN__Enum token));
IL2CPP_REGISTER_METHOD(0x02E93AF0, String *, ParseString, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E93F20, Object *, ParseNumber, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E94080, void, EatWhitespace, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E94180, uint16_t, get_PeekChar, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E94240, uint16_t, get_NextChar, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E94300, String *, get_NextWord, (Json_Parser * __this));
IL2CPP_REGISTER_METHOD(0x02E94580, Json_Parser_TOKEN__Enum, get_NextToken, (Json_Parser * __this));
}
