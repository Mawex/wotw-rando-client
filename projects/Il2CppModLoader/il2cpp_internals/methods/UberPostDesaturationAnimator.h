using namespace app;

namespace app::methods::UberPostDesaturationAnimator {
IL2CPP_REGISTER_METHOD(0x00FF1900, void, Awake, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FF1AA0, void, OnDestroy, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FF1C40, void, OnGameReset, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04726A28, UberPostDesaturationAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FF1D10, void, CacheOriginals, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FF1DE0, void, SampleValue, (UberPostDesaturationAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00FF1EE0, void, RestoreToOriginalState, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (UberPostDesaturationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FF1F40, void, __ctor, (UberPostDesaturationAnimator * __this));
}
