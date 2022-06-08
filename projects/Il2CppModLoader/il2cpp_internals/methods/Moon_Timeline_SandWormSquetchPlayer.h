#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SandWormSquetchPlayer {
IL2CPP_REGISTER_METHOD(0x00782210, void, OnStartPlayback, (SandWormSquetchPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00781EF0, void, OnUpdateEntity, (SandWormSquetchPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x007822D0, void, OnStopPlayback, (SandWormSquetchPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00782380, void, SynchronizeData, (SandWormSquetchPlayer * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00782500, void, __ctor, (SandWormSquetchPlayer * __this));
}
