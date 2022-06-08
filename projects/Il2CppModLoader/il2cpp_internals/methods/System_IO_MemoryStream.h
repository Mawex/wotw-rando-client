using namespace app;

namespace app::methods::System::IO::MemoryStream {
IL2CPP_REGISTER_METHOD(0x02370060, void, __ctor, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370070, void, __ctor, (MemoryStream * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04755540, MemoryStream__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02370180, void, __ctor, (MemoryStream * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x02370290, void, __ctor, (MemoryStream * __this, Byte__Array * buffer, bool writable));
IL2CPP_REGISTER_METHODINFO(0x04774B48, MemoryStream__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023703B0, void, __ctor, (MemoryStream * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x023703E0, void, __ctor, (MemoryStream * __this, Byte__Array * buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible));
IL2CPP_REGISTER_METHODINFO(0x0474B570, MemoryStream__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_CanRead, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_CanSeek, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CanWrite, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x023705F0, void, EnsureWriteable, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370620, void, Dispose, (MemoryStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02370660, bool, EnsureCapacity, (MemoryStream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0475FE80, MemoryStream_EnsureCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370770, Task *, FlushAsync, (MemoryStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x023708B0, Byte__Array *, GetBuffer, (MemoryStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04742A60, MemoryStream_GetBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, Byte__Array *, InternalGetBuffer, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370980, int32_t, InternalGetPosition, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x023709A0, int32_t, InternalReadInt32, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370AC0, int32_t, InternalEmulateRead, (MemoryStream * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02370B00, int32_t, get_Capacity, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370B20, void, set_Capacity, (MemoryStream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04754768, MemoryStream_set_Capacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02370CA0, int64_t, get_Length, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370CC0, int64_t, get_Position, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02370CE0, void, set_Position, (MemoryStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04740268, MemoryStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02370E10, int32_t, Read, (MemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047086E8, MemoryStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023710C0, Task_1_System_Int32_ *, ReadAsync, (MemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x0470FDA8, MemoryStream_ReadAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023714C0, int32_t, ReadByte, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02371520, int64_t, Seek, (MemoryStream * __this, int64_t offset, SeekOrigin__Enum loc));
IL2CPP_REGISTER_METHODINFO(0x04734CB8, MemoryStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02371780, void, SetLength, (MemoryStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04773178, MemoryStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02371900, Byte__Array *, ToArray, (MemoryStream * __this));
IL2CPP_REGISTER_METHOD(0x02371A00, void, Write, (MemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0470F240, MemoryStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02371D40, Task *, WriteAsync, (MemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04710040, MemoryStream_WriteAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02372000, void, WriteByte, (MemoryStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x023720F0, void, WriteTo, (MemoryStream * __this, Stream * stream));
IL2CPP_REGISTER_METHODINFO(0x0475E008, MemoryStream_WriteTo__MethodInfo);
}
