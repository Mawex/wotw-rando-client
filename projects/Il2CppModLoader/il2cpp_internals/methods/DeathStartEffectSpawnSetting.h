using namespace app;

namespace app::methods::DeathStartEffectSpawnSetting {
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, OnEntityInitialized, (DeathStartEffectSpawnSetting * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00DDE380, Transform *, get_EffectiveLocation, (DeathStartEffectSpawnSetting * __this));
IL2CPP_REGISTER_METHOD(0x00DDE450, GameObject *, Spawn, (DeathStartEffectSpawnSetting * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00DDEC60, void, __ctor, (DeathStartEffectSpawnSetting * __this));
}
