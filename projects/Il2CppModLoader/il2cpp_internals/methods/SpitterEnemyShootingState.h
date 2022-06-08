using namespace app;

namespace app::methods::SpitterEnemyShootingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (SpitterEnemyShootingState * __this, SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (SpitterEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x009A0360, void, OnEnter, (SpitterEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x009A0370, void, ShootProjectile, (SpitterEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x009A08D0, Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (SpitterEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x009A0AC0, void, SpawnProjectile, (SpitterEnemyShootingState * __this, Vector3 speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SpitterEnemyShootingState * __this));
}
