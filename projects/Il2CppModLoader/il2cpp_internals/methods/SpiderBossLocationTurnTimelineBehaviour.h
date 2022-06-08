using namespace app;

namespace app::methods::SpiderBossLocationTurnTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x011B2BE0, String *, get_Info, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B5C80, SpiderBossLocationZone__Enum, get_StartZone, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010B5C80, SpiderBossLocationZone__Enum, GetForcedAnimationZone, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B2D10, void, OnEnter, (SpiderBossLocationTurnTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B2F50, void, InitializeCancellableController, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B3000, void, InitializeHitReactionController, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B30B0, void, PlayTimeline, (SpiderBossLocationTurnTimelineBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x011B30F0, void, PlayStartTimeline, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B32D0, void, PlayEndTimeline, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B3490, void, ForceZoneOnAnimationPlayer, (SpiderBossLocationTurnTimelineBehaviour * __this, MoonTimeline * timeline, SpiderBossLocationZone__Enum zone));
IL2CPP_REGISTER_METHOD(0x011B3700, void, OnStartTimelineEnded, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04777B08, SpiderBossLocationTurnTimelineBehaviour_OnStartTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B90C0, void, OnCanFinishEnd, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00D2F840, void, OnCanFinishStart, (SpiderBossLocationTurnTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011B3710, void, OnProcessRootMotion, (SpiderBossLocationTurnTimelineBehaviour * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x04712408, SpiderBossLocationTurnTimelineBehaviour_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011B37E0, BehaviourStatus__Enum, OnExecute, (SpiderBossLocationTurnTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B3940, void, OnExit, (SpiderBossLocationTurnTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011B3CF0, void, __ctor, (SpiderBossLocationTurnTimelineBehaviour * __this));
}
