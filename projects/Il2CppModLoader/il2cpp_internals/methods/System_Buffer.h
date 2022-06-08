using namespace app;

namespace app::methods::System::Buffer {
IL2CPP_REGISTER_METHOD(0x0229E780, bool, InternalBlockCopy, (Array * src, int32_t srcOffsetBytes, Array * dst, int32_t dstOffsetBytes, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x0229E840, int32_t, IndexOfByte, (uint8_t * src, uint8_t value, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0229E900, int32_t, _ByteLength, (Array * array));
IL2CPP_REGISTER_METHOD(0x0229E950, void, ZeroMemory, (uint8_t * src, int64_t len));
IL2CPP_REGISTER_METHOD(0x0229E970, void, Memcpy, (Byte__Array * dest, int32_t destIndex, uint8_t * src, int32_t srcIndex, int32_t len));
IL2CPP_REGISTER_METHOD(0x0229E9B0, void, Memcpy, (uint8_t * pDest, int32_t destIndex, Byte__Array * src, int32_t srcIndex, int32_t len));
IL2CPP_REGISTER_METHOD(0x0229E9F0, int32_t, ByteLength, (Array * array));
IL2CPP_REGISTER_METHODINFO(0x04771448, Buffer_ByteLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229EB30, void, BlockCopy, (Array * src, int32_t srcOffset, Array * dst, int32_t dstOffset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0475F0A8, Buffer_BlockCopy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0229EDB0, void, MemoryCopy, (Void * source, Void * destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy));
IL2CPP_REGISTER_METHOD(0x0229EF00, void, memcpy4, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x0229EFA0, void, memcpy2, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x0229F020, void, memcpy1, (uint8_t * dest, uint8_t * src, int32_t size));
IL2CPP_REGISTER_METHOD(0x0229F0D0, void, Memcpy, (uint8_t * dest, uint8_t * src, int32_t size));
}
