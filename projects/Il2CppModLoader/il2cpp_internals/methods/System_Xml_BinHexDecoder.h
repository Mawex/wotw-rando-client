#include <interception_macros.h>

namespace app::methods::System_Xml::BinHexDecoder {
IL2CPP_REGISTER_METHOD(0x021E17F0, bool, get_IsFull, (app::BinHexDecoder * this_ptr));
IL2CPP_REGISTER_METHOD(0x021E1800, int32_t, Decode_1, (app::BinHexDecoder * this_ptr, app::Char__Array * chars, int32_t start_pos, int32_t len));
IL2CPP_REGISTER_METHODINFO(0x0470DC68, BinHexDecoder_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E1A50, Byte__Array *, Decode_2, (app::Char__Array * chars, bool allow_odd_chars));
IL2CPP_REGISTER_METHODINFO(0x04733B68, BinHexDecoder_Decode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E1C90, void, Decode_3, (app::uint16_t * p_chars, app::uint16_t * p_chars_end_pos, app::uint8_t * p_bytes, app::uint8_t * p_bytes_end_pos, app::bool * has_half_byte_cached, app::uint8_t * cached_half_byte, app::int32_t * chars_decoded, app::int32_t * bytes_decoded));
IL2CPP_REGISTER_METHODINFO(0x0470A708, BinHexDecoder_Decode_2__MethodInfo);
}
