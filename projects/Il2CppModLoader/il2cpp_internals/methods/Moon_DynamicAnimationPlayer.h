using namespace app;

namespace app::methods::Moon::DynamicAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x01BAA050, void, Clone, (DynamicAnimationPlayer * __this, AnimationPlayer * player));
IL2CPP_REGISTER_METHOD(0x01BAA3C0, void, OnActiveAnimationStopEvent, (DynamicAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAA3F0, bool, HasFinished, (DynamicAnimationPlayer * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SynchronizeData, (DynamicAnimationPlayer * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BAA410, bool, ApproximateEvent, (DynamicAnimationPlayer * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00F59B40, void, __ctor, (DynamicAnimationPlayer * __this));
}
