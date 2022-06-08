#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SandWormAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x00781AF0, void, OnStartPlayback, (SandWormAnimationPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00781BE0, void, OnUpdateEntity, (SandWormAnimationPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00781CD0, void, OnStopPlayback, (SandWormAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00781D10, bool, HasFinished, (SandWormAnimationPlayer * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00781D70, void, __ctor, (SandWormAnimationPlayer * __this));
}
