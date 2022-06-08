#include <interception_macros.h>

namespace app::methods::Game::Attacking_DamageDisplayText {
IL2CPP_REGISTER_METHOD(0x01521900, GameObject *, get_DamageText, ());
IL2CPP_REGISTER_METHOD(0x01521990, void, LoadDamageText, ());
IL2CPP_REGISTER_METHOD(0x01521AC0, DamageText *, Create, (Damage * damage, Transform * target, bool isPlayerDamage));
}
