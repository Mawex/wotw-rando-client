#include <interception_macros.h>

namespace app::methods::GameplayToCinematicAnimator {
IL2CPP_REGISTER_METHOD(0x002FBC60, CameraPuppetController *, get_Puppet, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00415E70, void, CacheOriginals, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00415F40, void, Awake, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004160E0, void, OnDestroy, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00416280, void, OnGameReset, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0477EE50, GameplayToCinematicAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00416350, void, SampleValue, (GameplayToCinematicAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00416620, float, get_Duration, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004166C0, void, RestoreToOriginalState, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (GameplayToCinematicAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00416880, void, __ctor, (GameplayToCinematicAnimator * __this));
}
