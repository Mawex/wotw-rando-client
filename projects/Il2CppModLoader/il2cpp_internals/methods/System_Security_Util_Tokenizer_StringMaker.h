#include <interception_macros.h>

namespace app::methods::System::Security::Util::Tokenizer_StringMaker {
IL2CPP_REGISTER_METHOD(0x01E24600, uint32_t, HashString, (String * str));
IL2CPP_REGISTER_METHOD(0x01E24730, uint32_t, HashCharArray, (Char__Array * a, int32_t l));
IL2CPP_REGISTER_METHOD(0x01E24790, void, __ctor, (Tokenizer_StringMaker * __this));
IL2CPP_REGISTER_METHOD(0x01E24840, bool, CompareStringAndChars, (Tokenizer_StringMaker * __this, String * str, Char__Array * a, int32_t l));
IL2CPP_REGISTER_METHOD(0x01E248E0, String *, MakeString, (Tokenizer_StringMaker * __this));
}
