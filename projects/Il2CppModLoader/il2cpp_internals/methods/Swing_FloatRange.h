#include <interception_macros.h>

namespace app::methods::Swing::FloatRange {
    IL2CPP_REGISTER_METHOD(0x00125480, void, __ctor, (app::FloatRange__Boxed * this_ptr, float _min, float _max));
    IL2CPP_REGISTER_METHOD(0x0182ACD0, app::FloatRange, operator_, (float _f));
    IL2CPP_REGISTER_METHOD(0x0182ACE0, app::FloatRange, operator___1, (app::FloatRange _r, float _f));
    IL2CPP_REGISTER_METHOD(0x0182AD10, app::FloatRange, operator___2, (app::FloatRange _r, float _f));
    IL2CPP_REGISTER_METHOD(0x0014B260, float, lerp, (app::FloatRange__Boxed * this_ptr, float _t));
    IL2CPP_REGISTER_METHOD(0x0014B280, float, inverseLerp, (app::FloatRange__Boxed * this_ptr, float _value));
    IL2CPP_REGISTER_METHOD(0x0014B2A0, float, inverseLerpClamped, (app::FloatRange__Boxed * this_ptr, float _value));
    IL2CPP_REGISTER_METHOD(0x0014B2B0, float, clamp, (app::FloatRange__Boxed * this_ptr, float _value));
    IL2CPP_REGISTER_METHOD(0x0014B2D0, float, get_random, (app::FloatRange__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0014B2E0, float, get_length, (app::FloatRange__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0014B2F0, float, get_avg, (app::FloatRange__Boxed * this_ptr));
}
