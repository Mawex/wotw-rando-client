#include <interception_macros.h>

namespace app::methods::System::Net::MonoChunkStream {
IL2CPP_REGISTER_METHOD(0x01E6F210, void, __ctor, (MonoChunkStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, WebHeaderCollection * headers));
IL2CPP_REGISTER_METHOD(0x01E6F280, void, __ctor, (MonoChunkStream * __this, WebHeaderCollection * headers));
IL2CPP_REGISTER_METHOD(0x01E6F4B0, void, ResetBuffer, (MonoChunkStream * __this));
IL2CPP_REGISTER_METHOD(0x01E6F4F0, void, WriteAndReadBack, (MonoChunkStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, int32_t * read));
IL2CPP_REGISTER_METHOD(0x01E6F570, int32_t, Read, (MonoChunkStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E6F580, int32_t, ReadFromChunks, (MonoChunkStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E6F930, void, Write, (MonoChunkStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E6F960, void, InternalWrite, (MonoChunkStream * __this, Byte__Array * buffer, int32_t * offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E6FBA0, bool, get_WantMore, (MonoChunkStream * __this));
IL2CPP_REGISTER_METHOD(0x01E6FBC0, bool, get_DataAvailable, (MonoChunkStream * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_TotalDataSize, (MonoChunkStream * __this));
IL2CPP_REGISTER_METHOD(0x01E6FD30, int32_t, get_ChunkLeft, (MonoChunkStream * __this));
IL2CPP_REGISTER_METHOD(0x01E6FD40, MonoChunkStream_State__Enum, ReadBody, (MonoChunkStream * __this, Byte__Array * buffer, int32_t * offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E6FF40, MonoChunkStream_State__Enum, GetChunkSize, (MonoChunkStream * __this, Byte__Array * buffer, int32_t * offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E70220, String *, RemoveChunkExtension, (String * input));
IL2CPP_REGISTER_METHOD(0x01E70280, MonoChunkStream_State__Enum, ReadCRLF, (MonoChunkStream * __this, Byte__Array * buffer, int32_t * offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E703B0, MonoChunkStream_State__Enum, ReadTrailer, (MonoChunkStream * __this, Byte__Array * buffer, int32_t * offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E70800, void, ThrowProtocolViolation, (String * message));
IL2CPP_REGISTER_METHODINFO(0x04721CE0, MonoChunkStream_ThrowProtocolViolation__MethodInfo);
}
