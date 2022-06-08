#include <interception_macros.h>

namespace app::methods::Ionic::Zlib::ZlibCodec {
IL2CPP_REGISTER_METHOD(0x030791D0, void, __ctor, (ZlibCodec * __this));
IL2CPP_REGISTER_METHOD(0x030791E0, int32_t, InitializeInflate, (ZlibCodec * __this, bool expectRfc1950Header));
IL2CPP_REGISTER_METHOD(0x030791F0, int32_t, InitializeInflate, (ZlibCodec * __this, int32_t windowBits, bool expectRfc1950Header));
IL2CPP_REGISTER_METHODINFO(0x04711328, ZlibCodec_InitializeInflate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030793A0, int32_t, Inflate, (ZlibCodec * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x04718A18, ZlibCodec_Inflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03079470, int32_t, EndInflate, (ZlibCodec * __this));
IL2CPP_REGISTER_METHODINFO(0x04778718, ZlibCodec_EndInflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03079560, int32_t, InitializeDeflate, (ZlibCodec * __this, CompressionLevel__Enum level, bool wantRfc1950Header));
IL2CPP_REGISTER_METHOD(0x03079580, int32_t, _InternalInitializeDeflate, (ZlibCodec * __this, bool wantRfc1950Header));
IL2CPP_REGISTER_METHODINFO(0x0475D4B0, ZlibCodec__InternalInitializeDeflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030797F0, int32_t, Deflate, (ZlibCodec * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x04749C30, ZlibCodec_Deflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030798C0, int32_t, EndDeflate, (ZlibCodec * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D6B0, ZlibCodec_EndDeflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03079980, void, flush_pending, (ZlibCodec * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FB38, ZlibCodec_flush_pending__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03079C00, int32_t, read_buf, (ZlibCodec * __this, Byte__Array * buf, int32_t start, int32_t size));
}
