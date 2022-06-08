#include <interception_macros.h>

namespace app::methods::Swing::FloatLUT {
IL2CPP_REGISTER_METHOD(0x0014AFB0, void, __ctor, (FloatLUT__Boxed * __this, int32_t sampleCount));
IL2CPP_REGISTER_METHOD(0x0014B070, void, SetRange, (FloatLUT__Boxed * __this, FloatRange range));
IL2CPP_REGISTER_METHOD(0x0014B0A0, FloatLUT_SampleCoord, GetSampleCoord, (FloatLUT__Boxed * __this, float time));
IL2CPP_REGISTER_METHOD(0x0014B0B0, float, Evaluate, (FloatLUT__Boxed * __this, FloatLUT_SampleCoord sample));
IL2CPP_REGISTER_METHOD(0x0014B0C0, float, Evaluate, (FloatLUT__Boxed * __this, float time));
IL2CPP_REGISTER_METHOD(0x0014B0E0, float, GetLocalMaxima, (FloatLUT__Boxed * __this, float fromTime, float toTime));
}
