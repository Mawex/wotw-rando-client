#include <interception_macros.h>

namespace app::methods::VectorAnimationParameterAnimator {
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_Duration, (VectorAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (VectorAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (VectorAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (VectorAnimationParameterAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (VectorAnimationParameterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013BB1C0, void, __ctor, (VectorAnimationParameterAnimator * __this));
}
