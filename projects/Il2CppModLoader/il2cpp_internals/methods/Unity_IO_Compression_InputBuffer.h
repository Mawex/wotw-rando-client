using namespace app;

namespace app::methods::Unity::IO::Compression::InputBuffer {
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_AvailableBits, (InputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7CD80, int32_t, get_AvailableBytes, (InputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7CDA0, bool, EnsureBitsAvailable, (InputBuffer * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B7CEA0, uint32_t, TryLoad16Bits, (InputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7CFB0, uint32_t, GetBitMask, (InputBuffer * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B7CFC0, int32_t, GetBits, (InputBuffer * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B7D020, int32_t, CopyTo, (InputBuffer * __this, Byte__Array * output, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x021E17F0, bool, NeedsInput, (InputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02B7D0E0, void, SetInput, (InputBuffer * __this, Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x02B7D0F0, void, SkipBits, (InputBuffer * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x02B7D110, void, SkipToByteBoundary, (InputBuffer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InputBuffer * __this));
}
