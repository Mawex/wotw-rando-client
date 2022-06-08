#include <interception_macros.h>

namespace app::methods::LegacyAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x015CB490, void, Awake, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x015CB5D0, MoonAnimator *, get_MoonAnimator, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x015CB6F0, float, get_Duration, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x015CB850, bool, get_IsLooping, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x015CB940, void, RestoreToOriginalState, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x015CB960, void, SampleValue, (LegacyAnimationPlayer * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x015CBD90, void, __ctor, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00F83F60, bool, _SampleValue_b__19_0, (LegacyAnimationPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D460, LegacyAnimationPlayer__SampleValue_b__19_0__MethodInfo);
}
