using namespace app;

namespace app::methods::Ionic::Zlib::InflateBlocks {
IL2CPP_REGISTER_METHOD(0x0306FF50, void, __ctor, (InflateBlocks * __this, ZlibCodec * codec, Object * checkfn, int32_t w));
IL2CPP_REGISTER_METHOD(0x030701E0, uint32_t, Reset, (InflateBlocks * __this));
IL2CPP_REGISTER_METHOD(0x03070330, int32_t, Process, (InflateBlocks * __this, int32_t r));
IL2CPP_REGISTER_METHOD(0x03071DE0, void, Free, (InflateBlocks * __this));
IL2CPP_REGISTER_METHOD(0x03071E00, int32_t, Flush, (InflateBlocks * __this, int32_t r));
IL2CPP_REGISTER_METHOD(0x03072020, void, __cctor, (MethodInfo * method));
}
