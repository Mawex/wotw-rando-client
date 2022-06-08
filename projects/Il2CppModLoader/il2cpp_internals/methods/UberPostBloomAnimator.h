#include <interception_macros.h>

namespace app::methods::UberPostBloomAnimator {
IL2CPP_REGISTER_METHOD(0x00FEED20, void, Awake, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEEF00, void, OnDestroy, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF0D0, void, CacheOriginals, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF1A0, void, OnGameReset, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04758740, UberPostBloomAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FEF270, void, SampleValue, (UberPostBloomAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00FEF410, void, RestoreToOriginalState, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF570, float, get_Duration, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF650, void, __ctor, (UberPostBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEFA30, void, __cctor, ());
}
