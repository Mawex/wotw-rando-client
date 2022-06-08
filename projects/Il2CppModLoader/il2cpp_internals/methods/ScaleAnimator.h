#include <interception_macros.h>

namespace app::methods::ScaleAnimator {
IL2CPP_REGISTER_METHOD(0x00932DC0, void, CacheOriginals, (ScaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00932F30, void, SampleValue, (ScaleAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x009331B0, void, RestoreToOriginalState, (ScaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (ScaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933260, Vector3, get_OriginalScale, (ScaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (ScaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933280, void, __ctor, (ScaleAnimator * __this));
}
