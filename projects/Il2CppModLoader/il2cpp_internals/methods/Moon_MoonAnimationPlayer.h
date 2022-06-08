using namespace app;

namespace app::methods::Moon::MoonAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (MoonAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAA850, ActiveAnimationHandle, get_ActiveAnimation, (MoonAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAA860, void, OnStartPlayback, (MoonAnimationPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BAAA00, void, OnUpdateEntity, (MoonAnimationPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BAAAB0, void, OnStopPlayback, (MoonAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAAAD0, void, SetTimeScale, (MoonAnimationPlayer * __this, float timescale));
IL2CPP_REGISTER_METHOD(0x01BAAB00, void, Play, (MoonAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAACA0, void, SynchronizeData, (MoonAnimationPlayer * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BAAE80, void, __ctor, (MoonAnimationPlayer * __this));
}
