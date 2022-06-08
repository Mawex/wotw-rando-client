using namespace app;

namespace app::methods::SpiderBossLocationTimelineSet {
IL2CPP_REGISTER_METHOD(0x011B2970, void, SwapIdle, (SpiderBossLocationTimelineSet * __this, SpiderBossLocationZone__Enum zone, MirroredTimelineSet * timelines));
IL2CPP_REGISTER_METHOD(0x011B2A20, void, ResetIdle, (SpiderBossLocationTimelineSet * __this, SpiderBossLocationZone__Enum zone));
IL2CPP_REGISTER_METHOD(0x011B2AC0, void, CacheInitTimelines, (SpiderBossLocationTimelineSet * __this));
IL2CPP_REGISTER_METHOD(0x011B2290, MoonTimeline *, GetTimeline, (SpiderBossLocationTimelineSet * __this, SpiderBossLocationZone__Enum zone, float facingDirection));
IL2CPP_REGISTER_METHOD(0x011B2B50, MoonTimeline *, GetAnyTimeline, (SpiderBossLocationTimelineSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SpiderBossLocationTimelineSet * __this));
}
