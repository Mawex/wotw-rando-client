#include <interception_macros.h>

namespace app::methods::Moon::Timeline::PositionAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x01E794A0, Transform *, get_TransformTarget, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E79530, GameObject *, get_ExternalTarget, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E795E0, Transform *, get_EffectiveTransform, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_DeltaTimeScale, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_DeltaTimeScale, (PositionAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E79730, void, OnStartPlayback, (PositionAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E79880, void, OnStopPlayback, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E79890, void, OnUpdateEntity, (PositionAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E79B80, Vector3, GetOffsetAtValue, (PositionAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x01E79CF0, bool, GetCurrentValueAssociatedWithCurve, (PositionAnimatorEntity * __this, String * curve, float * value));
IL2CPP_REGISTER_METHOD(0x01E79F60, void, OnBeforeSerialize, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7A890, void, SynchronizeData, (PositionAnimatorEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01E7A9D0, void, SynchronizePad, (PositionAnimatorEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x01BB9E30, GameObject *, get_ObservedTarget, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, SetupStateModifierDataType__Enum, get_ObservedModifierType, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_FromStateGuid, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00A15650, void, set_FromStateGuid, (PositionAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_ToStateGuid, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x008519D0, void, set_ToStateGuid, (PositionAnimatorEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (PositionAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (PositionAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (PositionAnimatorEntity * __this, SetupControllerStateHolder * controller, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (PositionAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E7ADD0, void, GetManagedEarlyZDynamicGraphicTargets, (PositionAnimatorEntity * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x01E7AED0, void, __ctor, (PositionAnimatorEntity * __this));
}
