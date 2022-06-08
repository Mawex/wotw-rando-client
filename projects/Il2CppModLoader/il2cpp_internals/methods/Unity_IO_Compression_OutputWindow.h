using namespace app;

namespace app::methods::Unity::IO::Compression::OutputWindow {
IL2CPP_REGISTER_METHOD(0x02B7D5A0, void, Write, (OutputWindow * __this, uint8_t b));
IL2CPP_REGISTER_METHOD(0x02B7D5F0, void, WriteLengthDistance, (OutputWindow * __this, int32_t length, int32_t distance));
IL2CPP_REGISTER_METHOD(0x02B7D790, int32_t, CopyFrom, (OutputWindow * __this, InputBuffer * input, int32_t length));
IL2CPP_REGISTER_METHOD(0x02B7D8F0, int32_t, get_FreeBytes, (OutputWindow * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_AvailableBytes, (OutputWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B7D900, int32_t, CopyTo, (OutputWindow * __this, Byte__Array * output, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x02B7D9C0, void, __ctor, (OutputWindow * __this));
}
