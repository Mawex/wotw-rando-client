#include <interception_macros.h>

namespace app::methods::FloatRange {
IL2CPP_REGISTER_METHOD(0x00125480, void, __ctor, (FloatRange_1__Boxed * __this, float min, float max));
IL2CPP_REGISTER_METHOD(0x001254E0, float, PickRandom, (FloatRange_1__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001255A0, int32_t, PickRandomInt, (FloatRange_1__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001256B0, float, Lerp, (FloatRange_1__Boxed * __this, float t));
IL2CPP_REGISTER_METHOD(0x00125780, float, Clamp, (FloatRange_1__Boxed * __this, float value));
}
