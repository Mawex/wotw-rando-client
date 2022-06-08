#include <interception_macros.h>

namespace app::methods::CapsuleColliderAnimator {
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsLooping, (CapsuleColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B23670, void, CacheOriginals, (CapsuleColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B236F0, void, SampleValue, (CapsuleColliderAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A319F0, float, get_Duration, (CapsuleColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B23810, void, RestoreToOriginalState, (CapsuleColliderAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B23890, void, __ctor, (CapsuleColliderAnimator * __this));
}
