using namespace app;

namespace app::methods::Moon::Timeline::PositionTweenCurveAnimator {
IL2CPP_REGISTER_METHOD(0x01E7C9B0, void, OnStartPlayback, (PositionTweenCurveAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (PositionTweenCurveAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E7CA90, void, OnUpdateEntity, (PositionTweenCurveAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E7D0F0, void, SynchronizeData, (PositionTweenCurveAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01E7D3D0, void, SynchronizePad, (PositionTweenCurveAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x01E7D4E0, void, __ctor, (PositionTweenCurveAnimator * __this));
}
