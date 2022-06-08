using namespace app;

namespace app::methods::System::IO::Compression::GZipStream {
IL2CPP_REGISTER_METHOD(0x02009FA0, void, __ctor, (GZipStream * __this, Stream * stream, CompressionMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x02009FC0, void, __ctor, (GZipStream * __this, Stream * stream, CompressionMode__Enum mode, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x0200A160, bool, get_CanRead, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A180, bool, get_CanWrite, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A1A0, bool, get_CanSeek, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A1C0, int64_t, get_Length, (GZipStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04772DC0, GZipStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A220, int64_t, get_Position, (GZipStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A1E0, GZipStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A280, void, set_Position, (GZipStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04762C48, GZipStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A2E0, void, Flush, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A310, int64_t, Seek, (GZipStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04754420, GZipStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A370, void, SetLength, (GZipStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0470DD28, GZipStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A3D0, int32_t, ReadByte, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A400, IAsyncResult *, BeginRead, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHOD(0x0200A500, int32_t, EndRead, (GZipStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x0200A580, int32_t, Read, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0200A5B0, IAsyncResult *, BeginWrite, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHOD(0x0200A6B0, void, EndWrite, (GZipStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x0200A6C0, void, Write, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0200A6F0, void, Dispose, (GZipStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0200A790, Task_1_System_Int32_ *, ReadAsync, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0200A7C0, Task *, WriteAsync, (GZipStream * __this, Byte__Array * array, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0200A7F0, Task *, FlushAsync, (GZipStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0200A820, void, CheckDeflateStream, (GZipStream * __this));
IL2CPP_REGISTER_METHOD(0x0200A840, void, ThrowStreamClosedException, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0472AF38, GZipStream_ThrowStreamClosedException__MethodInfo);
}
