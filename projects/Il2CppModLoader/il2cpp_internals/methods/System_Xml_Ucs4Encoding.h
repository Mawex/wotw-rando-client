using namespace app;

namespace app::methods::System::Xml::Ucs4Encoding {
IL2CPP_REGISTER_METHOD(0x0173D7B0, String *, get_WebName, (Ucs4Encoding * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Decoder *, GetDecoder, (Ucs4Encoding * __this));
IL2CPP_REGISTER_METHOD(0x01952400, int32_t, GetByteCount, (Ucs4Encoding * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0475BEB0, Ucs4Encoding_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, Byte__Array *, GetBytes, (Ucs4Encoding * __this, String * s));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetBytes, (Ucs4Encoding * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetMaxByteCount, (Ucs4Encoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHOD(0x019524A0, int32_t, GetCharCount, (Ucs4Encoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019524D0, int32_t, GetChars, (Ucs4Encoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHOD(0x01952500, int32_t, GetMaxCharCount, (Ucs4Encoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_CodePage, (Ucs4Encoding * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Encoder *, GetEncoder, (Ucs4Encoding * __this));
IL2CPP_REGISTER_METHOD(0x01952510, Encoding *, get_UCS4_Littleendian, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01952650, Encoding *, get_UCS4_Bigendian, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01952790, Encoding *, get_UCS4_2143, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x019528D0, Encoding *, get_UCS4_3412, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01952A10, void, __ctor, (Ucs4Encoding * __this));
}
