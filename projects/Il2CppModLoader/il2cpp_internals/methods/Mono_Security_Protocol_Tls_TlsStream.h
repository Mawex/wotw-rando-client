using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::TlsStream {
IL2CPP_REGISTER_METHOD(0x0291C7C0, bool, get_EOF, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_CanWrite, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanRead, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x01D612D0, bool, get_CanSeek, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61450, int64_t, get_Position, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61480, void, set_Position, (TlsStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01D61420, int64_t, get_Length, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291C810, void, __ctor, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291C980, void, __ctor, (TlsStream * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x0291CBB0, Byte__Array *, ReadSmallValue, (TlsStream * __this, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x047457E8, TlsStream_ReadSmallValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291CD00, uint8_t, ReadByte, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291CD40, int16_t, ReadInt16, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291CDA0, int32_t, ReadInt24, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291CE20, int32_t, ReadInt32, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291CEC0, Byte__Array *, ReadBytes, (TlsStream * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04783CC0, TlsStream_ReadBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291CFB0, void, Write, (TlsStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x0291D0A0, void, Write, (TlsStream * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x0291D1C0, void, WriteInt24, (TlsStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0291D310, void, Write, (TlsStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0291D4A0, void, Write, (TlsStream * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01F87620, void, Write, (TlsStream * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F87C90, void, Reset, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x0291D4E0, Byte__Array *, ToArray, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61660, void, Flush, (TlsStream * __this));
IL2CPP_REGISTER_METHOD(0x01D616F0, void, SetLength, (TlsStream * __this, int64_t length));
IL2CPP_REGISTER_METHOD(0x01D616C0, int64_t, Seek, (TlsStream * __this, int64_t offset, SeekOrigin__Enum loc));
IL2CPP_REGISTER_METHOD(0x0291D510, int32_t, Read, (TlsStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0478ADA0, TlsStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291D610, void, Write, (TlsStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047459F0, TlsStream_Write_5__MethodInfo);
}
