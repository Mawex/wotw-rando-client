#include <interception_macros.h>

namespace app::methods::ScaleAxisAnimator {
IL2CPP_REGISTER_METHOD(0x009332D0, void, CacheOriginals, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933420, void, SampleValue, (ScaleAxisAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933600, void, OnPoolSpawned, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933710, void, RestoreToOriginalState, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933790, float, get_Duration, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868870, Vector3, get_OriginalScale, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (ScaleAxisAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933A20, void, __ctor, (ScaleAxisAnimator * __this));
}
