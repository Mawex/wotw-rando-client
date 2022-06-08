using namespace app;

namespace app::methods::System::Xml::UTF16Decoder {
IL2CPP_REGISTER_METHOD(0x019509A0, void, __ctor, (UTF16Decoder * __this, bool bigEndian));
IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount, (UTF16Decoder * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019509E0, int32_t, GetCharCount, (UTF16Decoder * __this, Byte__Array * bytes, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x0476C5C0, UTF16Decoder_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01950B10, int32_t, GetChars, (UTF16Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x01950E90, void, Convert, (UTF16Decoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
}
