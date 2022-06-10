#pragma once
#include <interception_macros.h>

namespace app::methods::System::Text::Decoder {
    IL2CPP_REGISTER_METHOD(0x02448100, void, SerializeDecoder, (app::Decoder * this_ptr, app::SerializationInfo * info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DecoderFallback *, get_Fallback, (app::Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024481A0, app::DecoderFallbackBuffer *, get_FallbackBuffer, (app::Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_InternalHasFallbackBuffer, (app::Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02448210, void, Reset, (app::Decoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02448320, int32_t, GetCharCount_1, (app::Decoder * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count, bool flush))
    IL2CPP_REGISTER_METHOD(0x02448340, int32_t, GetCharCount_2, (app::Decoder * this_ptr, uint8_t * bytes, int32_t count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x04732FF8, Decoder_GetCharCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024484E0, int32_t, GetChars_1, (app::Decoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, bool flush))
    IL2CPP_REGISTER_METHOD(0x02448500, int32_t, GetChars_2, (app::Decoder * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, bool flush))
    IL2CPP_REGISTER_METHODINFO(0x0478D798, Decoder_GetChars_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02448770, void, Convert_1, (app::Decoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, int32_t char_count, bool flush, int32_t * bytes_used, int32_t * chars_used, bool * completed))
    IL2CPP_REGISTER_METHODINFO(0x04704A70, Decoder_Convert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02448B00, void, Convert_2, (app::Decoder * this_ptr, uint8_t * bytes, int32_t byte_count, uint16_t * chars, int32_t char_count, bool flush, int32_t * bytes_used, int32_t * chars_used, bool * completed))
    IL2CPP_REGISTER_METHODINFO(0x047342A0, Decoder_Convert_1__MethodInfo)
}
