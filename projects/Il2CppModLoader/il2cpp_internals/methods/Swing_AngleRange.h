#include <interception_macros.h>

namespace app::methods::Swing::AngleRange {
IL2CPP_REGISTER_METHOD(0x00115520, void, __ctor, (AngleRange__Boxed * __this, Angle _min, Angle _max));
IL2CPP_REGISTER_METHOD(0x0014AD70, Angle, lerp, (AngleRange__Boxed * __this, float _t));
IL2CPP_REGISTER_METHOD(0x0014AE40, float, inverseLerp, (AngleRange__Boxed * __this, Angle _value));
}
