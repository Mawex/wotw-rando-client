#include <interception_macros.h>

namespace app::methods::DisplacementWaveAnimator {
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Duration, (DisplacementWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (DisplacementWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (DisplacementWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B99020, void, RestoreToOriginalState, (DisplacementWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B99030, void, SampleValue, (DisplacementWaveAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00B99210, void, OnStartPlay, (DisplacementWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (DisplacementWaveAnimator * __this));
}
