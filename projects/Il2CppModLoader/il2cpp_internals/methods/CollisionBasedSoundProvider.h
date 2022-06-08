#include <interception_macros.h>

namespace app::methods::CollisionBasedSoundProvider {
IL2CPP_REGISTER_METHOD(0x012D01E0, SoundDescriptor *, GetSoundForCollision, (CollisionBasedSoundProvider * __this, Collision * collision, IContext * context));
IL2CPP_REGISTER_METHOD(0x012D06B0, SoundDescriptor *, GetSound, (CollisionBasedSoundProvider * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012D0850, void, __ctor, (CollisionBasedSoundProvider * __this));
}
