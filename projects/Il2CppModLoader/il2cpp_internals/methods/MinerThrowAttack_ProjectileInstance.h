using namespace app;

namespace app::methods::MinerThrowAttack_ProjectileInstance {
IL2CPP_REGISTER_METHOD(0x014524A0, void, Clear, (MinerThrowAttack_ProjectileInstance * __this));
IL2CPP_REGISTER_METHOD(0x00971AF0, void, SetPosition, (MinerThrowAttack_ProjectileInstance * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x014524B0, void, Populate, (MinerThrowAttack_ProjectileInstance * __this, GameObject * obj, float projectileGravity, float projectileDamage));
IL2CPP_REGISTER_METHOD(0x01452640, bool, CanThrow, (MinerThrowAttack_ProjectileInstance * __this));
IL2CPP_REGISTER_METHOD(0x01452710, void, Throw, (MinerThrowAttack_ProjectileInstance * __this, Vector2 force, Vector2 startPoint, EnemyEntity * miner));
IL2CPP_REGISTER_METHOD(0x01452960, void, ActivateProjectile, (MinerThrowAttack_ProjectileInstance * __this));
IL2CPP_REGISTER_METHOD(0x01452A30, void, DeactiveProjectile, (MinerThrowAttack_ProjectileInstance * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MinerThrowAttack_ProjectileInstance * __this));
}
