#include <interception_macros.h>

namespace app::methods::System::Text::EncoderNLS {
IL2CPP_REGISTER_METHOD(0x0244D970, void, __ctor, (EncoderNLS * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04785228, EncoderNLS__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244DA70, void, ISerializable_GetObjectData, (EncoderNLS * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0244DBE0, void, __ctor, (EncoderNLS * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x0244DC10, void, __ctor, (EncoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0244DC30, void, Reset, (EncoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0244DC60, int32_t, GetByteCount, (EncoderNLS * __this, Char__Array * chars, int32_t index, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04790930, EncoderNLS_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244DE50, int32_t, GetByteCount, (EncoderNLS * __this, uint16_t * chars, int32_t count, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04782388, EncoderNLS_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244DFC0, int32_t, GetBytes, (EncoderNLS * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex, bool flush));
IL2CPP_REGISTER_METHODINFO(0x0476E6A8, EncoderNLS_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244E280, int32_t, GetBytes, (EncoderNLS * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, bool flush));
IL2CPP_REGISTER_METHODINFO(0x04797B68, EncoderNLS_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244E420, void, Convert, (EncoderNLS * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t * charsUsed, int32_t * bytesUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x047198A0, EncoderNLS_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0244E770, void, Convert, (EncoderNLS * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, bool flush, int32_t * charsUsed, int32_t * bytesUsed, bool * completed));
IL2CPP_REGISTER_METHODINFO(0x047506E0, EncoderNLS_Convert_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, Encoding *, get_Encoding, (EncoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_MustFlush, (EncoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0244E980, bool, get_HasState, (EncoderNLS * __this));
IL2CPP_REGISTER_METHOD(0x0089F980, void, ClearMustFlush, (EncoderNLS * __this));
}
