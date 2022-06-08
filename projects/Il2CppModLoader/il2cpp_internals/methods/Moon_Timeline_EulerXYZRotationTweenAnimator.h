#include <interception_macros.h>

namespace app::methods::Moon::Timeline::EulerXYZRotationTweenAnimator {
IL2CPP_REGISTER_METHOD(0x01BBA1A0, Transform *, get_TransformTarget, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBA230, GameObject *, get_ExternalTarget, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBA2E0, Transform *, get_EffectiveTransform, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBA3B0, void, OnStartPlayback, (EulerXYZRotationTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BBA3C0, void, SetupInitialValues, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0471FBA0, EulerXYZRotationTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBA7B0, void, OnUpdateEntity, (EulerXYZRotationTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BBAA50, Quaternion, GetCurrentRotation, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBACB0, bool, TweenHasFinished, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBACD0, void, OnDrawGizmos, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, HasFinished, (EulerXYZRotationTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (EulerXYZRotationTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBB530, void, SynchronizePad, (EulerXYZRotationTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x01BBB640, bool, ApproximateEvent, (EulerXYZRotationTweenAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01BBB890, void, __ctor, (EulerXYZRotationTweenAnimator * __this));
}
