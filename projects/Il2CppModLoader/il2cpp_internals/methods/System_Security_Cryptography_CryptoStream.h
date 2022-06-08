using namespace app;

namespace app::methods::System::Security::Cryptography::CryptoStream {
IL2CPP_REGISTER_METHOD(0x020CCDA0, void, __ctor, (CryptoStream * __this, Stream * stream, ICryptoTransform * transform, CryptoStreamMode__Enum mode));
IL2CPP_REGISTER_METHODINFO(0x04762660, CryptoStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_CanRead, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x020CD0A0, bool, get_CanWrite, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x020CD0B0, int64_t, get_Length, (CryptoStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04736EA8, CryptoStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CD120, int64_t, get_Position, (CryptoStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04797168, CryptoStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CD190, void, set_Position, (CryptoStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04781040, CryptoStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CA4070, bool, get_HasFlushedFinalBlock, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x020CD200, void, FlushFinalBlock, (CryptoStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C858, CryptoStream_FlushFinalBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x020CD430, Task *, FlushAsync, (CryptoStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x020CD570, int64_t, Seek, (CryptoStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04767110, CryptoStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CD5E0, void, SetLength, (CryptoStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04769F60, CryptoStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CD650, int32_t, Read, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0473C0C0, CryptoStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CDBD0, Task_1_System_Int32_ *, ReadAsync, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04748E58, CryptoStream_ReadAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CDF80, Task_1_System_Int32_ *, ReadAsyncInternal, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x020CE0D0, void, Write, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0470A250, CryptoStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CE4E0, Task *, WriteAsync, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x0478CE58, CryptoStream_WriteAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020CE870, Task *, WriteAsyncInternal, (CryptoStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x01E113B0, void, Clear, (CryptoStream * __this));
IL2CPP_REGISTER_METHOD(0x020CE9B0, void, Dispose, (CryptoStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020CEB00, void, InitializeBuffer, (CryptoStream * __this));
}
