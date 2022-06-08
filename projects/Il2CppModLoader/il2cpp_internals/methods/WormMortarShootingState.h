using namespace app;

namespace app::methods::WormMortarShootingState {
IL2CPP_REGISTER_METHOD(0x0058EEA0, void, __ctor, (WormMortarShootingState * __this, WormEnemy * worm, MortarWormDirectionalAnimations * shoot, PrefabSpawner * shootEffect, SoundSource * shootSound, ProjectileSpawner * projectileSpawner, float shootDelay, float projectileDamage));
IL2CPP_REGISTER_METHOD(0x0058EEE0, void, OnEnter, (WormMortarShootingState * __this));
IL2CPP_REGISTER_METHOD(0x0058F360, void, OnExit, (WormMortarShootingState * __this));
IL2CPP_REGISTER_METHOD(0x0058F370, void, UpdateState, (WormMortarShootingState * __this));
}
