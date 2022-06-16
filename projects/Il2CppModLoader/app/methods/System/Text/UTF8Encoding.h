#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::UTF8Encoding {
    IL2CPP_REGISTER_METHOD(0x027CE2E0, void, ctor_1, (app::UTF8Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CE2F0, void, ctor_2, (app::UTF8Encoding * this_ptr, bool encoder_should_emit_u_t_f8_identifier))
    IL2CPP_REGISTER_METHOD(0x027CE300, void, ctor_3, (app::UTF8Encoding * this_ptr, bool encoder_should_emit_u_t_f8_identifier, bool throw_on_invalid_bytes))
    IL2CPP_REGISTER_METHOD(0x027CE3D0, void, SetDefaultFallbacks, (app::UTF8Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027CE620, int32_t, GetByteCount_1, (app::UTF8Encoding * this_ptr, app::Char__Array * chars, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04757358, UTF8Encoding_GetByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CE7F0, int32_t, GetByteCount_2, (app::UTF8Encoding * this_ptr, app::String * chars))
    IL2CPP_REGISTER_METHODINFO(0x047363A8, UTF8Encoding_GetByteCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CE8D0, int32_t, GetByteCount_3, (app::UTF8Encoding * this_ptr, uint16_t * chars, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047634A0, UTF8Encoding_GetByteCount_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CEA10, int32_t, GetBytes_1, (app::UTF8Encoding * this_ptr, app::String * s, int32_t char_index, int32_t char_count, app::Byte__Array * bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHODINFO(0x047382B8, UTF8Encoding_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CECA0, int32_t, GetBytes_2, (app::UTF8Encoding * this_ptr, app::Char__Array * chars, int32_t char_index, int32_t char_count, app::Byte__Array * bytes, int32_t byte_index))
    IL2CPP_REGISTER_METHODINFO(0x04790EB8, UTF8Encoding_GetBytes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CEF40, int32_t, GetBytes_3, (app::UTF8Encoding * this_ptr, uint16_t * chars, int32_t char_count, uint8_t * bytes, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x0478C870, UTF8Encoding_GetBytes_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF0C0, int32_t, GetCharCount_1, (app::UTF8Encoding * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04711A60, UTF8Encoding_GetCharCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF290, int32_t, GetCharCount_2, (app::UTF8Encoding * this_ptr, uint8_t * bytes, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04754418, UTF8Encoding_GetCharCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF3D0, int32_t, GetChars_1, (app::UTF8Encoding * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index))
    IL2CPP_REGISTER_METHODINFO(0x0478E048, UTF8Encoding_GetChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF670, int32_t, GetChars_2, (app::UTF8Encoding * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count))
    IL2CPP_REGISTER_METHODINFO(0x047459D8, UTF8Encoding_GetChars_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF7F0, app::String *, GetString, (app::UTF8Encoding * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04727268, UTF8Encoding_GetString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027CF9C0, int32_t, GetByteCount_4, (app::UTF8Encoding * this_ptr, uint16_t * chars, int32_t count, app::EncoderNLS * base_encoder))
    IL2CPP_REGISTER_METHODINFO(0x0470C380, UTF8Encoding_GetByteCount_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D00E0, int32_t, PtrDiff_1, (uint16_t * a, uint16_t * b))
    IL2CPP_REGISTER_METHOD(0x027D00F0, int32_t, PtrDiff_2, (uint8_t * a, uint8_t * b))
    IL2CPP_REGISTER_METHOD(0x0195FD00, bool, InRange, (int32_t ch, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x027D0100, int32_t, GetBytes_4, (app::UTF8Encoding * this_ptr, uint16_t * chars, int32_t char_count, uint8_t * bytes, int32_t byte_count, app::EncoderNLS * base_encoder))
    IL2CPP_REGISTER_METHODINFO(0x04732988, UTF8Encoding_GetBytes_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D0A20, int32_t, GetCharCount_3, (app::UTF8Encoding * this_ptr, uint8_t * bytes, int32_t count, app::DecoderNLS * base_decoder))
    IL2CPP_REGISTER_METHOD(0x027D0FA0, int32_t, GetChars_3, (app::UTF8Encoding * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, app::DecoderNLS * base_decoder))
    IL2CPP_REGISTER_METHOD(0x027D1A10, bool, FallbackInvalidByteSequence_1, (app::UTF8Encoding * this_ptr, app::uint8_t * * p_src, int32_t ch, app::DecoderFallbackBuffer * fallback, app::uint16_t * * p_target))
    IL2CPP_REGISTER_METHOD(0x027D1A90, int32_t, FallbackInvalidByteSequence_2, (app::UTF8Encoding * this_ptr, uint8_t * p_src, int32_t ch, app::DecoderFallbackBuffer * fallback))
    IL2CPP_REGISTER_METHOD(0x027D1AE0, app::Byte__Array *, GetBytesUnknown, (app::UTF8Encoding * this_ptr, app::uint8_t * * p_src, int32_t ch))
    IL2CPP_REGISTER_METHOD(0x027D1E60, app::Decoder *, GetDecoder, (app::UTF8Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D1FD0, app::Encoder *, GetEncoder, (app::UTF8Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D2140, int32_t, GetMaxByteCount, (app::UTF8Encoding * this_ptr, int32_t char_count))
    IL2CPP_REGISTER_METHODINFO(0x04775DB8, UTF8Encoding_GetMaxByteCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D22B0, int32_t, GetMaxCharCount, (app::UTF8Encoding * this_ptr, int32_t byte_count))
    IL2CPP_REGISTER_METHODINFO(0x04707758, UTF8Encoding_GetMaxCharCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D2420, app::Byte__Array *, GetPreamble, (app::UTF8Encoding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D2500, bool, Equals, (app::UTF8Encoding * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x027D2630, int32_t, GetHashCode, (app::UTF8Encoding * this_ptr))
}
