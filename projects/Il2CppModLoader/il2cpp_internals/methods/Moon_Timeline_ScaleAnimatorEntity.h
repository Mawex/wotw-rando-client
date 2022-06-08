using namespace app;

namespace app::methods::Moon::Timeline::ScaleAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x01E7E8B0, Transform *, get_TransformTarget, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7E940, GameObject *, get_ExternalTarget, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7E9F0, Transform *, get_EffectiveTransform, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7EB00, void, OnStartPlayback, (ScaleAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7EC80, void, OnUpdateEntity, (ScaleAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E7EFF0, float, GetAnimationCurveDuration, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7F190, Vector3, GetOffsetAtValue, (ScaleAnimatorEntity * __this, float value, Vector3 startingScale));
IL2CPP_REGISTER_METHOD(0x01E7F2A0, Vector3, GetMultiplyAtValue, (ScaleAnimatorEntity * __this, float value, Vector3 startingScale));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7F390, bool, GetCurrentValueAssociatedWithCurve, (ScaleAnimatorEntity * __this, String * curve, float * value));
IL2CPP_REGISTER_METHOD(0x01E7F600, void, SynchronizeData, (ScaleAnimatorEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BB9E30, GameObject *, get_ObservedTarget, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00AB4D20, SetupStateModifierDataType__Enum, get_ObservedModifierType, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_FromStateGuid, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x008519D0, void, set_FromStateGuid, (ScaleAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, int32_t, get_ToStateGuid, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D4DBA0, void, set_ToStateGuid, (ScaleAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (ScaleAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (ScaleAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (ScaleAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (ScaleAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01E7F7C0, void, __ctor, (ScaleAnimatorEntity * __this));
}
