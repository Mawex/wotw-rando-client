using namespace app;

namespace app::methods::FaderAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (FaderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990B90, void, SampleValue, (FaderAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00990DC0, void, RestoreToOriginalState, (FaderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (FaderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (FaderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (FaderAnimator * __this));
}
