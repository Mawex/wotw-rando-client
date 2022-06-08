#include <interception_macros.h>

namespace app::methods::LegacyInstantiateAnimator {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (LegacyInstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyInstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A28B20, void, SampleValue, (LegacyInstantiateAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_Duration, (LegacyInstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (LegacyInstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A28E10, void, RestoreToOriginalState, (LegacyInstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A28F20, void, __ctor, (LegacyInstantiateAnimator * __this));
}
