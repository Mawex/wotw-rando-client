using namespace app;

namespace app::methods::Ionic::Zlib::InflateCodes {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InflateCodes * __this));
IL2CPP_REGISTER_METHOD(0x030720D0, void, Init, (InflateCodes * __this, int32_t bl, int32_t bd, Int32__Array * tl, int32_t tl_index, Int32__Array * td, int32_t td_index));
IL2CPP_REGISTER_METHOD(0x03072100, int32_t, Process, (InflateCodes * __this, InflateBlocks * blocks, int32_t r));
IL2CPP_REGISTER_METHOD(0x03073590, int32_t, InflateFast, (InflateCodes * __this, int32_t bl, int32_t bd, Int32__Array * tl, int32_t tl_index, Int32__Array * td, int32_t td_index, InflateBlocks * s, ZlibCodec * z));
}
