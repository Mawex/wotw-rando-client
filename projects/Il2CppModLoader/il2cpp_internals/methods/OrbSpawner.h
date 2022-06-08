using namespace app;

namespace app::methods::OrbSpawner {
IL2CPP_REGISTER_METHOD(0x0061AEE0, void, CopySettings, (OrbSpawner * __this, OrbSpawner * other));
IL2CPP_REGISTER_METHOD(0x0061AF10, void, Awake, (OrbSpawner * __this));
IL2CPP_REGISTER_METHOD(0x0061B150, void, OnDestroy, (OrbSpawner * __this));
IL2CPP_REGISTER_METHOD(0x0061B330, void, SetSpawnOrbsAnimatorTrigger, (OrbSpawner * __this, EventTriggerAnimator * spawnOrbsAnimatorTrigger));
IL2CPP_REGISTER_METHOD(0x0061B650, void, SetNumberOfExpOrbsOfEachSize, (OrbSpawner * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0061B850, void, SpawnExpOrbs, (OrbSpawner * __this, int32_t amount, Vector2 force, int32_t * spawnedOrbIndex));
IL2CPP_REGISTER_METHOD(0x0061B9F0, void, SpawnHealthOrbs, (OrbSpawner * __this, Vector2 force, int32_t * spawnedOrbIndex));
IL2CPP_REGISTER_METHOD(0x0061BA70, void, SpawnEnergyOrbs, (OrbSpawner * __this, Vector2 force, int32_t * spawnedOrbIndex));
IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_DamageDirectionSpeed, (OrbSpawner * __this));
IL2CPP_REGISTER_METHOD(0x0061BB00, void, SpawnOrbs, (OrbSpawner * __this));
IL2CPP_REGISTER_METHODINFO(0x047456C0, OrbSpawner_SpawnOrbs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0061BB10, void, SpawnOrbs, (OrbSpawner * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0061BE70, bool, SpawnLoot, (OrbSpawner * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x0061C2E0, void, SpawnPickup, (OrbSpawner * __this, OrbSpawnerManager_ItemType__Enum item, Vector2 force, int32_t i, int32_t overrideValue));
IL2CPP_REGISTER_METHOD(0x0061C7B0, void, OnDrawGizmosSelected, (OrbSpawner * __this));
IL2CPP_REGISTER_METHOD(0x0061CC30, void, __ctor, (OrbSpawner * __this));
}
