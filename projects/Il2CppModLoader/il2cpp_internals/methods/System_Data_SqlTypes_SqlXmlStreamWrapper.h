#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlXmlStreamWrapper {
IL2CPP_REGISTER_METHOD(0x022BD630, void, __ctor, (SqlXmlStreamWrapper * __this, Stream * stream));
IL2CPP_REGISTER_METHOD(0x022BD6E0, bool, get_CanRead, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BD730, bool, get_CanSeek, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BD780, bool, get_CanWrite, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BD7D0, int64_t, get_Length, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BD890, int64_t, get_Position, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BD930, void, set_Position, (SqlXmlStreamWrapper * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047633F8, SqlXmlStreamWrapper_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BDA40, int64_t, Seek, (SqlXmlStreamWrapper * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04751E40, SqlXmlStreamWrapper_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BDCD0, int32_t, Read, (SqlXmlStreamWrapper * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04785A80, SqlXmlStreamWrapper_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BDEF0, void, Write, (SqlXmlStreamWrapper * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0471C948, SqlXmlStreamWrapper_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BE110, int32_t, ReadByte, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BE2B0, void, WriteByte, (SqlXmlStreamWrapper * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x022BE3F0, void, SetLength, (SqlXmlStreamWrapper * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x022BE4C0, void, Flush, (SqlXmlStreamWrapper * __this));
IL2CPP_REGISTER_METHOD(0x022BE4E0, void, Dispose, (SqlXmlStreamWrapper * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x022BE500, void, ThrowIfStreamCannotSeek, (SqlXmlStreamWrapper * __this, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x04798DF8, SqlXmlStreamWrapper_ThrowIfStreamCannotSeek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BE5E0, void, ThrowIfStreamCannotRead, (SqlXmlStreamWrapper * __this, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x04786F10, SqlXmlStreamWrapper_ThrowIfStreamCannotRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BE6C0, void, ThrowIfStreamCannotWrite, (SqlXmlStreamWrapper * __this, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x0475DC48, SqlXmlStreamWrapper_ThrowIfStreamCannotWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BE7A0, void, ThrowIfStreamClosed, (SqlXmlStreamWrapper * __this, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x04713440, SqlXmlStreamWrapper_ThrowIfStreamClosed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BE870, bool, IsStreamClosed, (SqlXmlStreamWrapper * __this));
}
