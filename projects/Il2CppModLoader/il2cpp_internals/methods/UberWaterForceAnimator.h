using namespace app;

namespace app::methods::UberWaterForceAnimator {
IL2CPP_REGISTER_METHOD(0x0129F370, UberWaterForceActor *, get_Actor, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0129F440, void, OnEnable, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0129F4D0, void, CacheOriginals, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0129F5B0, void, SampleValue, (UberWaterForceAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x0129F6E0, void, RestoreToOriginalState, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (UberWaterForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (UberWaterForceAnimator * __this));
}
