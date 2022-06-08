#include <interception_macros.h>

namespace app::methods::Moon::Timeline::QuaternionRotationAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x01E7D4F0, Transform *, get_TransformTarget, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D590, GameObject *, get_ExternalTarget, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D640, Transform *, get_EffectiveTransform, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D750, void, OnStartPlayback, (QuaternionRotationAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E7D7B0, void, SetupInitialValues, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D850, void, OnUpdateEntity, (QuaternionRotationAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E7D8B0, void, OnStartTimelineSample, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D8E0, void, OnEndTimelineSample, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7D990, void, OnTimelineSample, (QuaternionRotationAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x01E7DB20, float, GetAnimationCurveDuration, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7DD60, Quaternion, GetRotationAtValue, (QuaternionRotationAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7DE70, bool, GetCurrentValueAssociatedWithCurve, (QuaternionRotationAnimatorEntity * __this, String * curve, float * value));
IL2CPP_REGISTER_METHOD(0x01E7E130, void, SynchronizePad, (QuaternionRotationAnimatorEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (QuaternionRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7E670, void, __ctor, (QuaternionRotationAnimatorEntity * __this));
}
