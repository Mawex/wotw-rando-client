#include <interception_macros.h>

namespace app::methods::System::Xml::Ucs4Decoder {
IL2CPP_REGISTER_METHOD(0x019512C0, int32_t, GetCharCount, (Ucs4Decoder * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019512D0, int32_t, GetChars, (Ucs4Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x019514D0, void, Convert, (Ucs4Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
IL2CPP_REGISTER_METHOD(0x01951750, void, Ucs4ToUTF16, (Ucs4Decoder * __this, uint32_t code, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x019517E0, void, __ctor, (Ucs4Decoder * __this));
}
