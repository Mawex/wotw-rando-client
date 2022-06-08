using namespace app;

namespace app::methods::Moon::Timeline::SceneEntity {
IL2CPP_REGISTER_METHOD(0x007835D0, void, OnUpdateEntity, (SceneEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x007836E0, void, OnStartPlayback, (SceneEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00783800, void, OnStopPlayback, (SceneEntity * __this));
IL2CPP_REGISTER_METHOD(0x00783820, bool, HasFinished, (SceneEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00783940, bool, ApproximateEvent, (SceneEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00783A70, void, SynchronizeData, (SceneEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00783C50, void, __ctor, (SceneEntity * __this));
}
