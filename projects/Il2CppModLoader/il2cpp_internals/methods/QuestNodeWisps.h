using namespace app;

namespace app::methods::QuestNodeWisps {
IL2CPP_REGISTER_METHOD(0x002FBC40, MoonTimeline *, get_IntroTimeline, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_IntroTimeline, (QuestNodeWisps * __this, MoonTimeline * value));
IL2CPP_REGISTER_METHOD(0x002FBC60, MoonTimeline *, get_TalkTimeline, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_TalkTimeline, (QuestNodeWisps * __this, MoonTimeline * value));
IL2CPP_REGISTER_METHOD(0x002FBC80, MoonTimeline *, get_RewardTimeline, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_RewardTimeline, (QuestNodeWisps * __this, MoonTimeline * value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, NPCEventTriggerAnimator *, get_ShowRewardTrigger, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_ShowRewardTrigger, (QuestNodeWisps * __this, NPCEventTriggerAnimator * value));
IL2CPP_REGISTER_METHOD(0x002FBCC0, NPCEventTriggerAnimator *, get_ThrowRewardTrigger, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_ThrowRewardTrigger, (QuestNodeWisps * __this, NPCEventTriggerAnimator * value));
IL2CPP_REGISTER_METHOD(0x002FBCE0, NPCEventTriggerAnimator *, get_CollectRewardTrigger, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_CollectRewardTrigger, (QuestNodeWisps * __this, NPCEventTriggerAnimator * value));
IL2CPP_REGISTER_METHOD(0x002FBD00, NPCEntity *, get_NpcEntity, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_NpcEntity, (QuestNodeWisps * __this, NPCEntity * value));
IL2CPP_REGISTER_METHOD(0x009ED350, bool, get_IsActive, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8BDE0, Transform *, get_RewardPrefab, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8BE00, MessageProvider *, get_CurrentLine, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8BE20, void, Awake, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8C0B0, void, SelectInteraction, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8C540, void, UpdateRewardState, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8CA20, void, OnEnter, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8CAC0, bool, Interact, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8CC80, void, ApplyReward, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHODINFO(0x0477BDF0, QuestNodeWisps_ApplyReward__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E8D180, void, StartTimeline, (QuestNodeWisps * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00E8D350, void, TimelineFinished, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHODINFO(0x047962E8, QuestNodeWisps_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E8D580, void, StartReward, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8D830, void, EndInteraction, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x00E8D910, void, GotQuestItemReward, (QuestNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x0056FAC0, void, __ctor, (QuestNodeWisps * __this));
}
