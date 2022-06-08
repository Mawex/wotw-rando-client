#include <interception_macros.h>

namespace app::methods::System::IO::UnmanagedMemoryStream {
IL2CPP_REGISTER_METHOD(0x02389540, void, __ctor, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x023895E0, void, __ctor, (UnmanagedMemoryStream * __this, uint8_t * pointer, int64_t length));
IL2CPP_REGISTER_METHOD(0x023896C0, void, __ctor, (UnmanagedMemoryStream * __this, uint8_t * pointer, int64_t length, int64_t capacity, FileAccess__Enum access, bool skipSecurityCheck));
IL2CPP_REGISTER_METHOD(0x023897B0, void, Initialize, (UnmanagedMemoryStream * __this, uint8_t * pointer, int64_t length, int64_t capacity, FileAccess__Enum access, bool skipSecurityCheck));
IL2CPP_REGISTER_METHODINFO(0x04722298, UnmanagedMemoryStream_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02389A40, bool, get_CanRead, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_CanSeek, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02389A50, bool, get_CanWrite, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02389A70, void, Dispose, (UnmanagedMemoryStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02389A80, void, Flush, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02389AA0, Task *, FlushAsync, (UnmanagedMemoryStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02389BE0, int64_t, get_Length, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02389C10, int64_t, get_Position, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02389C50, void, set_Position, (UnmanagedMemoryStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04713300, UnmanagedMemoryStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02389D40, uint8_t *, get_PositionPointer, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D490, UnmanagedMemoryStream_get_PositionPointer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02389E70, int32_t, Read, (UnmanagedMemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04716E20, UnmanagedMemoryStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238A230, Task_1_System_Int32_ *, ReadAsync, (UnmanagedMemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x047864F8, UnmanagedMemoryStream_ReadAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238A600, int32_t, ReadByte, (UnmanagedMemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x0238A790, int64_t, Seek, (UnmanagedMemoryStream * __this, int64_t offset, SeekOrigin__Enum loc));
IL2CPP_REGISTER_METHODINFO(0x04725090, UnmanagedMemoryStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238A980, void, SetLength, (UnmanagedMemoryStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04766FD8, UnmanagedMemoryStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238AB70, void, Write, (UnmanagedMemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0475A938, UnmanagedMemoryStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B020, Task *, WriteAsync, (UnmanagedMemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04758BA8, UnmanagedMemoryStream_WriteAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B2B0, void, WriteByte, (UnmanagedMemoryStream * __this, uint8_t value));
IL2CPP_REGISTER_METHODINFO(0x0470F9C8, UnmanagedMemoryStream_WriteByte__MethodInfo);
}
