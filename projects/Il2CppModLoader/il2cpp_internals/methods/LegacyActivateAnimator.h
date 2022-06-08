#include <interception_macros.h>

namespace app::methods::LegacyActivateAnimator {
IL2CPP_REGISTER_METHOD(0x015C9FE0, void, OnStartPlay, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CA020, void, OnStopPlay, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CA070, void, CacheOriginals, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CA4B0, void, SampleValue, (LegacyActivateAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x015CA840, void, RestoreToOriginalState, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01130790, float, get_Duration, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_OriginalActivation, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (LegacyActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CABF0, void, __ctor, (LegacyActivateAnimator * __this));
}
