#include <interception_macros.h>

namespace app::methods::FloatFraction {
IL2CPP_REGISTER_METHOD(0x00125480, void, __ctor, (FloatFraction__Boxed * __this, float value, float max));
IL2CPP_REGISTER_METHOD(0x00125490, float, GetNormalized, (FloatFraction__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001254B0, void, SetToMax, (FloatFraction__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001254C0, void, ClampMax, (FloatFraction__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001254D0, void, ClampAtZero, (FloatFraction__Boxed * __this));
}
