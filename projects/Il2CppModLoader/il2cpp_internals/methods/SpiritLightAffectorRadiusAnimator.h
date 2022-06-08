#include <interception_macros.h>

namespace app::methods::SpiritLightAffectorRadiusAnimator {
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (SpiritLightAffectorRadiusAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60BB0, void, CacheOriginals, (SpiritLightAffectorRadiusAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60BE0, void, SampleValue, (SpiritLightAffectorRadiusAnimator * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (SpiritLightAffectorRadiusAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60CD0, void, RestoreToOriginalState, (SpiritLightAffectorRadiusAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60D00, void, Reset, (SpiritLightAffectorRadiusAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D60DD0, void, __ctor, (SpiritLightAffectorRadiusAnimator * __this));
}
