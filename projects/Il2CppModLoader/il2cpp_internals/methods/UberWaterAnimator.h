#include <interception_macros.h>

namespace app::methods::UberWaterAnimator {
IL2CPP_REGISTER_METHOD(0x01292FC0, float, get_Duration, (UberWaterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01293340, bool, get_IsLooping, (UberWaterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01293640, void, CacheOriginals, (UberWaterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01293730, void, RestoreToOriginalState, (UberWaterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01293850, void, SampleValue, (UberWaterAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01293A60, void, __ctor, (UberWaterAnimator * __this));
}
