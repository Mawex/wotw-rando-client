using namespace app;

namespace app::methods::System::IO::Stream_NullStream {
IL2CPP_REGISTER_METHOD(0x0237E700, void, __ctor, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanSeek, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Length, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Position, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, (Stream_NullStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (Stream_NullStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x0237E790, Task *, FlushAsync, (Stream_NullStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0237E870, IAsyncResult *, BeginRead, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237E8E0, int32_t, EndRead, (Stream_NullStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x047538E0, Stream_NullStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237E9B0, IAsyncResult *, BeginWrite, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x0237EA20, void, EndWrite, (Stream_NullStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04756078, Stream_NullStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Read, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0237EAF0, Task_1_System_Int32_ *, ReadAsync, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, ReadByte, (Stream_NullStream * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0237ED10, Task *, WriteAsync, (Stream_NullStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteByte, (Stream_NullStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, Seek, (Stream_NullStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLength, (Stream_NullStream * __this, int64_t length));
}
