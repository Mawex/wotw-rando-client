using namespace app;

namespace app::methods::SpiritLightAffectorIntensityAnimator {
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (SpiritLightAffectorIntensityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60750, void, CacheOriginals, (SpiritLightAffectorIntensityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60780, void, SampleValue, (SpiritLightAffectorIntensityAnimator * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (SpiritLightAffectorIntensityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60870, void, RestoreToOriginalState, (SpiritLightAffectorIntensityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D608A0, void, Reset, (SpiritLightAffectorIntensityAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60970, void, __ctor, (SpiritLightAffectorIntensityAnimator * __this));
}
