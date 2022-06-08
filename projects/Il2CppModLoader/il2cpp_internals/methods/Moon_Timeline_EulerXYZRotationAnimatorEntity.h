using namespace app;

namespace app::methods::Moon::Timeline::EulerXYZRotationAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x01BB8900, Transform *, get_TransformTarget, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB89A0, GameObject *, get_ExternalTarget, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB8A50, Transform *, get_EffectiveTransform, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB8B60, void, OnStartPlayback, (EulerXYZRotationAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BB8BC0, void, SetupInitialValues, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A8B0, EulerXYZRotationAnimatorEntity_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB8CB0, void, OnUpdateEntity, (EulerXYZRotationAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BB8D10, void, OnStartTimelineSample, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB8D40, void, OnEndTimelineSample, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB8E30, void, OnTimelineSample, (EulerXYZRotationAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x01BB9010, float, GetAnimationCurveDuration, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB90C0, Vector3, GetRotationOffsetAtValue, (EulerXYZRotationAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x01BB9260, void, OnDrawGizmos, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB9730, bool, GetCurrentValueAssociatedWithCurve, (EulerXYZRotationAnimatorEntity * __this, String * curve, float * value));
IL2CPP_REGISTER_METHOD(0x01BB99F0, void, SynchronizePad, (EulerXYZRotationAnimatorEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01BB9E30, GameObject *, get_ObservedTarget, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x005D89A0, SetupStateModifierDataType__Enum, get_ObservedModifierType, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFB70, int32_t, get_FromStateGuid, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x014EB3E0, void, set_FromStateGuid, (EulerXYZRotationAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FFBD0, int32_t, get_ToStateGuid, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E6FE10, void, set_ToStateGuid, (EulerXYZRotationAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (EulerXYZRotationAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (EulerXYZRotationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (EulerXYZRotationAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01BB9EB0, void, GetManagedEarlyZDynamicGraphicTargets, (EulerXYZRotationAnimatorEntity * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (EulerXYZRotationAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01BB9FB0, void, __ctor, (EulerXYZRotationAnimatorEntity * __this));
}
