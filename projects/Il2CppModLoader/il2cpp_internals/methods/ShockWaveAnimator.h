#include <interception_macros.h>

namespace app::methods::ShockWaveAnimator {
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005B5010, void, OnStartPlay, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005B5030, void, RestoreToOriginalState, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005B50B0, void, SampleValue, (ShockWaveAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x005B5140, void, Start, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005B5160, void, OnFixedUpdate, (ShockWaveAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x005B5860, void, OnDrawGizmos, (ShockWaveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005B5C00, void, __ctor, (ShockWaveAnimator * __this));
}
