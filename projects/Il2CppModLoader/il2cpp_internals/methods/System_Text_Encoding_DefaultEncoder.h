using namespace app;

namespace app::methods::System::Text::Encoding_DefaultEncoder {
IL2CPP_REGISTER_METHOD(0x02453EF0, void, __ctor, (Encoding_DefaultEncoder * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02454310, void, __ctor, (Encoding_DefaultEncoder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04718A68, Encoding_DefaultEncoder__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02454580, Object *, GetRealObject, (Encoding_DefaultEncoder * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x024546B0, void, ISerializable_GetObjectData, (Encoding_DefaultEncoder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04714030, Encoding_DefaultEncoder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02454780, int32_t, GetByteCount, (Encoding_DefaultEncoder * __this, Char__Array * chars, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHOD(0x024547B0, int32_t, GetByteCount, (Encoding_DefaultEncoder * __this, uint16_t * chars, int32_t count, bool flush));
IL2CPP_REGISTER_METHOD(0x024547E0, int32_t, GetBytes, (Encoding_DefaultEncoder * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex, bool flush));
IL2CPP_REGISTER_METHOD(0x02454810, int32_t, GetBytes, (Encoding_DefaultEncoder * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, bool flush));
}
