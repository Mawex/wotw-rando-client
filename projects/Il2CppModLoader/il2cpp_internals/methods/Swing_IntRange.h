using namespace app;

namespace app::methods::Swing::IntRange {
IL2CPP_REGISTER_METHOD(0x00115520, void, __ctor, (IntRange__Boxed * __this, int32_t _min, int32_t _max));
IL2CPP_REGISTER_METHOD(0x0182B510, IntRange, operator_, (int32_t _i));
IL2CPP_REGISTER_METHOD(0x0182B170, IntRange, operator__, (IntRange _r, int32_t _mult));
IL2CPP_REGISTER_METHOD(0x0014B800, int32_t, get_random, (IntRange__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B8E0, int32_t, get_length, (IntRange__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B8F0, float, get_avg, (IntRange__Boxed * __this));
}
