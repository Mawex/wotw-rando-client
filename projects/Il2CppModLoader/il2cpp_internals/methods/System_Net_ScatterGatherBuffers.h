using namespace app;

namespace app::methods::System::Net::ScatterGatherBuffers {
IL2CPP_REGISTER_METHOD(0x01BD0570, void, __ctor, (ScatterGatherBuffers * __this));
IL2CPP_REGISTER_METHOD(0x01BD0580, void, __ctor, (ScatterGatherBuffers * __this, int64_t totalSize));
IL2CPP_REGISTER_METHOD(0x01BD05C0, BufferOffsetSize_1__Array *, GetBuffers, (ScatterGatherBuffers * __this));
IL2CPP_REGISTER_METHOD(0x01BD08B0, bool, get_Empty, (ScatterGatherBuffers * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Length, (ScatterGatherBuffers * __this));
IL2CPP_REGISTER_METHOD(0x01BD08D0, void, Write, (ScatterGatherBuffers * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01BD09F0, ScatterGatherBuffers_MemoryChunk *, AllocateMemoryChunk, (ScatterGatherBuffers * __this, int32_t newSize));
}
