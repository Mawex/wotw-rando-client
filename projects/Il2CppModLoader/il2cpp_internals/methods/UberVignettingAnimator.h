#include <interception_macros.h>

namespace app::methods::UberVignettingAnimator {
IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292740, void, Awake, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x012928E0, void, OnDestroy, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292A80, void, CacheOriginals, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292B50, void, OnGameReset, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04712AE8, UberVignettingAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01292C20, void, SampleValue, (UberVignettingAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01292D20, void, RestoreToOriginalState, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (UberVignettingAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292D80, void, __ctor, (UberVignettingAnimator * __this));
}
