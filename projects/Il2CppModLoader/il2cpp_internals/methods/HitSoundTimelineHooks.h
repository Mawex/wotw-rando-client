using namespace app;

namespace app::methods::HitSoundTimelineHooks {
IL2CPP_REGISTER_METHOD(0x00B583A0, void, Awake, (HitSoundTimelineHooks * __this));
IL2CPP_REGISTER_METHOD(0x00B583D0, void, OnReceiveEvent, (HitSoundTimelineHooks * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x00B584F0, void, PlayTimeline, (HitSoundTimelineHooks * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HitSoundTimelineHooks * __this));
}
