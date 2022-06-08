using namespace app;

namespace app::methods::LegacySwarmEnemyPlaceholder {
IL2CPP_REGISTER_METHOD(0x00A3B640, LegacyEntity *, Instantiate, (LegacySwarmEnemyPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00A3BAD0, void, OnChildComponentSpawned, (LegacySwarmEnemyPlaceholder * __this, LegacySwarmEnemy * swarmEnemy));
IL2CPP_REGISTER_METHOD(0x00A3BBF0, void, OnChildComponentDestroy, (LegacySwarmEnemyPlaceholder * __this, LegacySwarmEnemy * swarmEnemy));
IL2CPP_REGISTER_METHOD(0x00A3BCE0, bool, get_NeedsToRespawn, (LegacySwarmEnemyPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00A3BD80, void, __ctor, (LegacySwarmEnemyPlaceholder * __this));
}
