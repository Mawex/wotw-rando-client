#include <interception_macros.h>

namespace app::methods::EulerRotationAnimator {
IL2CPP_REGISTER_METHOD(0x00982550, Transform *, get_m_target, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00982620, float, get_AngularSpeedZ, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009826B0, void, CacheOriginals, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00982760, float, get_Duration, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00982860, void, SampleValue, (EulerRotationAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00982AF0, void, RestoreToOriginalState, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868870, Vector3, get_OriginalEulerAngles, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00982B40, bool, get_IsLooping, (EulerRotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00982DC0, void, __ctor, (EulerRotationAnimator * __this));
}
