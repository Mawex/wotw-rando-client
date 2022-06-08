#include <interception_macros.h>

namespace app::methods::RockyEnemyShootingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RockyEnemyShootingState * __this, RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RockyEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x013634D0, void, OnEnter, (RockyEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x013635A0, void, ShootProjectile, (RockyEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x01363A90, Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (RockyEnemyShootingState * __this));
IL2CPP_REGISTER_METHOD(0x01363C80, void, SpawnProjectile, (RockyEnemyShootingState * __this, Vector3 speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RockyEnemyShootingState * __this));
}
