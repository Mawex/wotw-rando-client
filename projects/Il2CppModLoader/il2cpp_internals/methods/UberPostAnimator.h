using namespace app;

namespace app::methods::UberPostAnimator {
IL2CPP_REGISTER_METHOD(0x00FEDD20, void, Awake, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEDEC0, void, OnDestroy, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEE060, void, OnGameReset, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047706D8, UberPostAnimator_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FEE130, void, CacheOriginals, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEE700, void, SampleValue, (UberPostAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00FEE9B0, void, RestoreToOriginalState, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (UberPostAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEEA00, void, __ctor, (UberPostAnimator * __this));
}
