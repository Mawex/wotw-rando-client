#include <interception_macros.h>

namespace app::methods::TurbulenceTimelineAnimator {
IL2CPP_REGISTER_METHOD(0x013D5840, TurbulenceManager *, get_Manager, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013D5A50, void, CacheOriginals, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013D5B50, void, SampleValue, (TurbulenceTimelineAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x013D5D30, float, get_Duration, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013D5E10, void, RestoreToOriginalState, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013D5FC0, void, OnDisable, (TurbulenceTimelineAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013D60E0, void, __ctor, (TurbulenceTimelineAnimator * __this));
}
