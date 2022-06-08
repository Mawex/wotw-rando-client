#include <interception_macros.h>

namespace app::methods::DistortionAnimator {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeAnimated, (DistortionAnimator * __this, Renderer * r));
IL2CPP_REGISTER_METHOD(0x00B9A800, void, CacheOriginals, (DistortionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9A9F0, void, SampleValue, (DistortionAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (DistortionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9ABB0, void, RestoreToOriginalState, (DistortionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (DistortionAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9ACC0, void, __ctor, (DistortionAnimator * __this));
}
