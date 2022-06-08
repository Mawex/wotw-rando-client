using namespace app;

namespace app::methods::Game::Attacking_DamageDisplayText {
IL2CPP_REGISTER_METHOD(0x01521900, GameObject *, get_DamageText, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01521990, void, LoadDamageText, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01521AC0, DamageText *, Create, (Damage * damage, Transform * target, bool isPlayerDamage));
}
