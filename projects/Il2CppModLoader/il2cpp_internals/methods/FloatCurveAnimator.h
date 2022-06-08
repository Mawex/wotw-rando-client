#include <interception_macros.h>

namespace app::methods::FloatCurveAnimator {
IL2CPP_REGISTER_METHOD(0x01270690, void, CacheOriginals, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01270710, void, SampleValue, (FloatCurveAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01270690, void, RestoreToOriginalState, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, IAnimatedValueProvider_float__GetValue, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01270800, bool, IAnimatedValueProvider_bool__GetValue, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01270820, bool, WasSampled, (FloatCurveAnimator * __this, int32_t frames));
IL2CPP_REGISTER_METHOD(0x012708F0, void, __ctor, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, IAnimatedValueProvider_float__get_name, (FloatCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, IAnimatedValueProvider_bool__get_name, (FloatCurveAnimator * __this));
}
