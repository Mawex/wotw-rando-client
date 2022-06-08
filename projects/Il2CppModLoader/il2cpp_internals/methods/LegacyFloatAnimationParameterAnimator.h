#include <interception_macros.h>

namespace app::methods::LegacyFloatAnimationParameterAnimator {
IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24500, void, CacheOriginals, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24560, void, SampleValue, (LegacyFloatAnimationParameterAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A245F0, void, RestoreToOriginalState, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24640, float, get_Duration, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24670, bool, get_IsLooping, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24750, bool, get_IsValid, (LegacyFloatAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A24840, void, __ctor, (LegacyFloatAnimationParameterAnimator * __this));
}
