using namespace app;

namespace app::methods::System::Text::Encoder {
IL2CPP_REGISTER_METHOD(0x0244B830, void, SerializeEncoder, (Encoder * __this, SerializationInfo * info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Encoder * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, EncoderFallback *, get_Fallback, (Encoder * __this));
IL2CPP_REGISTER_METHOD(0x0244B8D0, EncoderFallbackBuffer *, get_FallbackBuffer, (Encoder * __this));
IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_InternalHasFallbackBuffer, (Encoder * __this));
IL2CPP_REGISTER_METHOD(0x0244B940, void, Reset, (Encoder * __this));
IL2CPP_REGISTER_METHOD(0x0244BA50, int32_t, GetByteCount, (Encoder * __this, uint16_t * chars, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x0472B368, Encoder_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244BC00, int32_t, GetBytes, (Encoder * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04738EE8, Encoder_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244BE70, void, Convert, (Encoder * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t * charsUsed, int32_t * bytesUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x04795328, Encoder_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244C200, void, Convert, (Encoder * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, bool flush, int32_t * charsUsed, int32_t * bytesUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x04717AC8, Encoder_Convert_1__MethodInfo);
}
