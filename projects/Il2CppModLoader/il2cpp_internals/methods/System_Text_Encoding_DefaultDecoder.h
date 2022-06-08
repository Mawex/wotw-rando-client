using namespace app;

namespace app::methods::System::Text::Encoding_DefaultDecoder {
IL2CPP_REGISTER_METHOD(0x02453EF0, void, __ctor, (Encoding_DefaultDecoder * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02453F00, void, __ctor, (Encoding_DefaultDecoder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0478EFF0, Encoding_DefaultDecoder__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02454120, Object *, GetRealObject, (Encoding_DefaultDecoder * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02454180, void, ISerializable_GetObjectData, (Encoding_DefaultDecoder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0475DAF0, Encoding_DefaultDecoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount, (Encoding_DefaultDecoder * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02454250, int32_t, GetCharCount, (Encoding_DefaultDecoder * __this, Byte__Array * bytes, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHOD(0x02454280, int32_t, GetCharCount, (Encoding_DefaultDecoder * __this, uint8_t * bytes, int32_t count, bool flush));
IL2CPP_REGISTER_METHOD(0x0244A840, int32_t, GetChars, (Encoding_DefaultDecoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x024542B0, int32_t, GetChars, (Encoding_DefaultDecoder * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex, bool flush));
IL2CPP_REGISTER_METHOD(0x024542E0, int32_t, GetChars, (Encoding_DefaultDecoder * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, bool flush));
}
