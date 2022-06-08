#include <interception_macros.h>

namespace app::methods::Moon::Timeline::PositionTweenAnimator {
IL2CPP_REGISTER_METHOD(0x01E7AF70, Transform *, get_TransformTarget, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7B090, GameObject *, get_ExternalTarget, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7B120, Transform *, get_EffectiveTransform, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7B2F0, void, OnStartPlayback, (PositionTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E7B3C0, void, SetupInitialValues, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04746E90, PositionTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7B620, void, OnUpdateEntity, (PositionTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00658AB0, bool, HasFinished, (PositionTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_GameObject_ *, GetGameObjectTarget, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7BA90, float, GetTweenNormalizedValue, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7BEE0, void, SynchronizeData, (PositionTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01E7C1C0, void, SynchronizePad, (PositionTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7C310, GameObject *, GetDynamicGraphicTarget, (PositionTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7C3E0, bool, ApproximateEvent, (PositionTweenAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01E7C630, void, __ctor, (PositionTweenAnimator * __this));
}
