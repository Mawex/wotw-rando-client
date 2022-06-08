#include <interception_macros.h>

namespace app::methods::RotationAnimatorB {
IL2CPP_REGISTER_METHOD(0x01371210, void, CacheOriginals, (RotationAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x01371320, void, SampleValue, (RotationAnimatorB * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01371500, void, RestoreToOriginalState, (RotationAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x01371550, float, get_Duration, (RotationAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x01371720, Vector3, get_OriginalRotation, (RotationAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x00982B40, bool, get_IsLooping, (RotationAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (RotationAnimatorB * __this));
}
