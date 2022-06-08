using namespace app;

namespace app::methods::LaserShooterRockSpawnPoint {
IL2CPP_REGISTER_METHOD(0x00F207A0, void, PlaySpawn, (LaserShooterRockSpawnPoint * __this, LaserShieldDamageReceiver * piece, float projectileSpeed, LaserShieldPieceProjectile * projectilePrefab, LaserShieldRotationController * shieldController));
IL2CPP_REGISTER_METHOD(0x00F209A0, void, Spawn, (LaserShooterRockSpawnPoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C080, LaserShooterRockSpawnPoint_Spawn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F20D40, void, OnDisable, (LaserShooterRockSpawnPoint * __this));
IL2CPP_REGISTER_METHOD(0x00F20D50, void, ClearSpawnTrigger, (LaserShooterRockSpawnPoint * __this));
IL2CPP_REGISTER_METHOD(0x00F20F00, void, ClearSpawnTriggerSafe, (LaserShooterRockSpawnPoint * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LaserShooterRockSpawnPoint * __this));
}
