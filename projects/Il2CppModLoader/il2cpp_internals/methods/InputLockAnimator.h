using namespace app;

namespace app::methods::InputLockAnimator {
IL2CPP_REGISTER_METHOD(0x00628CF0, void, OnStartPlay, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00628DB0, void, OnStopPlay, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (InputLockAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Duration, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (InputLockAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00628E80, void, __ctor, (InputLockAnimator * __this));
}
