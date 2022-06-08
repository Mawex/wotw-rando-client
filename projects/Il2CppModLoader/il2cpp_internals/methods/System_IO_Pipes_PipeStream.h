using namespace app;

namespace app::methods::System::IO::Pipes::PipeStream {
IL2CPP_REGISTER_METHOD(0x01F99750, void, __ctor, (PipeStream * __this, PipeDirection__Enum direction, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x01F99840, void, __ctor, (PipeStream * __this, PipeDirection__Enum direction, PipeTransmissionMode__Enum transmissionMode, int32_t outBufferSize));
IL2CPP_REGISTER_METHODINFO(0x04757E28, PipeStream__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99940, bool, get_CanRead, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x01F99950, bool, get_CanWrite, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsAsync, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_IsConnected, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_IsConnected, (PipeStream * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F99960, Stream *, get_Stream, (PipeStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04768418, PipeStream_get_Stream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99B80, void, CheckReadOperations, (PipeStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D320, PipeStream_CheckReadOperations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99C70, void, CheckWriteOperations, (PipeStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B490, PipeStream_CheckWriteOperations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99D60, void, Dispose, (PipeStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01F99DA0, int64_t, get_Length, (PipeStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A4B0, PipeStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Position, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x01F99DF0, void, set_Position, (PipeStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04795900, PipeStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99E40, void, SetLength, (PipeStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0478A208, PipeStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99E90, int64_t, Seek, (PipeStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0474BDF0, PipeStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F99EE0, int32_t, Read, (PipeStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F99F60, int32_t, ReadByte, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x01F99FA0, void, Write, (PipeStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F9A020, void, WriteByte, (PipeStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01F9A070, void, Flush, (PipeStream * __this));
IL2CPP_REGISTER_METHOD(0x01F9A0B0, IAsyncResult *, BeginRead, (PipeStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F9A300, IAsyncResult *, BeginWrite, (PipeStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F9A550, int32_t, EndRead, (PipeStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01F9A610, void, EndWrite, (PipeStream * __this, IAsyncResult * asyncResult));
}
