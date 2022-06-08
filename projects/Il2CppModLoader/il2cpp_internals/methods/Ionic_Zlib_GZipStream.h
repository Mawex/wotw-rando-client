#include <interception_macros.h>

namespace app::methods::Ionic::Zlib::GZipStream {
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_Comment, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHOD(0x0306CE00, void, set_Comment, (GZipStream_1 * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474DEE8, GZipStream_1_set_Comment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_FileName, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHOD(0x0306CEC0, void, set_FileName, (GZipStream_1 * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04706018, GZipStream_1_set_FileName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D0A0, void, __ctor, (GZipStream_1 * __this, Stream * stream, CompressionMode__Enum_1 mode));
IL2CPP_REGISTER_METHOD(0x0306D0D0, void, __ctor, (GZipStream_1 * __this, Stream * stream, CompressionMode__Enum_1 mode, CompressionLevel__Enum level));
IL2CPP_REGISTER_METHOD(0x0306D0F0, void, __ctor, (GZipStream_1 * __this, Stream * stream, CompressionMode__Enum_1 mode, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x0306D120, void, __ctor, (GZipStream_1 * __this, Stream * stream, CompressionMode__Enum_1 mode, CompressionLevel__Enum level, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x0306D2D0, void, Dispose, (GZipStream_1 * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0306D3A0, bool, get_CanRead, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04712140, GZipStream_1_get_CanRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHOD(0x0306D480, bool, get_CanWrite, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04761838, GZipStream_1_get_CanWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D560, void, Flush, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04772F78, GZipStream_1_Flush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D630, int64_t, get_Length, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0478DDD8, GZipStream_1_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D680, int64_t, get_Position, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHOD(0x0306D700, void, set_Position, (GZipStream_1 * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0479A098, GZipStream_1_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D750, int32_t, Read, (GZipStream_1 * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04776188, GZipStream_1_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D940, int64_t, Seek, (GZipStream_1 * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04771750, GZipStream_1_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D990, void, SetLength, (GZipStream_1 * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047315A0, GZipStream_1_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306D9E0, void, Write, (GZipStream_1 * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04701940, GZipStream_1_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306DB50, int32_t, EmitHeader, (GZipStream_1 * __this));
IL2CPP_REGISTER_METHOD(0x0306E080, Byte__Array *, CompressBuffer, (Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x0306E380, Byte__Array *, UncompressBuffer, (Byte__Array * compressed));
IL2CPP_REGISTER_METHOD(0x0306E650, void, __cctor, ());
}
