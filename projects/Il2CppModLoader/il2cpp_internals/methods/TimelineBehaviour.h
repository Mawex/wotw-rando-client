using namespace app;

namespace app::methods::TimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBBA0, LegacyTimelineSequence *, get_TimelineSequence, (TimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_TimelineSequence, (TimelineBehaviour * __this, LegacyTimelineSequence * value));
IL2CPP_REGISTER_METHOD(0x008693A0, float, get_AnimationSpeed, (TimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_AnimationSpeed, (TimelineBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x010F4940, void, OnExecute, (TimelineBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x010F4A60, void, OnUpdateBehaviour, (TimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010F4B20, void, OnEndBehaviour, (TimelineBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, GetShouldPauseTree, (TimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (TimelineBehaviour * __this));
}
