using namespace app;

namespace app::methods::LegacyInputLockAnimator {
IL2CPP_REGISTER_METHOD(0x00A28990, void, OnStartPlay, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A28A50, void, OnStopPlay, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (LegacyInputLockAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Duration, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (LegacyInputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00628E80, void, __ctor, (LegacyInputLockAnimator * __this));
}
