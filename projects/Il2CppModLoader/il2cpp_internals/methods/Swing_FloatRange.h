#include <interception_macros.h>

namespace app::methods::Swing::FloatRange {
IL2CPP_REGISTER_METHOD(0x00125480, void, __ctor, (FloatRange__Boxed * __this, float _min, float _max));
IL2CPP_REGISTER_METHOD(0x0182ACD0, FloatRange, operator_, (float _f));
IL2CPP_REGISTER_METHOD(0x0182ACE0, FloatRange, operator__, (FloatRange _r, float _f));
IL2CPP_REGISTER_METHOD(0x0182AD10, FloatRange, operator__, (FloatRange _r, float _f));
IL2CPP_REGISTER_METHOD(0x0014B260, float, lerp, (FloatRange__Boxed * __this, float _t));
IL2CPP_REGISTER_METHOD(0x0014B280, float, inverseLerp, (FloatRange__Boxed * __this, float _value));
IL2CPP_REGISTER_METHOD(0x0014B2A0, float, inverseLerpClamped, (FloatRange__Boxed * __this, float _value));
IL2CPP_REGISTER_METHOD(0x0014B2B0, float, clamp, (FloatRange__Boxed * __this, float _value));
IL2CPP_REGISTER_METHOD(0x0014B2D0, float, get_random, (FloatRange__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B2E0, float, get_length, (FloatRange__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0014B2F0, float, get_avg, (FloatRange__Boxed * __this));
}
