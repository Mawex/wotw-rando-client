using namespace app;

namespace app::methods::System::IO::Compression::DeflateStreamNative {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DeflateStreamNative * __this));
IL2CPP_REGISTER_METHOD(0x020084B0, DeflateStreamNative *, Create, (Stream * compressedStream, CompressionMode__Enum mode, bool gzip));
IL2CPP_REGISTER_METHOD(0x02008810, void, Finalize, (DeflateStreamNative * __this));
IL2CPP_REGISTER_METHOD(0x020088F0, void, Dispose, (DeflateStreamNative * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020089E0, void, Flush, (DeflateStreamNative * __this));
IL2CPP_REGISTER_METHOD(0x02008AE0, int32_t, ReadZStream, (DeflateStreamNative * __this, void * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x02008BE0, void, WriteZStream, (DeflateStreamNative * __this, void * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x02008CE0, int32_t, UnmanagedRead, (void * buffer, int32_t length, void * data));
IL2CPP_REGISTER_METHODINFO(0x0473D7D0, DeflateStreamNative_UnmanagedRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02008F00, int32_t, UnmanagedRead, (DeflateStreamNative * __this, void * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x02009070, int32_t, UnmanagedWrite, (void * buffer, int32_t length, void * data));
IL2CPP_REGISTER_METHODINFO(0x0478BAA8, DeflateStreamNative_UnmanagedWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020092B0, int32_t, UnmanagedWrite, (DeflateStreamNative * __this, void * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x02009430, void, CheckResult, (int32_t result, String * where));
IL2CPP_REGISTER_METHODINFO(0x0472A070, DeflateStreamNative_CheckResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02009590, DeflateStreamNative_SafeDeflateStreamHandle *, CreateZStream, (CompressionMode__Enum compress, bool gzip, DeflateStreamNative_UnmanagedReadOrWrite * feeder, void * data));
IL2CPP_REGISTER_METHOD(0x020097D0, int32_t, CloseZStream, (void * stream));
IL2CPP_REGISTER_METHOD(0x020097E0, int32_t, Flush, (DeflateStreamNative_SafeDeflateStreamHandle * stream));
IL2CPP_REGISTER_METHOD(0x02009880, int32_t, ReadZStream, (DeflateStreamNative_SafeDeflateStreamHandle * stream, void * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x02009900, int32_t, WriteZStream, (DeflateStreamNative_SafeDeflateStreamHandle * stream, void * buffer, int32_t length));
}
