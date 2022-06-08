#include <interception_macros.h>

namespace app::methods::ShowStoryTextAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (ShowStoryTextAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (ShowStoryTextAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (ShowStoryTextAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_Duration, (ShowStoryTextAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (ShowStoryTextAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007386A0, void, __ctor, (ShowStoryTextAnimator * __this));
}
