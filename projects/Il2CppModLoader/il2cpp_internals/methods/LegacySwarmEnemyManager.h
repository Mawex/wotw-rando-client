#include <interception_macros.h>

namespace app::methods::LegacySwarmEnemyManager {
IL2CPP_REGISTER_METHOD(0x00A3AA30, void, Awake, (LegacySwarmEnemyManager * __this));
IL2CPP_REGISTER_METHOD(0x00A3ABD0, void, OnDestroy, (LegacySwarmEnemyManager * __this));
IL2CPP_REGISTER_METHOD(0x00A3AD60, void, OnGameSerializeLoad, (LegacySwarmEnemyManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0472ACE0, LegacySwarmEnemyManager_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A3AE40, void, QueueSpawn, (LegacySwarmEnemyManager * __this, Vector3 pos, Vector3 velocity, int32_t lootAmount, OrbSpawner * spawner, float damageOnTouch, GameObject * child, MoonGuid * sceneRoot, LegacySwarmEnemyPlaceholder * owner));
IL2CPP_REGISTER_METHOD(0x00A3B060, void, Update, (LegacySwarmEnemyManager * __this));
IL2CPP_REGISTER_METHOD(0x00A3B4D0, void, __ctor, (LegacySwarmEnemyManager * __this));
}
