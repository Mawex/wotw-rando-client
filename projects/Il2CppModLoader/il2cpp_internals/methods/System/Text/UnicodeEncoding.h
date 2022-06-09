#include <interception_macros.h>

namespace app::methods::System::Text::UnicodeEncoding {
    IL2CPP_REGISTER_METHOD(0x027D2EB0, void, __ctor_1, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D2EE0, void, __ctor_2, (app::UnicodeEncoding * this_ptr, bool big_endian, bool byte_order_mark));
    IL2CPP_REGISTER_METHOD(0x027D2F30, void, __ctor_3, (app::UnicodeEncoding * this_ptr, bool big_endian, bool byte_order_mark, bool throw_on_invalid_bytes));
    IL2CPP_REGISTER_METHOD(0x00447380, void, OnDeserializing, (app::UnicodeEncoding * this_ptr, app::StreamingContext ctx));
    IL2CPP_REGISTER_METHOD(0x027D2FA0, void, SetDefaultFallbacks, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D31F0, int32_t, GetByteCount_1, (app::UnicodeEncoding * this_ptr, app::Char__Array * chars, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0472E098, UnicodeEncoding_GetByteCount__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D33C0, int32_t, GetByteCount_2, (app::UnicodeEncoding * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHODINFO(0x04718D00, UnicodeEncoding_GetByteCount_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D34A0, int32_t, GetByteCount_3, (app::UnicodeEncoding * this_ptr, uint16_t * chars, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04716F18, UnicodeEncoding_GetByteCount_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D35E0, int32_t, GetBytes_1, (app::UnicodeEncoding * this_ptr, app::String * s, int32_t char_index, int32_t char_count, app::Byte__Array * bytes, int32_t byte_index));
    IL2CPP_REGISTER_METHODINFO(0x04714590, UnicodeEncoding_GetBytes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D3870, int32_t, GetBytes_2, (app::UnicodeEncoding * this_ptr, app::Char__Array * chars, int32_t char_index, int32_t char_count, app::Byte__Array * bytes, int32_t byte_index));
    IL2CPP_REGISTER_METHODINFO(0x047130B8, UnicodeEncoding_GetBytes_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D3B10, int32_t, GetBytes_3, (app::UnicodeEncoding * this_ptr, uint16_t * chars, int32_t char_count, uint8_t * bytes, int32_t byte_count));
    IL2CPP_REGISTER_METHODINFO(0x0478E310, UnicodeEncoding_GetBytes_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D3C90, int32_t, GetCharCount_1, (app::UnicodeEncoding * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0475E3D0, UnicodeEncoding_GetCharCount__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D3E60, int32_t, GetCharCount_2, (app::UnicodeEncoding * this_ptr, uint8_t * bytes, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04716FD0, UnicodeEncoding_GetCharCount_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D3FA0, int32_t, GetChars_1, (app::UnicodeEncoding * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index));
    IL2CPP_REGISTER_METHODINFO(0x0473F420, UnicodeEncoding_GetChars__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D4240, int32_t, GetChars_2, (app::UnicodeEncoding * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count));
    IL2CPP_REGISTER_METHODINFO(0x0477EC38, UnicodeEncoding_GetChars_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D43C0, app::String *, GetString, (app::UnicodeEncoding * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0472F2A8, UnicodeEncoding_GetString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D4590, int32_t, GetByteCount_4, (app::UnicodeEncoding * this_ptr, uint16_t * chars, int32_t count, app::EncoderNLS * encoder));
    IL2CPP_REGISTER_METHODINFO(0x04742530, UnicodeEncoding_GetByteCount_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D4E40, int32_t, GetBytes_4, (app::UnicodeEncoding * this_ptr, uint16_t * chars, int32_t char_count, uint8_t * bytes, int32_t byte_count, app::EncoderNLS * encoder));
    IL2CPP_REGISTER_METHODINFO(0x0478AC68, UnicodeEncoding_GetBytes_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D5970, int32_t, GetCharCount_3, (app::UnicodeEncoding * this_ptr, uint8_t * bytes, int32_t count, app::DecoderNLS * base_decoder));
    IL2CPP_REGISTER_METHOD(0x027D63A0, int32_t, GetChars_3, (app::UnicodeEncoding * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, app::DecoderNLS * base_decoder));
    IL2CPP_REGISTER_METHOD(0x027D6F20, app::Encoder *, GetEncoder, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D7090, app::Decoder *, GetDecoder, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D7200, app::Byte__Array *, GetPreamble, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D7360, int32_t, GetMaxByteCount, (app::UnicodeEncoding * this_ptr, int32_t char_count));
    IL2CPP_REGISTER_METHODINFO(0x0476B160, UnicodeEncoding_GetMaxByteCount__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D74D0, int32_t, GetMaxCharCount, (app::UnicodeEncoding * this_ptr, int32_t byte_count));
    IL2CPP_REGISTER_METHODINFO(0x047560C0, UnicodeEncoding_GetMaxCharCount__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027D7650, bool, Equals, (app::UnicodeEncoding * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x027D77C0, int32_t, GetHashCode, (app::UnicodeEncoding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027D7860, void, __cctor, ());
}
