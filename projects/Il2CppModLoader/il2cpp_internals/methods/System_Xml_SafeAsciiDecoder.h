using namespace app;

namespace app::methods::System::Xml::SafeAsciiDecoder {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SafeAsciiDecoder * __this));
IL2CPP_REGISTER_METHOD(0x0199D990, int32_t, GetCharCount, (SafeAsciiDecoder * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0199FB90, int32_t, GetChars, (SafeAsciiDecoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x0199FC30, void, Convert, (SafeAsciiDecoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, int32_t charCount, bool flush, int32_t * bytesUsed, int32_t * charsUsed, bool * completed));
}
