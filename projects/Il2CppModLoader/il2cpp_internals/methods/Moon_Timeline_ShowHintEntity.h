using namespace app;

namespace app::methods::Moon::Timeline::ShowHintEntity {
IL2CPP_REGISTER_METHOD(0x00623240, float, get_Duration, (ShowHintEntity * __this));
IL2CPP_REGISTER_METHOD(0x00623250, void, set_Duration, (ShowHintEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D02840, void, OnStartPlayback, (ShowHintEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D02A20, void, OnStopPlayback, (ShowHintEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D02B40, void, SynchronizeData, (ShowHintEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00D02CA0, void, __ctor, (ShowHintEntity * __this));
}
