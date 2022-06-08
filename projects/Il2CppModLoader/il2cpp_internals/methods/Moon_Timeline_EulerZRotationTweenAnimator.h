#include <interception_macros.h>

namespace app::methods::Moon::Timeline::EulerZRotationTweenAnimator {
IL2CPP_REGISTER_METHOD(0x002FBC20, Transform *, get_TransformTarget, (EulerZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBBA10, Transform *, get_EffectiveTransform, (EulerZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBBAE0, void, OnStartPlayback, (EulerZRotationTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BBBAF0, void, SetupInitialValues, (EulerZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04736DD0, EulerZRotationTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BBBD90, void, SetRotation, (EulerZRotationTweenAnimator * __this, float angle));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (EulerZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBBEE0, void, OnUpdateEntity, (EulerZRotationTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BBC000, void, OnDrawGizmos, (EulerZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, HasFinished, (EulerZRotationTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01BBC490, void, __ctor, (EulerZRotationTweenAnimator * __this));
}
