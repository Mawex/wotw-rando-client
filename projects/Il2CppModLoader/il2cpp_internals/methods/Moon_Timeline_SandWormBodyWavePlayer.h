using namespace app;

namespace app::methods::Moon::Timeline::SandWormBodyWavePlayer {
IL2CPP_REGISTER_METHOD(0x00781E30, void, OnStartPlayback, (SandWormBodyWavePlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00781EF0, void, OnUpdateEntity, (SandWormBodyWavePlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00781F20, void, OnStopPlayback, (SandWormBodyWavePlayer * __this));
IL2CPP_REGISTER_METHOD(0x00781FD0, void, SynchronizeData, (SandWormBodyWavePlayer * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00782150, void, __ctor, (SandWormBodyWavePlayer * __this));
}
