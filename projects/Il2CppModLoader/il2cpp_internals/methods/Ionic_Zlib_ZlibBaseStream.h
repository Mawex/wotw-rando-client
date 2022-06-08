#include <interception_macros.h>

namespace app::methods::Ionic::Zlib::ZlibBaseStream {
IL2CPP_REGISTER_METHOD(0x03076B70, int32_t, get_Crc32, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03076B80, void, __ctor, (ZlibBaseStream * __this, Stream * stream, CompressionMode__Enum_1 compressionMode, CompressionLevel__Enum level, ZlibStreamFlavor__Enum flavor, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x03076D60, bool, get__wantCompress, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03076D70, ZlibCodec *, get_z, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03076F30, Byte__Array *, get_workingBuffer, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03076FC0, void, Write, (ZlibBaseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04728F78, ZlibBaseStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077300, void, finish, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04796130, ZlibBaseStream_finish__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077AA0, void, end, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03077C70, void, Close, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03077D40, void, Flush, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03077D70, int64_t, Seek, (ZlibBaseStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0477FC68, ZlibBaseStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077DC0, void, SetLength, (ZlibBaseStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x03077DF0, String *, ReadZeroTerminatedString, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04755DB0, ZlibBaseStream_ReadZeroTerminatedString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030781F0, int32_t, _ReadAndValidateGzipHeader, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B5F8, ZlibBaseStream__ReadAndValidateGzipHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078620, int32_t, Read, (ZlibBaseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04752F50, ZlibBaseStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078C20, bool, get_CanRead, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03078C50, bool, get_CanSeek, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03078C80, bool, get_CanWrite, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03078CB0, int64_t, get_Length, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHOD(0x03078CE0, int64_t, get_Position, (ZlibBaseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04734B20, ZlibBaseStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078D30, void, set_Position, (ZlibBaseStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0478F738, ZlibBaseStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078D80, void, CompressBuffer, (Byte__Array * b, Stream * compressor));
IL2CPP_REGISTER_METHOD(0x03078EB0, Byte__Array *, UncompressBuffer, (Byte__Array * compressed, Stream * decompressor));
}
