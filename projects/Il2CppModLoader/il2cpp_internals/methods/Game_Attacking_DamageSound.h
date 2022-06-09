#include <interception_macros.h>

namespace app::methods::Game::Attacking_DamageSound {
IL2CPP_REGISTER_METHOD(0x015223F0, SoundPlayer *, Play, (app::Damage * damage, app::Transform * target, app::DamageBasedSoundProvider * sound_provider));
}
